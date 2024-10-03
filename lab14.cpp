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

    // Default constructor, white color.
    Color() {
        red = 255;
        green = 255;
        blue = 255;
    }

    // Parameter constructor.
    Color(int r, int g, int b) {
        red = r;
        green = g;
        blue = b;
    }

    // Partial constructor.
    Color(int r) {
        red = r;
        green = 0;
        blue = 0;
    }
};

int main() {
    Color teal(0, 128, 128); 
    Color orange(265, 165, 0);
    Color gray(156, 156, 156);
    Color lime(50, 205, 50);
    Color red(200);
    Color white;


    cout << setw(15) << "Teal: |";
    teal.print();

    cout << setw(15) << "Orange: |";
    orange.print();

    cout << setw(15) << "Gray: |";
    gray.print();

    cout << setw(15) << "Lime: |";
    lime.print();

    cout << setw(15) << "Red: |";
    red.print();

    cout << setw(15) << "White: |";
    white.print();

    return 0;
}