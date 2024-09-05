#ifndef POINTOFSALE_H
#define POINTOFSALE_H

#include <string>
#include <array>

using namespace std;

class PointOfSale
{
    private:
		double totalPrice;	 
    public:		 
    	PointOfSale();
        void addCode(string);
        double total();
};

#endif // POINTOFSALE_H
