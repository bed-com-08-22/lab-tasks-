#include <iostream>
#include <cmath>

using namespace std;

double triangle_area(double base, double height) {
    return 0.5 * base * height;
}

double rectangle_area(double length, double width) {
    return length * width;
}

double square_area(double side) {
    return side * side;
}

int get_choice() {
    int choice;
    while (true) {
        cout << "Select a shape to calculate the area:" << endl;
        cout << "1. Square" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Triangle" << endl;
        cout << "4. Quit Program" << endl;
        cout <<endl;
        cout << "Enter Selection: ";
        cin >> choice;
        if (choice >= 1 && choice <= 4) {
            return choice;
        } else {
            cout << "Invalid input. Please enter 1, 2, 3, or 4." << endl;
        }
    }
}

void get_triangle_data(double& base, double& height) {
    cout << "Enter the base length of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
}

void get_rectangle_data(double& length, double& width) {
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
}

double get_square_data() {
    double side;
    cout << "Enter the length of the side of the square: ";
    cin >> side;
    return side;
}

int main() {
    while (true) {
        int choice = get_choice();
        double area;

        switch(choice) {
            case 1: {
                double side = get_square_data();
                area = square_area(side);
                cout << "The area of the square is: " << area << endl;
                break;
               
            }
            case 2: {
                double length, width;
                get_rectangle_data(length, width);
                area = rectangle_area(length, width);
                cout << "The area of the rectangle is: " << area << endl;
                break;
            }
            case 3: {
                 double base, height;
                get_triangle_data(base, height);
                area = triangle_area(base, height);
                cout << "The area of the triangle is: " << area << endl;
                break;
            }
            case 4: {
                cout << "Quitting program. bayi bayi!" << endl;
                return 0; // Exit the program
            }
            default:
                cout << "Invalid choice" << endl;
        }
    }

    return 0;
}
