#include <iostream>
#include <string>
#include <array>
#include "PointOfSale.hpp"

using namespace std;

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

    /*switch(code)
    {
    case "10342":
        = "Granny Smith Apples";
        case "10557":
        = "Banana";
        case "12151":
        = "Peach";
        default:
        = null;
    }*/

    for (int i = 0; i < 3; i++) {
        if (id == items[i][1]) {
            totalPrice += stod(items[i][2]) * 100;
        }
    }
}

string PointOfSale::total() {
    return "$" + to_string(totalPrice / 100) + "." +to_string(totalPrice % 100);
}
