#ifndef COMPONENTS_H_
#define COMPONENTS_H_

#include "WPILib.h"
#include "Parts/Loader.h"
#include "Parts/Shooter.h"
#include "Parts/SinglePiston.h"
#include "Parts/ScaledJoystick.h"

class Components
{
public:
	Components(void);
	
	//Robot is called Roberto
	RobotDrive roberto;
	
	//Init Shooter Components
	Shooter shooter;
	
	//Init Componenets for Da Hoppa
	Loader loader;
	
	//Init Pneumatic Componenets
	SinglePiston piston;
	
	//Init Compressor
	Compressor comp;
	
private:
	static const int talonUpRPort = 1;
	static const int talonUpLPort = 2; 
	static const int talonDownRPort = 3;
	static const int talonDownLPort = 4;
	static const int victorUpPort = 5;
	static const int victorDownPort = 6;
	static const int jaguarHopperPort = 7;
	static const int solenoidPneuPort1 = 8;
	static const int solenoidPneuPort2 = 9;
	static const int compPressurePort = 1;
	static const int compRelayPort = 1;
};

#endif
