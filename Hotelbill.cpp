#include<iostream>

using namespace std;
class hotel
{
    public:
    string tableno;
    string name;
    int no;
    string order1;
    int quantity1;
    string order2;
    int quantity2;
    int prize1;
    int prize2;
    public:
    void getinfo()
{
    cout<<"enter a name";
    cin>>name;
    cout<<"enter a contact no";
    cin>>no;
    cout<<"enter a tableno";
    cin>>tableno;
     cout<<"enter a quantity";
    cin>>quantity1;
    cout<<"enter a quantity";
    cin>>quantity2;
    cout<<"enter aprder";
    cin>>order1;

    cout<<"enter aprder";
    cin>>order2;
    cout<<"enter a prize";
    cin>>prize1;

    cout<<"enter a prize2";
    cin>>prize2;
}


public:
    void calculatebill()
    {
        int amount1,b,c,d,e,f,j;
        amount1=prize1*quantity1;
        b=prize2*quantity2;
        c=a+b;
        if(c>=5000)
        {
            d=0.2*c;
            cout<<"total bill "<<d;
        }
        else
        if(c>=3000)
        {
            e=0.1*c;
            cout<<"total bill"<<e;
        }
        else 
        if(c>=1000)
        f=0.05*c;
        cout<<"total bill"<<f;
        else 
        cout<<"total bill"<<c;
    }
    public:
    void showbill()
    {
        cout<<"name"<<name;
        cout<<"contact no"<<no;
        cout<<"table no"<<tableno;
        cout<<"order1 "<<order1<<"quantity  "<<quantity1<<" prize1 "<<prize1 <<" bill"<<amount1;

    }
};


int main()
{
    hotel b1;
    b1.getinfo();
    b1.calculatebill();
    b1.showbill();
}