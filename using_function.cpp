#include<iostream>
using namespace std;

class Phone
{
    public:
    string name;
    int ram;
    string processor;
    int battery;

    void getdetails()
    {
        cout<<"Enter Phone Name:"<<endl;
        cin>>name;
        cout<<"Enter Phone ram:"<<endl;
        cin>>ram;
        cout<<"Enter Phone Processor:"<<endl;
        cin>>processor;
        cout<<"Enter Phone Battery:"<<endl;
        cin>>battery;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Ram:"<<ram<<endl;
        cout<<"Processor:"<<processor<<endl;
        cout<<"Battery:"<<battery<<endl;
    }
};
int main()
{
    Phone p;
    p.getdetails();
    p.display();

    return 0;
}
