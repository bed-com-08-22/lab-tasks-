#include <iostream>
#include <bitset> /*library that contains the bitset 
function used to convert integers to their binary equivalents*/
using namespace std;


int main(){
    unsigned int a = 60;
    unsigned int b = 13;
    int c = 0;
    string bc ;

c = a & b;
bc = bitset<8>(c).to_string();
cout << "Line 1a - Value of c is : " << c << endl;
cout << "Line 1b - Value of c in binary is : " << bc << endl;

c = a | b;
bc = bitset<8>(c).to_string();
cout << "Line 2a - Value of c is : " << c << endl;
cout << "Line 2b - Value of c in binary is : " << bc << endl;

c = a ^ b;
bc = bitset<8>(c).to_string();
cout << "Line 3a - Value of c is : " << c << endl;
cout << "Line 3b - Value of c in binary is : " << bc << endl;

c = ~a;
bc = bitset<8>(c).to_string();
cout << "Line 4a - Value of c is : " << c << endl;
cout << "Line 4b - Value of c in binary is : " << bc << endl;

c = a << 2;
bc = bitset<8>(c).to_string();
cout << "Line 5a - Value of c is : " << c << endl;
cout << "Line 5b - Value of c in binary is : " << bc << endl;

c = a >> 2;
bc = bitset<8>(c).to_string();
cout << "Line 6a - Value of c is : " << c << endl;
cout << "Line 6b - Value of c in binary is : " << bc << endl;

}