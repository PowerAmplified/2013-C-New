#include "Loader.h"

Loader::Loader() : motor1(7) {
}

void Loader::LoadDisc()
{
	motor1.Set(1);	
}

void Loader::CheckLoad() //Needs to be activated every cycle of the code
{
	(motor1.Get() > 0) ? UpTime++ : UpTime = 0;
	if (UpTime > LoadTime) motor1.Set(0);
}
