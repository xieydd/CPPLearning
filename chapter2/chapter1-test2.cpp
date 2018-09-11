//chapter1-test2.cpp long为单位的数值转换成码(1 --> 220 )

#include <iostream>

using namespace std;
int main() {
    cout << "Enter a long Num";
    int input;
    cin >> input;
    cout << "Long:" << input << " to yard:" << 220*input << endl;
    return 0;
}