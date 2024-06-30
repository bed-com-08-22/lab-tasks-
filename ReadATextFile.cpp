//read a text file
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string line;
    ifstream myFile("exampleFile.txt");
    if(myFile.is_open()){
        cout << "We have opened the file\n";
        while(getline(myFile, line)){
            cout << line << '\n' ; 
        }
        myFile.close();
    }

    else 
        cout << "Unable to open file";

    
    return 0;

}