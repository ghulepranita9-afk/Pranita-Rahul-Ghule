#include <iostream>
using namespace std;

class Swap {
    int a, b;

public:
    void getData() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void swapValues() {
        int temp = a;
        a = b;
        b = temp;
    }

    void display() {
        cout << "After swapping:" << endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main() {
    Swap obj;

    obj.getData();
    obj.swapValues();
    obj.display();

    return 0;
}
