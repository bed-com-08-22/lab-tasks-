#include <iostream>
#include "Triangle.cpp"
#include "Circle.cpp"
#include "Square.cpp"
#include "Area.cpp"

using namespace shape;
using namespace std;

//shows the options a user has to choose from
void displayOptions();

//gets the user's input and returns it
int getUserInput();

//gets input to create a shape and calculate it's area after some prompts
void createShape(int shape);

int main(){
    unsigned int input = 0;

    do{
        input = getUserInput();
        if(input == 4)
            break;

        else if(input != 0 && input < 4)
            createShape(input);

        else
            cout << "Please enter a valid input" << endl;

    }while(input != 4);
}

void displayOptions(){
    cout << "1. Calculate the area of a square" << endl;
    cout << "2. Calculate the area of a triangle" << endl;
    cout << "3. Calculate the area of a circle" << endl;
    cout << "4. Quit" << endl;
    cout << "Choose an option: ";
}

int getUserInput(){
    int input;

    //display optons to choose from
    displayOptions();

    cin >> input;

    //return user's input
    return input;
}

void createShape(int shape){

    switch(shape){
        case 1:
        {
        float side;
            cout << "Enter square's side length: ";
            cin >> side;
            Square mySquare = Square(side);
            cout << "The area of the square is: " <<  Area::areaOfSquare(mySquare)<< endl;
            break;
            }

        case 2:
        {
            float base,height;
            cout << "Enter triangle's base length: ";
            cin >> base ;
            cout << "Enter triangle's height length: ";
            cin >> height;
            Triangle myTriangle = Triangle(base, height);
            cout << "The area of the triangle is: " << Area::areaOfTriangle(myTriangle) << endl;
            break;
            }

        case 3:
        {
            float radius;    
            cout << "Enter circle's radius length: ";
            cin >> radius;
            Circle myCircle = Circle(radius);
            cout << "The area of the circle is: " <<  Area::areaOfCircle(myCircle)<< endl;
            break;
            }

    }

}