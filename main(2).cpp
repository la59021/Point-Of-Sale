#include <iostream>
#include "PointOfSale.h"
#include "PointOfSale.cpp"
using namespace std;

int main()
{
    PointOfSale pos;

    pos.addCode("10342");
    pos.addCode("10557");
    pos.addCode("10557");

    pos.total(); // This will return $1.40

	return 0;
};
