#include "WPILib.h"
#include "Components/Components.h"
#include "AutoRobot.h"

/**
 * This is a demo program showing the use of the RobotBase class.
 * The SimpleRobot class is the base of a robot application that will automatically call your
 * Autonomous and OperatorControl methods at the right time as controlled by the switches on
 * the driver station or the field controls.
 */ 
class RobotDemo : public SimpleRobot
{
	Components components;
	Joystick jXbox;
	AutoRobot cAutonomous;

public:
	RobotDemo(void):
		components(),
		jXbox(1),
		cAutonomous()
	{
		components.roberto.SetExpiration(0.1);
		components.comp.Start();
	}

	/**
	 * Drive left & right motors for 2 seconds then stop
	 */
	void Autonomous(void)
	{
		while (IsAutonomous()) {
			cAutonomous.AutoRobotRun();
		}
	}

	/**
	 * Runs the motors with tank steering
	 */
	void OperatorControl(void)
	{
		components.roberto.SetSafetyEnabled(true);
		while (IsOperatorControl())
		{
			// This is actually mechanum drive, now.
			components.roberto.MecanumDrive_Cartesian(jXbox.GetX(), jXbox.GetY(), jXbox.GetRawAxis(4));
		
			// Wait for a motor update time
			Wait(0.005);
		}
	}
	
	/**
	 * Runs during test mode
	 */
	void Test() {

	}
};

START_ROBOT_CLASS(RobotDemo);

