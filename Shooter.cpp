#include "Shooter.h"

Shooter::Shooter() : motor1(5), motor2(6) {
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
