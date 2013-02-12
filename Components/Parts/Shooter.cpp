#include "Shooter.h"

Shooter::Shooter(int port1, int port2) : motor1(port1), motor2(port2) {
	direction = 1;
	speed = 0;
}

//Sets the speed of the shooter motors
void Shooter::Set(float speed)
{
	motor1.Set(speed);
	motor2.Set(speed);
}

//(Obviously) Turns off the motors by setting them to 0.
void Shooter::Off()
{
	motor1.Set(0.0);
	motor2.Set(0.0);
}
