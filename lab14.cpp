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
        cout << setw(8) << "Red: " << setw(4) << red << " | ";
        cout << setw(8) << "Green: " << setw(4) << green << " | ";
        cout << setw(8) << "Blue: " << setw(4) << blue << " | ";
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
    gray.setRed(156);
    gray.setGreen(156);
    gray.setBlue(156);

    Color lime;
    lime.setRed(50);
    lime.setGreen(205);
    lime.setBlue(50);


    cout << setw(15) << "Teal: |";
    teal.print();

    cout << setw(15) << "Orange: |";
    orange.print();

    cout << setw(15) << "Gray: |";
    gray.print();

    cout << setw(15) << "Lime: |";
    lime.print();

    return 0;
}