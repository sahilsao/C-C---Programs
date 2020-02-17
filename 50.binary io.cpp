#include <iostream>
    #include <fstream>
    using namespace std;
    int main() {
        cout<<"---------------------------------------"<<endl;
cout<<"Author Name : Sahil Sao"<<endl;
cout<<"Class       : MCA I SEM"<<endl;
cout<<"Path        : D:\\Sahil C++ Assignment\\50.binary io.cpp"<<endl;
cout<<"---------------------------------------"<<endl;
    fstream dataFile; // file object
    string buffer; // Used to read line from file
    // Create a new file named myfile.txt to write to
    dataFile.open("myfile.txt", ios::out);
    // Write two lines to the file
    dataFile << "If you're good at something, never do it for free." << endl
             << "- The Joker - Heath Ledger";
    // Close the file
    dataFile.close();
    // Open the file for input
    dataFile.open("myfile.txt", ios::in);
    // Read a line into a buffer and print the line
    getline(dataFile, buffer);
    cout << buffer << endl;
    // Read a second line and print it
    getline(dataFile, buffer);
    cout << buffer << endl;
    // Close the file
    dataFile.close();
    }
