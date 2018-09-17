//chapter3-exceeding.cpp exceeding some integer limits

#include <iostream>
#define ZERO 0
#include <climits>

int main() {
    using namespace std;
    short sra = SHRT_MAX;
    short sri = SHRT_MIN;
    unsigned short sru = sra;

    cout << "I have " << sra << " yuan\n";
    cout << "You have " << sri << " yuan\n";
    cout << "Dont`t give 1  yuan , if you give me\n";
    cout << "I will have "<< sra+1 << " yuan\n";
    cout << "You will have "<< sri-1 << " yuan\n";
    sru = sru + 1;
    cout << "unsigned man will have " << sru << " yuan\n";

    sru = ZERO;
    cout << "You will have " << sru <<" yuan\n";
    sru = sru - 1;
    cout << "I will have " << sru << " yuan" << endl;
    return 0;
}