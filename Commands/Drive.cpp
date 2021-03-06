/* FIRST Team 1073's RobotBuilder (0.0.2) for WPILibExtensions ---
Do not mix this code with any other version of RobotBuilder! */
#include "Drive.h"
Drive::Drive() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::drivetrain);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
// Called just before this Command runs the first time
void Drive::Initialize() {
	
}
// Called repeatedly when this Command is scheduled to run
void Drive::Execute() {
	Robot::drivetrain->Move(Robot::oi->getDriveStick()->GetX(), Robot::oi->getDriveStick()->GetY(), Robot::oi->getDriveStick()->GetZ());
}
// Make this return true when this Command no longer needs to run execute()
bool Drive::IsFinished() {
	return false;
}
// Called once after isFinished returns true
void Drive::End() {
	
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Drive::Interrupted() {
}
