#ifndef ROBOT_COMMANDS
#define ROBOT_COMMANDS

#include "WPILib.h"
#include "Components\Components.h"

class RobotCommands {
public:
	RobotCommands();
	
	void Fire();

	void Load();

	void Cycle();

	void SpinAdjust(float);

	//Yes, these are supposed to be public

	Components components;


private:
	bool loaded;
	float DefaultSpeed;
};

#endif
