#include <iostream>
using namespace std;

class Phone
{
    public:
    string name;
    int ram;
    string processor;
    int battery;

Phone(string& name, int& ram, string& processor, int& battery) {
  this->name = name;
  this->ram = ram;
  this->processor = processor;
  this->battery = battery;
}
    void display()
    {
        cout<<"The name of the phone is:"<<name<<endl;
        cout<<"The RAM of the phone is:"<<ram<<endl;
        cout<<"The Processor of the phone is:"<<processor<<endl;
        cout<<"The Battery of the phone is:"<<battery<<endl;
    }

};
int main()
{
    string Name;
    int RAM;
    string Processor;
     int Battery;
    cout<<"Enter the name of the phone"<<endl;
    cin>>Name;
    cout<<"Enter the ram of the phone"<<endl;
    cin>>RAM;
    cout<<"Enter the Processor of the phone"<<endl;
    cin>>Processor;
    cout<<"Enter the battery of the phone"<<endl;
    cin>>Battery;

    Phone p (Name,RAM,Processor,Battery);
    p.display();
    return 0;
}
