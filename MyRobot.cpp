#include "WPILib.h"
#include "Components/Components.h"

/**
 * This is a demo program showing the use of the RobotBase class.
 * The SimpleRobot class is the base of a robot application that will automatically call your
 * Autonomous and OperatorControl methods at the right time as controlled by the switches on
 * the driver station or the field controls.
 */ 
class RobotDemo : public SimpleRobot
{
private:
	Components components;
	Joystick jXbox;

public:
	RobotDemo(void):
		components(),
		jXbox(1)
	{
		components.roberto.SetSafetyEnabled(true);
		components.roberto.SetExpiration(0.1);
		components.comp.Start();
	}

	/**
	 * Drive left & right motors for 2 seconds then stop
	 */
	void Autonomous(void)
	{
		int RobotCommandCycle = 0;
		
		while (IsAutonomous()) 
		{
			switch (RobotCommandCycle) 
			{
				case 0:
					//Move around to a good location
					break;
				case 1:
					//SHOOT STUFF!
					break;
				default:
					//Do absolutely nothing.
					break;
			}
			
			RobotCommandCycle = (RobotCommandCycle++) % 2;
		}
	}

	/**
	 * Runs the motors with tank steering
	 */
	void OperatorControl(void)
	{
		while (IsOperatorControl())
		{
			// This is actually mechanum drive, now.
			components.roberto.MecanumDrive_Cartesian(jXbox.GetX(), jXbox.GetY(), jXbox.GetRawAxis(4));
			
			components.shooter.speed = max(min(components.shooter.speed+(0.1*jXbox.GetRawButton(8))-(0.1*jXbox.GetRawButton(7)),1),0);
			components.shooter.Set(components.shooter.speed*(components.shooter.direction*2-1));
			
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

