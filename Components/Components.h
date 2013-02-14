#ifndef COMPONENTS_H_
#define COMPONENTS_H_

#include "WPILib.h"
#include "Parts/Loader.h"
#include "Parts/Shooter.h"
#include "Parts/SinglePiston.h"

//All this does is create a class which contains other classes for all of our components.
class Components
{
private:
	static const int talonUpRPort = 1;
	static const int talonUpLPort = 2;
	static const int talonDownRPort = 3;
	static const int talonDownLPort = 4;
	
	static const int victorUpPort = 5;
	static const int victorDownPort = 6;
	static const int jaguarHopperPort = 7;
	
	static const int solenoidPneuPort1 = 1;
	static const int solenoidPneuPort2 = 2;
	
	static const int compPressurePort = 1;
	static const int compRelayPort = 1;
	
public:
	// Constructor
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
};

#endif
