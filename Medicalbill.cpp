#include <iostream>
using namespace std;

class bill {
    public:
    int Consultation;      
    int BloodTest;                   
    int XRay;           
    int Medicines;

public:
     void getData() {
        cout << "Enter consulatation fees" << endl;
        cin >> Consultation;      


        cout << "Enter a blood test fees:" << endl;
        cin >>BloodTest;

        cout << "Enter a xray fees" << endl;
        cin >> XRay;

        cout << "Enter a medicines fees" << endl;
        cin >> Medicines;
    }
    void showbill()
    {
        cout << " consulatation fees" <<Consultation <<endl;
        cout << " a blood test fees:" <<BloodTest<< endl;
        cout << "Enter a xray fees" <<XRay<<endl;
        cout << "Enter a medicines fees" <<Medicines<< endl;
        
    }
    void calculate()
    {
        cout << "total fees is"<<Consultation+BloodTest+XRay+Medicines;
    }
    
};

int main() {
    bill obj;

    obj.getData();
    obj.showbill();
    obj.calculate();

    return 0;
}
