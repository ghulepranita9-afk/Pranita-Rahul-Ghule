#include <iostream>
using namespace std;
class prime 
{
    public:
    int no;
    public:
    int Prime()  
    {
    if(no/1==1)
    {
    cout<<"the no is not prime ";
    }  else 
        if(no/2==1)
        {
            cout<<" the no is prime";
        }
        else
        {
            cout<<"the number is not prime";
        }
    }    
};
int main()
{
    prime no;
    no.no=3;
    no.Prime();
}
