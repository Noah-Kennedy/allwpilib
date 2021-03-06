/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include <CameraServer.h>
#include <IterativeRobot.h>

/**
 * Uses the CameraServer class to automatically capture video from a USB webcam
 * and send it to the FRC dashboard without doing any vision processing. This
 * is the easiest way to get camera images to the dashboard. Just add this to
 * the
 * RobotInit() method in your program.
 */
class Robot : public frc::IterativeRobot {
public:
	void RobotInit() {
		CameraServer::GetInstance()->StartAutomaticCapture();
	}
};

START_ROBOT_CLASS(Robot)
