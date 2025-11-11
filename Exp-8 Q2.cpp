#include <iostream>
#include <string>
using namespace std;
class login {
    protected:
    string name, password;
    public:
    virtual void accept() {
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter password:";
        cin>>password;
    }
};
class EmailLogin : public login {
    string email;
    public:
    void accept() override {
        login::accept();
        cout<<"Enter email:";
        cin>>email;
    }
    void display() {
        cout<<"----Email Login Details----"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Password: "<<password<<endl;
        cout<<"Email: "<<email<<endl;
    }
};
class MembershipLogin : public login {
    string membershipID;
    public:
    void accept() override {
        login::accept();
        cout<<"Enter Membership ID:";
        cin>>membershipID;
    }
    void display() {
        cout<<"---Membership Login Details---"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Password: "<<password<<endl;
        cout<<"Membership ID: "<<membershipID<<endl;
    }
};
int main () {
    EmailLogin e;
    MembershipLogin m;
    e.accept();
    m.accept(); 
    e.display();
    m.display();
    return 0;
}
