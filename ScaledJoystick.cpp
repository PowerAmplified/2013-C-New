#include "WPILib.h"

class ScaledJoystick 
{
public:
	ScaledJoystick(int joystickNumber)
	{
		stick = new Joystick(joystickNumber);
	}
	
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
		return Math.pow(stick.GetX(), 2);
	}
	
	float GetQuadY(void)
	{
		return Math.pow(stick.GetY(), 2);
	}
	
	float GetQuadZ(void)
	{
		return Math.pow(stick.GetZ(), 2);
	}
		
private:
	Joystick stick;
};
