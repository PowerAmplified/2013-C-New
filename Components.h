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
	/*
	const int talonUpRPort;
	const int talonUpLPort;
	const int talonDownRPort;
	const int talonDownLPort;
	const int victorUpPort;
	const int victorDownPort;
	const int jaguarHopperPort;
	const int solenoidPneuPort;
	const int compPressurePort;
	const int compRelayPort;
	*/
};

#endif
