#ifndef WPILIB_H_
#define WPILIB_H_

#include "WPILib.h"

class ScaledJoystick 
{
public:
	ScaledJoystick(int joystickNumber);
	virtual ScaledJoystick();
	
	float GetLinX(float scale);
	float GetLinY(float scale);
	float GetLinZ(float scale);
	float GetQuadX(void);
	float GetQuadY(void);
	float GetQuadZ(void);
		
private:
	Joystick stick;
};

#endif
