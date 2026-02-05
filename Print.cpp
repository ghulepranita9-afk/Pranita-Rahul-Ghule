#include<iostream>

using namespace std;
class no 
{
    public:
    int no;
    public:
    void showinfo()
    {
        cout<<"enter a no ";
        cin>>no;
        for(int i=1;i<=no;i++)
        {
            cout<<" "<<i;
        }
    }
};
int main()
{
    no n1;
    n1.showinfo();
    
}