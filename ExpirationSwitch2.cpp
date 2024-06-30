#include <iostream>

#include <cstdlib>//to access srand() and rand() functions,

#include <ctime>//to access functions that will keep track of time 

using namespace std;

int main () {
    srand(time(nullptr));/*seed the random number generator with the current time, to avoid producing the
                         sequence each time*/
    int  daysUntilExpiration = rand() % 12;

    switch (daysUntilExpiration){
     case 0 :
        cout << "Your subscription has expired. ";
        break;
     case 1:
        cout << "Your  subscription expires within a day" << endl;
        cout << "Renew now and save 20% !";
        break;
      case 2:
      case 3:
      case 4:
      case 5:
        cout << "Your subscription expires in "<< daysUntilExpiration << endl;
        cout << "Renew now and save 10% !";
        break;
    
     case 6:
     case 7:
     case 8:
     case 9:
     case 20:
        cout << "Your subscription will expire soon. Renew now !";
        break;
    
     default:
        cout << "You have an active subscription.";
        break;
   
    return 0;
    }
}