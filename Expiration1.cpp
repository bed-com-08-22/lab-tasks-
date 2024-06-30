#include <iostream>

#include <cstdlib>//to access srand() and rand() functions,

#include <ctime>//to access functions that will keep track of time 

using namespace std;

int main () {
    srand(time(nullptr));/*seed the random number generator with the current time, to avoid producing the
                         sequence each time*/
    int daysUntilExpiration = rand() % 12;

    if (daysUntilExpiration<= 10){
        cout << "Your subscription will expire soon. Renew now !";
    }
    else if(daysUntilExpiration <= 5) {
        cout << "Your subscription expires in "<< daysUntilExpiration << endl;
        cout << "Renew now and save 10% !";
    }
    else if (daysUntilExpiration = 1) {
        cout << "Your  subscription expires within a day" << endl;
        cout << "Renew now and save 20% !";
    }
    else if (daysUntilExpiration < 1) {
        cout << "Your subscription has expired. ";
    }
    else {
        cout << "You have an active subscription.";
    }
   
    return 0;
} 