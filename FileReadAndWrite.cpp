#include <fstream>
#include <iostream>

using namespace std;

int main(){
    char data[100];

    //open a text file in write mode
    ofstream outfile;
    outfile.open("ofile.txt");

    cout << "Writing to the file" << endl;
    cout << "Enter your name: " ;
    cin.getline(data,100);

    //write inputted data into the text file
    outfile << data << endl;

    cout << "Enter your name: ";
    cin >> data;
    cin.ignore();

    //again write inputted data to text file
    outfile << data << endl;

    //close the opened file
    outfile.close();

    //open a text file in read mode
    ifstream infile;
    infile.open("ofile.txt");

    cout << "Reading from the file" << endl;

    //write the data at the screen as long as there is a line
    while(infile.getline(data,100)){
    cout << data << endl;
    }
    
    // close the file
    infile.close();

    return 0;


}