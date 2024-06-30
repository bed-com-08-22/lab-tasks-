#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    //create string with the following path
    string directory = "C:\\Users\\ANAYO\\Documents\\School Stuff\\COM221\\projects\\Lab 4\\" ;

    //create string to hold file name
    string fileName ;

    cout << "Enter file name: ";

    //get file name from user
    cin >> fileName;

    //creating and opening a text file with name of choice
    ofstream MyFile(directory + fileName);

    //close the file
    MyFile.close();
    
    cout << "The file created succesfully in the path: " << endl;
    cout << directory + fileName ;

    return 0;
}