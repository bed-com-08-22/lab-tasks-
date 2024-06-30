#include <iostream>

using namespace std;

int main () {
    int day =3;
     
     string dayName;

     switch (day) {
        case 1 :
            dayName = "Monday";
            break;
        case 2 :
            dayName = "Tuesday";
            break;
        case 3 :
            dayName = "Wednesday";
            break;

        default :
            dayName = "Invalid day";
     }
     cout << "The day is : " << dayName << endl;
      return 0;
}