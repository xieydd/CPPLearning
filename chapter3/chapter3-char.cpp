//chapter3-char.cpp char

#include <iostream>

int main() {
    using namespace std;
    char a;
    cin >> a;
    int i = a;
    cout << "The ASCII code for " << a << " is " << i << endl;

    a = a+1;
    cout << "Add one to the char code " << a << endl;
    i = a;
    cout << "The ASCII code for " << a << " is " << i << endl;

    //using cout.put()
    cout << "Displaying char ch using cout.put(ch): " ;
    cout.put(a);

    cout.put('!');
    cout << endl;
    cout << "\aOperation \"HyperHype\" is now activated!\n";
    cout << "Enter your agent code:_________\b\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified: Proceed with Plan Z3!\n";

    return 0;
}