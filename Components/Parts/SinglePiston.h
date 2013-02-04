#ifndef DEFINE_SINGLEPISTON
#define DEFINE_SINGLEPISTON

#include "WPILib.h"

class SinglePiston {
public:
	SinglePiston(int port1, int port2);

	bool GetIn();

	bool GetOut();
	
	void SetIn();
	
	void SetOut();

	void Off();

	bool GetOkay();

	bool GetError();
	
private:
	Solenoid solout;
	Solenoid solin ;
};

#endif
