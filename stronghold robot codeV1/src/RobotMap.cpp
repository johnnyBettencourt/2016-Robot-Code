// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
std::shared_ptr<SpeedController> RobotMap::manipulatorBliftMotor;
std::shared_ptr<DigitalInput> RobotMap::launcherLimitSwitch1;
std::shared_ptr<SpeedController> RobotMap::launchertopMotor;
std::shared_ptr<SpeedController> RobotMap::launcherbottomMotor;
std::shared_ptr<SpeedController> RobotMap::launcherbeltMotor;
std::shared_ptr<SpeedController> RobotMap::launcherintakeMotor;
std::shared_ptr<SpeedController> RobotMap::driveTrainleftMotor1;
std::shared_ptr<SpeedController> RobotMap::driveTrainleftMotor2;
std::shared_ptr<SpeedController> RobotMap::driveTrainrightMotor1;
std::shared_ptr<SpeedController> RobotMap::driveTrainrightMotor2;
std::shared_ptr<RobotDrive> RobotMap::driveTrainRobotDrive41;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    LiveWindow *lw = LiveWindow::GetInstance();

    manipulatorBliftMotor.reset(new Talon(8));
    lw->AddActuator("ManipulatorB", "liftMotor", (Talon&) manipulatorBliftMotor);
    
    launcherLimitSwitch1.reset(new DigitalInput(0));
    lw->AddSensor("Launcher", "Limit Switch 1", launcherLimitSwitch1);
    
    launchertopMotor.reset(new Talon(4));
    lw->AddActuator("Launcher", "topMotor", (Talon&) launchertopMotor);
    
    launcherbottomMotor.reset(new Talon(5));
    lw->AddActuator("Launcher", "bottomMotor", (Talon&) launcherbottomMotor);
    
    launcherbeltMotor.reset(new Talon(6));
    lw->AddActuator("Launcher", "beltMotor", (Talon&) launcherbeltMotor);
    
    launcherintakeMotor.reset(new Talon(7));
    lw->AddActuator("Launcher", "intakeMotor", (Talon&) launcherintakeMotor);
    
    driveTrainleftMotor1.reset(new Talon(0));
    lw->AddActuator("DriveTrain", "leftMotor1", (Talon&) driveTrainleftMotor1);
    
    driveTrainleftMotor2.reset(new Talon(1));
    lw->AddActuator("DriveTrain", "leftMotor2", (Talon&) driveTrainleftMotor2);
    
    driveTrainrightMotor1.reset(new Talon(2));
    lw->AddActuator("DriveTrain", "rightMotor1", (Talon&) driveTrainrightMotor1);
    
    driveTrainrightMotor2.reset(new Talon(3));
    lw->AddActuator("DriveTrain", "rightMotor2", (Talon&) driveTrainrightMotor2);
    
    driveTrainRobotDrive41.reset(new RobotDrive(driveTrainleftMotor1, driveTrainleftMotor2,
              driveTrainrightMotor1, driveTrainrightMotor2));
    
    driveTrainRobotDrive41->SetSafetyEnabled(true);
        driveTrainRobotDrive41->SetExpiration(0.1);
        driveTrainRobotDrive41->SetSensitivity(0.5);
        driveTrainRobotDrive41->SetMaxOutput(1.0);



    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
