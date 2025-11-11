#include <iostream>
using namespace std;
class book {
    string booktitle;
    string authorname;
    int price;
    public:
    void accept() {
        cout << "Enter book title: ";
        getline(cin, booktitle);
        cout << "Enter author name: ";
        getline(cin, authorname);
        cout << "Enter book price: ";
        cin >> price;
    }
    void disp() {
        cout << "\nBook Title: " << booktitle << endl;
        cout << "Author Name: " << authorname << endl;
        cout << "Book Price: " << price << endl;
    }
};
int main() {
    book B1;
    book *p;
    p = &B1;
    p->accept();
    p->disp();
    return 0;
}
