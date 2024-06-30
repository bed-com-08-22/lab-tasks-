#include <iostream>
#include <string>

using namespace std;

using namespace std;

int main() {
    // Dynamically allocate an integer
    int *dynamicInt = new int;

    // Dynamically allocate a string
    string *dynamicString = new string;

    
    cout << "Enter a value for the dynamically allocated integer: ";
    cin >> *dynamicInt;

    
    cout << "Enter a value for the dynamically allocated string: ";
    cin.ignore(); // Ignore the newline character left in the input buffer
    getline(cin, *dynamicString);

    
    cout << "Value of dynamically allocated integer: " << *dynamicInt << endl;

    
    cout << "Value of dynamically allocated string: " << *dynamicString << endl;

    // Free the dynamically allocated memory
    delete dynamicInt;
    delete dynamicString;

    return 0;
}
