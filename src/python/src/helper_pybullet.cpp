//
// Created by yongxi on 2021/7/16.
//

#include "helper_pybullet.h"

#include <utility>

PlanningSceneHelper::PlanningSceneHelper(PybulletHardware pybullet, planning_scene::PlanningScenePtr planning_scene)
    : pybullet_(std::move(pybullet))
    , planning_scene_(std::move(planning_scene))
{
}

void PlanningSceneHelper::sync() {
    moveit::core::RobotState& robot_state = planning_scene_->getCurrentStateNonConst();
    std::vector<double> position;
    std::vector<double> velocity;
    pybullet_.getJointStateAll(position, velocity);
    size_t index = 0;
    for(const auto& name: pybullet_.getJointNames()) {
        /// @todo Support multi dof joint
        robot_state.setJointPositions(name, &position[index]);
        // Velocity is not synchronized.
        ++index;
    }
}

Eigen::Affine3d PlanningSceneHelper::linkTransform(const std::string &link_name, bool _sync) {
    if(_sync) {
        sync();
    }
    return planning_scene_->getCurrentStateNonConst().getGlobalLinkTransform(link_name);
}

Eigen::Affine3d PlanningSceneHelper::linkRelativeTransform(const std::string &link_name, const std::string &frame,
                                                           bool _sync) {
    if(_sync) {
        sync();
    }
    Eigen::Affine3d linkTran = planning_scene_->getCurrentStateNonConst().getGlobalLinkTransform(link_name);
    Eigen::Affine3d frameTran = planning_scene_->getCurrentStateNonConst().getFrameTransform(frame);
    return (frameTran.inverse(Eigen::TransformTraits::Affine) * linkTran);
}