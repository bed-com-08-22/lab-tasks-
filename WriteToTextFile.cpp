#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream myFile("WriteFile.txt");

    if(myFile.is_open()){
        myFile << "WE put this data in through the WriteToTextFile.cpp code.\n";
        myFile << "This is a subsequent line that we put in through the same program.\n";
        myFile.close();
        cout << "File was created and closed succesfully";
    }

    else 
        cout << "Unable to open file";

        return 0;
}