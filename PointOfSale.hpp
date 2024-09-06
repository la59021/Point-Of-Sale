#ifndef POINTOFSALE_HPP_INCLUDED
#define POINTOFSALE_HPP_INCLUDED

#include <string>
#include <array>

using namespace std;

class PointOfSale {

    private:
		int totalPrice;
    public:
    	explicit PointOfSale();
        void addCode(string);
        string total();

};



#endif // POINTOFSALE_HPP_INCLUDED
