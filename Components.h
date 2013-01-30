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
	Jaguar jaguarhopper;
	
	//Init Compressor Components
	Spike spikecomp;
	
	//Init Pneumatic Componenets
	Solenoid solenoidpneu;
	
private:
	
};
