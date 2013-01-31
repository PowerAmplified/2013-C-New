#ifndef COMPONENTS_H_
#define COMPONENTS_H_

#include "WPILib.h"

class Components
{
public:
	Components(void);
	
	//Robot is called Roberto
	RobotDrive roberto;
	
	//Init Shooter Components
	Victor victorUp;
	Victor victorDown;
	
	//Init Componenets for Da Hoppa
	Jaguar jaguarHopper;
	
	//Init Pneumatic Componenets
	Solenoid solenoidPneu;
	
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
	static const int solenoidPneuPort = 8;
	static const int compPressurePort = 1;
	static const int compRelayPort = 1;
};

#endif
