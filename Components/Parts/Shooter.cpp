#include "Shooter.h"

Shooter::Shooter(int port1, int port2) : motor1(port1), motor2(port2) {
}

void Shooter::Set(float speed)
{
	motor1.Set(speed);
	motor2.Set(speed);
}

void Shooter::Off()
{
	motor1.Set(0.0);
	motor2.Set(0.0);
}
