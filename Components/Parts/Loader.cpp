#include "Loader.h"

Loader::Loader(int port) : motor1(port) {
	LoadTime = 10;
	UpTime = 0;
}

void Loader::LoadDisc()
{
	//This activates a motor to load a disc.
	motor1.Set(1);	
}

void Loader::CheckLoad() //Needs to be activated every cycle of the code.  Checks to see if there is a disc ready for firing.
{
	(motor1.Get() > 0) ? UpTime++ : UpTime = 0;
	if (UpTime > LoadTime) motor1.Set(0);
}
