#include "RobotCommands.h"

RobotCommands::RobotCommands() : components() {
	loaded = false;
	DefaultSpeed = 0.5;
}

//Need global variable: "Loaded"

void RobotCommands::Fire()
{
	if (loaded) components.piston.SetOut();
	loaded = false;
}

void RobotCommands::Load()
{
	if (!(loaded) and components.piston.GetIn())
	{
		components.loader.LoadDisc();
	}
	else
	{	
		components.piston.SetIn();
	}
}

//Need gloal variable: "DefaultSpeed"

void RobotCommands::SpinAdjust(float x)
{
	if (x >= 0.0)
	{
		components.shooter.Set((x) * (1.0 - DefaultSpeed) + DefaultSpeed);
	}
	else
	{
		components.shooter.Set(DefaultSpeed - (-x) * (DefaultSpeed));
	}
}

void RobotCommands::Cycle()
{
	components.loader.CheckLoad();
}
