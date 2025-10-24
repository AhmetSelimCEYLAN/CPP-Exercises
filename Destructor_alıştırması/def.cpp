#include <iostream>
#include "intcell.h"
using namespace std;

intcell::intcell(int init)
{
	stored=init;
}
void intcell::write(int new_one)
{
	stored=new_one;
}
int intcell::read()
{
	return stored;
}

