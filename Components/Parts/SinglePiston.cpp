#include "SinglePiston.h"

SinglePiston::SinglePiston(int port1, int port2) : solout(port1), solin(port2) {
}

bool SinglePiston::GetIn()
{
	return solin.Get() && !(solout.Get());
}

bool SinglePiston::GetOut()
{
	return solout.Get() && !(solin.Get());
}

void SinglePiston::SetIn()
{
	solin.Set(false);
	solout.Set(true);
}

void SinglePiston::SetOut()
{
	solout.Set(false);
	solin.Set(true);
}

void SinglePiston::Off()
{
	solin.Set(false);
	solout.Set(false);
}

bool SinglePiston::GetOkay()
{
	return !(solout.Get() xor solin.Get());
}

bool SinglePiston::GetError()
{
	return (solout.Get() xor solin.Get());
}
