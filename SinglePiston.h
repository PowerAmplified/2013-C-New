#ifndef DEFINE_SINGLEPISTON
#define DEFINE_SINGLEPISTON

#include "WPILib.h"

class SinglePiston {
public:
	SinglePiston();

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
