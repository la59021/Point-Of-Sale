#ifndef POINTOFSALE_H
#define POINTOFSALE_H

#include <string>
#include <array>

using namespace std;

class PointOfSale {

    private:
		int totalPrice;
    public:
    	PointOfSale();
        void addCode(string);
        string total();

};

#endif // POINTOFSALE_H
