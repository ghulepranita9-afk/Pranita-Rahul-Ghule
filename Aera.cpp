#include <iostream>
using namespace std;
float area(int b,int h)
    {
         return((b*h)/2 );
    }

    int main()
{
    int b,h;
    float aera;
    cout<<" enter th base and height";
    cin>>b>>h;
    cout<<"aera of traingle"<<area(b,h);
    return 0; 
    
}