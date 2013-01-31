#ifndef COMPONENTS_H_
#define COMPONENTS_H_

#include "WPILiB.h"

class Components
{
public:
	//Init Drive Components
	Talon talonUpR;
	Talon talonUpL;
	Talon talonDownR;
	Talon talonDownL;
	
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
	const int talonUpRPort = 1;
	const int talonUpLPort = 2; 
	const int talonDownRPort = 3;
	const int talonDownLPort = 4;
	const int victorUpPort = 5;
	const int victorDownPort = 6;
	const int jaguarHopperPort = 7;
	const int solenoidPneuPort = 8;
	const int compPressurePort = 1;
	const int compRelayPort = 1;
   
	
};
