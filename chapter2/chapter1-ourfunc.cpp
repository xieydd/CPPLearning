//chapter1-ourfunc.cpp Use our defination function

#include <iostream>
void simon(int);

int main() {
    using namespace std;
    int count;
    cout << "Enter Simon D number ";
    cin >> count;
    simon(count);
    cout << "Done" << endl;
    return 0;
}

void simon(int n) {
    using namespace std;
    cout << "Simon D = " << n << endl;
}