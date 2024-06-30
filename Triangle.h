#pragma once

namespace shape{

    class Triangle{

        private:
        float base;
        float height;

        public:

        //default constructor
        Triangle();

        //overloaded constructor that initializes the base and height
        Triangle(float base, float height);

        //default destructor
        ~Triangle();

        //assigns the base the argument passed
        void setBase(float base);

        //assigns the height the argument passed
        void setHeight(float height);

        //returs the base of the triangle
        float getBase();

        //returns the height of the triangle
        float getHeight();

    };
};