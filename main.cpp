// Ezzat Mohamadein | ComSC 210 | Lab 14
using namespace std;
#include <iostream>
#include <iomanip>

const int w = 10;
//Colour class
class Colour {
    //private members
    int red;
    int green;
    int blue;

    //public methods
    //getters and setters
    public:
    const int getRed() {return red;}
    const int getGreen() {return green;}
    const int getBlue() {return blue;}
    void setRed(int r) {red = r;}
    void setGreen(int g) {green = g;}
    void setBlue(int b) {blue = b;}
    //print
    void print();
};

int main() {
    //create colour object 1
    Colour c1;
    c1.setRed(255);
    c1.setGreen(0);
    c1.setBlue(0);
    //object 2
    Colour c2;
    c2.setRed(0);
    c2.setGreen(255);
    c2.setBlue(0);
    //object 3
    Colour c3;
    c3.setRed(0);
    c3.setGreen(0);
    c3.setBlue(255);
    //print objects
    cout << "Colour 1:" << endl;
    c1.print();
    cout << "Colour 2:" << endl;
    c2.print();
    cout << "Colour 3:" << endl;
    c3.print();
    return 0;
}

//define print method
void Colour::print() {
    cout << setw(w) << "Red" << setw(w) << "Green" << setw(w) << "Blue" << endl;
    cout << setw(w) << red << setw(w) << green << setw(w) << blue << endl;
}