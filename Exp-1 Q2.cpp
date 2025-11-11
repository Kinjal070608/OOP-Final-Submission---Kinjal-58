#include <iostream>
using namespace std;
class class_book {
    string book_name;
    int book_id;
    public:
    int book_price;
    void accept() {
        cout<<"Enter the book name, book id and book price: ";
        cin>>book_name>>book_id>>book_price;
}
    void disp() {
        cout<<"\nBook Name: "<<book_name<<endl;
        cout<<"Book ID: "<<book_id<<endl;
        cout<<"Book Price: "<<book_price<<endl;
    }
};
int main() {
    class_book B1,B2;
    B1.accept();
    B2.accept();
    if(B1.book_price > B2.book_price) {
        B1.disp();
    } else {
        B2.disp();
    }
    return 0;
}
