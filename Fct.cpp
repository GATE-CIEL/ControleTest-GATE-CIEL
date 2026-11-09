#include "Fct.h"


bool AgeValide(int age)
{
	if (age <= 0 || age > 120)
	{
		return false;
	}
	return true;
}

