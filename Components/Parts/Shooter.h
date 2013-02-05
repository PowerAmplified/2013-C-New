#ifndef DEFINE_SHOOTER
#define DEFINE_SHOOTER

#include "WPILib.h"

class Shooter {
public:
	Shooter(int port1, int port2);

	void Set(float);

	void Off();
	
	bool direction;
	
	float speed;
	
	Victor motor1;
	Victor motor2;
};

#endif
