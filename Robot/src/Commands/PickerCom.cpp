// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "PickerCom.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

PickerCom::PickerCom(): Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(Robot::chassis.get());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::pickerSub.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	buttonBPressed = false;
}
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void PickerCom::Initialize() {
buttonBPressed = false;
}

// Called repeatedly when this Command is scheduled to run
void PickerCom::Execute() {
	buttonBPressed = Robot::oi->getDriverJoystick()->GetRawButton(2);

		if(buttonBPressed){
			Robot::pickerSub->PickUp(1);
		}//end of if
		else{
			Robot::pickerSub->PickUp(0);
		}//end of else
}

// Make this return true when this Command no longer needs to run execute()
bool PickerCom::IsFinished() {
    return false;
}

// Called once after isFinished returns true
void PickerCom::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PickerCom::Interrupted() {

}
