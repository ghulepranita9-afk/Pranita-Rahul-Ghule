#include <iostream>
using namespace std;

class bill {
    int a, b,c;

public:
    void getData() {
        cout << "Enter a bill  ";
        cin >> a ;
    }
    void calculate()
    {
        b=0.02*a;
        c=a-b;
        cout<<"after discount amount will be"<<c;
    }

    
};

int main() {
    bill obj;

    obj.getData();
    obj.calculate();

    return 0;
}
