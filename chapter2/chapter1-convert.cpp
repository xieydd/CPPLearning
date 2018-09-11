// chapter1-convert.cpp Convert stone(英石) to pounds(磅)
#include <iostream>

int stonetolb(int);
int main() {
    using namespace std;
    int stone;
    cout << "Enter stone number: ";
    cin >> stone;
    int pound = stonetolb(stone);
    cout << "stone: " << stone << " convert to pound: " << pound << endl; 
    return 0;
}

int stonetolb(int n) {
    return 14 * n;
}