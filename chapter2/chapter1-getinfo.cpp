// chapter-getinfo.cpp input and output

#include <iostream>

int main() {
    using namespace std;

    int carrot;
    cout << "How many carrots do you have?" << endl;
    cin >> carrot; 
    cout << "How about two more?";
    carrot = carrot + 2;
    cout << " Now you have " << carrot << " carrots" << endl;
    return 0;
}