#include <iostream>
#include "Rectangle.cpp"

using namespace std;

int main(){
    //create an object called myRectangleOne of class Rectangle
    Rectangle myRectangleOne = Rectangle();

    //initialize variables to store user input for myRectangleOne
    double myLengthOne = 0.0;
    double myWidthOne = 0.0;

    //initialize variables to store user input for myRectangleTwo
    double myLengthTwo = 0.0;
    double myWidthTwo = 0.0;

    //prompt user to enter myRectangleOne's dimensions
    cout << "Enter myRectangleOne's length: ";
    cin >> myLengthOne ;
    cout << "Enter myRectangleOne's width: ";
    cin >> myWidthOne ;

    //prompt user to enter myRectangleTwo's dimensions
    cout << "Enter myRectangleTwo's length: ";
    cin >> myLengthTwo ;
    cout << "Enter myRectangleTwo's width: ";
    cin >> myWidthTwo ;

    //set object's dimensions to the ones inputed by the user
    myRectangleOne.setLength(myLengthOne);
    myRectangleOne.setWidth(myWidthOne);

    /*create an object called myRectangleTwo of class Rectangle 
    using the overloaded constructor*/
    Rectangle myRectangleTwo = Rectangle(myLengthTwo, myWidthTwo);

    //print the area of myRectangleOne
    cout << "The area of myRectangleOne is: " << myRectangleOne.getArea() << endl;

    //print the area of MyRectangleTwo
    cout << "The area of myRectangleTwo is: " << myRectangleTwo.getArea();


    return 0;
}