#include <iostream>
#include <string>
using namespace std;

int main () {
    string zozo[] ={"B123", "C234", "A345", "C15", "B17", "G3003", "C235", "B179"};

    for (int i = 0; i < sizeof(zozo)/sizeof(zozo[0]); ++i){
        if(zozo[i][0] == 'B'){
            cout << zozo[i]<< endl;
        }
    }
    return 0;
}