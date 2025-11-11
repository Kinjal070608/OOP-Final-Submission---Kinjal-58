#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    fstream new_file;
    new_file.open("new_file.txt", ios::in);
    if (!new_file) {
        cout<<"Failed to open input file.";
    }
    else {
        char ch;
        int digitcount = 0;
        int spacecount = 0;
        while (new_file.get(ch)) {
            if (isdigit(ch)) {
                digitcount++;
            }
            else if (isspace(ch)) {
                spacecount++;
            }
        }
        cout<<"\nTotal Digits="<<digitcount<<endl;
        cout<<"Total Spaces="<<spacecount<<endl;
        new_file.close();
    }
    return 0;
}
