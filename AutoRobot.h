#ifndef AUTO_ROBOT_H
#define AUTO_ROBOT_H

#include "WPILib.h"

class AutoRobot {
public:
	AutoRobot();
	void AutoRobotRun(void);
	
private:
	int RobotCommandCycle;
};

#endif
