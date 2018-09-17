//chapter3-hexoct.cpp hex and oct 

#include <iostream>

using namespace std;
int main() {
    using namespace std;
    int num = 42;
    int hex1 = 0x42;
    int oct1 = 042;

    cout << "num = " << num << " (42 in decimal)\n";
    cout << "hex = " << hex1 << " (42 in hex)\n";
    cout << "oct = " << oct1 << " (42 in oct)" << endl;

    cout << hex;
    cout << "42  in hex = " << num << endl;
    cout << oct;
    cout << "42  in oct = " << num << endl;
    return 0;
}