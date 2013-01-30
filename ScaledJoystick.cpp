#include "WPILib.h"
#include <cmath>

class ScaledJoystick 
{
public:
	ScaledJoystick(int joystickNumber):
		stick(joystickNumber){}
	
	float GetLinX(float scale)
	{
		return stick.GetX() * scale;
	}
	
	float GetLinY(float scale)
	{
		return stick.GetZ() * scale;
	}
	
	float GetLinZ(float scale)
	{
		return stick.GetZ() * scale;
	}
	
	float GetQuadX(void)
	{
		return pow(stick.GetX(), 3);
	}
	
	float GetQuadY(void)
	{
		return pow(stick.GetY(), 3);
	}
	
	float GetQuadZ(void)
	{
		return pow(stick.GetZ(), 3);
	}
		
private:
	Joystick stick;
};
