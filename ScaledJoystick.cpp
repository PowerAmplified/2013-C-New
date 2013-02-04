#include "ScaledJoystick.h"
#include "WPILib.h"
#include <cmath>

ScaledJoystick::ScaledJoystick(int joystickNumber):
	stick(joystickNumber){}

float ScaledJoystick::GetLinX(float scale)
{
	return stick.GetX() * scale;
}

float ScaledJoystick::GetLinY(float scale)
{
	return stick.GetZ() * scale;
}

float ScaledJoystick::GetLinZ(float scale)
{
	return stick.GetZ() * scale;
}

float ScaledJoystick::GetQuadX(void)
{
	return pow(stick.GetX(), 3);
}

float ScaledJoystick::GetQuadY(void)
{
	return pow(stick.GetY(), 3);
}

float ScaledJoystick::GetQuadZ(void)
{
	return pow(stick.GetZ(), 3);
}
