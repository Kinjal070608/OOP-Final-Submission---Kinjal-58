#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    fstream new_file;
    fstream new_file_write;
    new_file.open("new_file.txt", ios::in);
    new_file_write.open("new_file_write", ios::out);
    if (!new_file) {
        cout<<"Failed to open input file.";
    }
    else if(!new_file_write) {
        cout<<"Failed to open output file.";
    }
    else {
        cout<<"Files opened successfully."<<endl;
        string line;
        while (getline(new_file, line)) {
            new_file_write << line << endl;
        }
        cout<<"File copied successfully.";
        new_file.close();
        new_file_write.close();
    }
    return 0;
}
