#include "AutoRobot.h"

AutoRobot::AutoRobot() {
	RobotCommandCycle = 0;
}

void AutoRobot::AutoRobotRun(void) {
	switch (RobotCommandCycle) {
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
	RobotCommandCycle = (RobotCommandCycle+1) % 2;
}
