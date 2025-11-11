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
    string target="Hello";
    string word;
    int count=0;
    while (new_file >> word) {
        if(word==target) {
            count++;
        }
    }
    new_file.close();
    cout << "The word '" << target << "' occurred " << count << " times." << endl; 
    return 0;
}
