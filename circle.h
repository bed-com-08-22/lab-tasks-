#pragma once

namespace shape{

    class Circle{

        private:
        
        float radius;

        public:

        //default constructor
        Circle();

        //overloaded constructor that initializes the circle's radius when created
        Circle(float radius);

        //default destructor
        ~Circle();

        //assigns the radius of he circle to the value passed to it
        void setRadius(float radius);

        //returns the radius of a circle
        float getRadius();

    };
};