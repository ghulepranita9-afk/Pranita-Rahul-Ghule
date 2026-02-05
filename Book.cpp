#include <iostream>
using namespace std;
class book
{  
    public:
    string name;
    string auothername;
    int ava;
    public:
    void getinfo()
    {
         cout<<"enter a book name"<<endl;
        cin>>name;
        cout<<"enter a auother name"<<endl;
        cin>>auothername;
    }
};
class newbook
{
     public:
    string wantname;
    string auother_name;
    void getinfo()
    {
         cout<<"enter a book name"<<endl;
        cin>>wantname;
        cout<<"enter a auother name"<<endl;
        cin>>auother_name;
    }
};
int main()
{
    book b1;
    b1.getinfo();
    newbook c1;
    c1.getinfo();
        if(b1.auothername==c1.auother_name&&b1.name==c1.wantname) // || these will stands for a and logic 
        {
        cout<<"book is avaible";
        }
        else
        cout<<"book is not avaible";
    
}