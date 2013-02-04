#ifndef DEFINE_SHOOTER
#define DEFINE_SHOOTER

#include "WPILib.h"

class Shooter {
public:
	Shooter();

	void Set(float);

	void Off();
	
	Victor motor1;
	
	Victor motor2;
};

#endif
