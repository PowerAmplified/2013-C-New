#include "WPILib.h"
#include "ScaledJoystick.h"
#include "AutoRobot.h"
#include "Loader.h"
#include "Shooter.h"
#include "SinglePiston.h"

/**
 * This is a demo program showing the use of the RobotBase class.
 * The SimpleRobot class is the base of a robot application that will automatically call your
 * Autonomous and OperatorControl methods at the right time as controlled by the switches on
 * the driver station or the field controls.
 */ 
class RobotDemo : public SimpleRobot
{
	RobotDrive myRobot;
	Shooter shooter;
	Loader loader;
	SinglePiston piston;
	Compressor comp;
	Joystick jXbox;
	AutoRobot cAutonomous;

public:
	RobotDemo(void):
		myRobot(1,2,3,4),
		shooter(),
		loader(),
		piston(),
		comp(1, 1),
		jXbox(1),
		cAutonomous()
	{
		myRobot.SetExpiration(0.1);
		//solout.Set(false);
		//solin.Set(true);
		comp.Start();
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
		myRobot.SetSafetyEnabled(true);
		while (IsOperatorControl())
		{
			// This is actually tank drive, now.
			myRobot.MecanumDrive_Cartesian(jXbox.GetX(), jXbox.GetY(), jXbox.GetRawAxis(4));
			Wait(0.005);				// wait for a motor update time
		}
	}
	
	/**
	 * Runs during test mode
	 */
	void Test() {

	}
};

START_ROBOT_CLASS(RobotDemo);

