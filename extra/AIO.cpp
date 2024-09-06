#include <iostream>
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

PointOfSale::PointOfSale()
{
	totalPrice = 0;
}

void PointOfSale::addCode(string id) {
    string items[3][3] = {
                          {"Granny Smith Apples","10342","0.50"},
                          {"Banana", "10557", "0.45"},
                          {"Peach", "12151", "0.75"}
                         };

    for (int i = 0; i < 3; i++) {
        if (id == items[i][1]) {
            totalPrice += stod(items[i][2]) * 100;
        }
    }
}

string PointOfSale::total() {
    return "$" + to_string(totalPrice / 100) + "." +to_string(totalPrice % 100);
}

int main() {

    PointOfSale pos;

    pos.addCode("10342");
    pos.addCode("10557");
    pos.addCode("10557");

    pos.total(); // This will return $1.40

	return 0;
}
