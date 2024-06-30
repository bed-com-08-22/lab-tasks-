#pragma once

namespace shape{

    class Square{

        private:

        float side;

        public:

        //default constructor
        Square();

        //overloaded constructor that initializes the side length
        Square(float length);

        ~Square();

        //assigns the square's side length with the argument passed
        void setLength(float length);

        //returns square's side length
        float getLength();
    };
};