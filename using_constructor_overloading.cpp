#include <iostream>
using namespace std;

class Phone
{
    public:
    string name;
    int ram;
    string processor;
    int battery;

    Phone()
    {}
    Phone(string name, int ram, string processor, int battery)
    {
        this->name=name;
        this->ram=ram;
        this->processor=processor;
        this->battery=battery;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"RAM:"<<ram<<endl;
        cout<<"Processor:"<<processor<<endl;
        cout<<"Battery:"<<battery<<endl;
    }
};
int main()
{
    string Name;
    int RAM;
    string Processor;
    int Battery;

    cout<<"Enter Name:"<<endl;
    cin>>Name;
    cout<<"Enter RAM"<<endl;
    cin>>RAM;
    cout<<"Enter Processor"<<endl;
    cin>>Processor;
    cout<<"Enter Battery"<<endl;
    cin>>Battery;

    Phone p1;
    p1.display();
    Phone p2(Name,RAM,Processor,Battery);
    p2.display();

    return 0;
}
