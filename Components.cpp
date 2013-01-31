#include "Components.h"
#include "WPILib.h"

Components::Components(void):
	roberto(talonUpLPort, talonDownLPort, talonUpRPort, talonDownRPort),
    victorUp(victorUpPort),
    victorDown(victorDownPort),
    jaguarHopper(jaguarHopperPort),
    solenoidPneu(solenoidPneuPort),
    comp(compRelayPort, compPressurePort){}
