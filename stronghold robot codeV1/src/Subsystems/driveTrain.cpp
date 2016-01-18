// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.




#include "DriveTrain.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "../Commands/driveWithJoysticks.h"
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

DriveTrain::DriveTrain() : Subsystem("DriveTrain") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    leftMotor1 = RobotMap::driveTrainleftMotor1;
    leftMotor2 = RobotMap::driveTrainleftMotor2;
    rightMotor1 = RobotMap::driveTrainrightMotor1;
    rightMotor2 = RobotMap::driveTrainrightMotor2;
    robotDrive41 = RobotMap::driveTrainRobotDrive41;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void DriveTrain::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND

        SetDefaultCommand(new driveWithJoysticks());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
void DriveTrain::driveOn(){
	float leftStickY = Robot::oi->getdriveStickLeft()->GetY();
	float rightStickY = Robot::oi->getdriveStickRight()->GetY();
	RobotMap::driveTrainleftMotor1->Set(-leftStickY);
	RobotMap::driveTrainleftMotor2->Set(-leftStickY);
	RobotMap::driveTrainrightMotor1->Set(rightStickY);
	RobotMap::driveTrainrightMotor2->Set(rightStickY);
}
void DriveTrain::stop(){
	RobotMap::driveTrainleftMotor1->Set(0);
	RobotMap::driveTrainleftMotor2->Set(0);
	RobotMap::driveTrainrightMotor1->Set(0);
	RobotMap::driveTrainrightMotor2->Set(0);
}
