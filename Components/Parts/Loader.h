#ifndef DEFINE_LOADER
#define DEFINE_LOADER

#include "WPILib.h"

class Loader {
public:
	Loader(int port);

	void LoadDisc();

	void CheckLoad();

	int UpTime;

	int LoadTime;
	
private:
	Jaguar motor1;
};

#endif
