#pragma once

class Rectangle{
 float length;
 float width;

public:
    //default constructor
      Rectangle();

    //overloaded constructor that takes the length and width
      Rectangle(float length, float width);  

    //destructor  
      ~Rectangle();

//assign a value to the length      
void  setLength(float lenght);

//assign a value to the width
void  setWidth(float width);

//returns the length
float getLenght();

//returns the width
float getWidth();

//returns the area
float getArea();

};