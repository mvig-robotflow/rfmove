//
// Created by yongxi on 2021/7/11.
//

#ifndef MOVEIT_NO_ROS_BULLET3_HARDWARE_H
#define MOVEIT_NO_ROS_BULLET3_HARDWARE_H

#include <pybind11/pybind11.h>
#include <hardware_pybullet.h>

#include <utility>

/**
 * Class used to call pybullet within cpp.
 */


void declare_pybullet_controller(py::module& m) {

    /**
     * @warning It is not a good idea to use JointHandler directly as it is only a accessor to pybullet.
     * This binding is mainly for debugging.
     */
    py::class_<JointHandler>(m, "JointHandler")
        .def("position", &JointHandler::position)
        .def("velocity", &JointHandler::velocity)
        .def("setPosVel", &JointHandler::setPosVel);

    py::class_<HardwareInterface> (m, "HardwareInterface")
        .def("getJointHandler", &HardwareInterface::getJointHandler,
         py::arg("joint_name"));

    /**
     * @warning It is not a good idea to use PybulletHardware methods directly as they are only accessors to pybullet.
     * Use helper classes and controller instead.
     */
    py::class_<PybulletHardware, HardwareInterface>(m, "PybulletHardware")
        .def(py::init<py::handle, int>())
        .def("getNumBodies", &PybulletHardware::getNumBodies)
        .def("printJointInfo", &PybulletHardware::printJointInfo)
        .def("printJointState", &PybulletHardware::printJointState)
        .def("stayCurrent", &PybulletHardware::stayCurrent)
        .def("free", &PybulletHardware::free);
        //.def("getJointHandler", &PybulletHardware::getJointHandler,
        //     py::arg("joint_name"));

    //m.def("BulletHardware", [](py::module bullet, int bodyId) -> HardwareInterface*{
    //   return  new PybulletHardware(std::move(bullet), bodyId);
    //});
}

#endif //MOVEIT_NO_ROS_BULLET3_HARDWARE_H