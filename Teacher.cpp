// construct program by using this pointer 
#include<iostream>
using namespace std;
class techer
{
    public:
    string name;
    string dept;
    string subject;
    public:
    techer(string name,string dept,string subject)
    {
       this->name=name; // specail type of pointer 
       this->dept=dept;
        this->subject=subject;
    }
    void getinfo()
{
    cout<<"enter the name "<<name;
    cout<<"enter department"<<dept;
}
};
int main()
{
    
    techer t1("Saee" ,"computer science","iks");

    techer t2(t1);
    t2.getinfo();
}