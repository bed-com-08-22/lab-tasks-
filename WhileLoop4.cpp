#include <iostream>

using namespace std;

int main () {
    int number;

    while (true){
        cout << "Enter an integer value between 5 and 10" << endl;
        cin >> number ;

        if (number >=5 && number <=10) {
            cout << "Your input value (" <<number << ")"<< " has been accepted.";
            break;
        }else if (number < 52) {
            cout << "you entered " << number <<"." << " Please enter a number between 5 and 10." << endl;
        }
        else{
            cout << "Sorry, you entered an invalid number, please try again."<< endl;
        }
    
    }
    return 0;

}