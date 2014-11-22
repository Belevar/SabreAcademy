#include <iostream>
#include "multiple.h"
#include "add.h"

int main()
{
	std::cout << multiple(2,add(2,5)) << std::endl;
	return 0;
}
