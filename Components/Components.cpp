#include "Components.h"
#include "WPILib.h"

Components::Components(void):
	roberto(talonUpLPort, talonDownLPort, talonUpRPort, talonDownRPort),
    shooter(victorUpPort, victorDownPort),
    loader(jaguarHopperPort),
    piston(solenoidPneuPort1,solenoidPneuPort2),
    comp(compRelayPort, compPressurePort){}
