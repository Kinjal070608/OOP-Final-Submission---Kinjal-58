#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;
int main() {
    fstream new_file;
    int words_count = 0;
    bool inword = false;
    new_file.open("new_file.txt", ios::in);
    if (!new_file) {
        cout<<"Failed to open input file.";
    }
    else {
        char ch;
        while (new_file.get(ch)) {
            if (isspace(ch)) {
                inword = false;
            }
            else if(!inword) {  
                words_count++;
                inword = true;
            }
        }
    }
    new_file.close();
    cout << "Total Words=" << words_count << endl; 
    return 0;
}
