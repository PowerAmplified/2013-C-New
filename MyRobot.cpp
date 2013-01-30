#include "WPILib.h"
#include "ScaledJoystick.h"

/**
 * This is a demo program showing the use of the RobotBase class.
 * The SimpleRobot class is the base of a robot application that will automatically call your
 * Autonomous and OperatorControl methods at the right time as controlled by the switches on
 * the driver station or the field controls.
 */ 
class RobotDemo : public SimpleRobot
{
	RobotDrive myRobot;
	//Joystick stickl;
	//Joystick stickr;
	Victor victor1;
	Victor victor2;
	Jaguar jaguar;
	Solenoid solout;
	Solenoid solin;
	Compressor comp;
	ScaledJoystick sjLeft;
	ScaledJoystick sjRight;

public:
	RobotDemo(void):
		myRobot(1, 2),
		//stickl(1),
		//stickr(2),
		victor1(1),
		victor2(2),
		jaguar(1),
		solout(1),
		solin(2),
		comp(1, 1),
		sjLeft(1),
		sjRight(2)
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
		myRobot.SetSafetyEnabled(false);
		myRobot.Drive(-0.5, 0.0); 	// drive forwards half speed
		Wait(2.0); 				//    for 2 seconds
		myRobot.Drive(0.0, 0.0); 	// stop robot
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
			/*
			if (xPad->IsConnected()) {
				myRobot.TankDrive(xPad.GetState().sThumbLY,xPad.GetState().sThumbRY);
			}
			*/
			myRobot.TankDrive(sjLeft.GetLinY(.5), sjRight.GetLinY(.5), false);
			
			/*
			victor1.Set(-stickr.GetZ());
			victor2.Set(-stickr.GetZ();
			if (stickr.GetButton(1) && (victor1.Get() > minRot) && (victor2.Get() > minRot)op && isLoaded);
			{
				solin.Set(false);
				solout.Set(true);
			}
			if (solCycleOutR >= solWaitOut)
			{
				solout.Set(false);
				soin.Set(true);
				isLoaded = false;
			}
			if ((solCycleInR >=  solCycleWaitIn) && (!isLoaded))
			{
				jaguar.Set(255);
			}
			if ((jaguarCycleR >= jaguarWait))
			{
				jaguar.Set(0);
			}
			(solout.Get()) ? solCycleOut++ : solCylceOut = 0;
			(solin.Get()) ? solCycleIn++ : solCycleIn = 0;
			(jaguar.Get()) ? jaguarCycle++ : jaguarCycle = 0;
			*/
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

