#include "WPILib.h"
#include "RobotCommands.h"

/**
 * This is a demo program showing the use of the RobotBase class.
 * The SimpleRobot class is the base of a robot application that will automatically call your
 * Autonomous and OperatorControl methods at the right time as controlled by the switches on
 * the driver station or the field controls.
 */ 
class RobotDemo : public SimpleRobot
{
	//Our classes.  Can only be accessed within RobotDemo.
	RobotCommands robot;
	//Joystick jXbox;
	Joystick jXbox;

public:
	//Define the constructor for RobotDemo
	RobotDemo(void):
		robot(),
		jXbox(1)
	{
		//Set some stuff
		robot.components.roberto.SetExpiration(0.1);
		robot.components.roberto.SetSafetyEnabled(true);
		robot.components.comp.Start();
		
		// Invert Right side motors
		robot.components.roberto.SetInvertedMotor(robot.components.roberto.kFrontRightMotor, true);
		robot.components.roberto.SetInvertedMotor(robot.components.roberto.kRearRightMotor, true);
	}

	/**
	 * Drive left & right motors for 2 seconds then stop
	 */
	void Autonomous(void)
	{
		//Which cycle of commands the robot is on, so it loops through all this mess.
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
			
			//Increment it, then modulate it so that it will repeat upon completion
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
			//components.roberto.MecanumDrive_Cartesian(jXbox.GetX(), jXbox.GetY(), jXbox.GetRawAxis(4));
			robot.components.roberto.MecanumDrive_Cartesian(jXbox.GetX(), jXbox.GetY(), jXbox.GetRawAxis(4));
			
			robot.Cycle();
			
			//This part will take inputs from our gamepad and change the speed of the shooter by increments of .1 between 0 and 1.
			//components.shooter.speed = max(min(components.shooter.speed+(0.1*jXbox.GetRawButton(8))-(0.1*jXbox.GetRawButton(7)),1),0);
			//components.shooter.Set(components.shooter.speed*(components.shooter.direction*2-1));
			
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

