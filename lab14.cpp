// COMSC-210 | Lab 14 | Niko Dittmar
#include <iostream>
#include <iomanip>

using namespace std;


class Color {
private:
    int red;
    int green;
    int blue;
public:
    // Getters and setters.
    int getRed() {
        return red;
    }
    void setRed(int b) {
        red = b;
    }
    int getGreen() {
        return green;
    }
    void setGreen(int b) {
        green = b;
    }
    int getBlue() {
        return blue;
    }
    void setBlue(int b) {
        blue = b;
    }

    // Other methods.
    void print() {
        cout << setw(8) << "Red: " << red;
        cout << setw(8) << "Green: " << green;
        cout << setw(8) << "Blue: " << blue;
        cout << "\n";
    }
};

int main() {
    Color teal; 
    teal.setRed(0);
    teal.setGreen(128);
    teal.setBlue(128);

    Color orange;
    orange.setRed(255);
    orange.setGreen(165);
    orange.setBlue(0);

    Color gray;
    gray.setRed(128);
    gray.setGreen(128);
    gray.setBlue(128);


    cout << "Teal: \n";
    teal.print();

    cout << "Orange: \n";
    orange.print();

    cout << "Gray: \n";
    gray.print();

    return 0;
}