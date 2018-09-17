//chapter3-assign.cpp

#include <iostream>

int main() {
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3;
    tree = tree / 2;
    int guess(3.9842); //double convert int
    int debt = 7.2E12;
    cout << "tree " << tree << endl;
    cout << "guess " << guess << endl;
    cout << "debt " << debt << endl;
    //char = {x}; error
    int x = 34;
    char c1 = x;
    // char c2 {33333}; error
    const int code = 66;
    char c3 {code};
    


    return 0;
}