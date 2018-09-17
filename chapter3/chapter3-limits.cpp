// chapter3-limits.cpp Integer limits

#include <iostream>
#include <climits>

int main() {
    using namespace std;
    int max_n = INT_MAX;
    short max_short = SHRT_MAX;
    long max_long = LONG_MAX;
    long long max_longs = LLONG_MAX;

    cout << "int is " << sizeof(int) << " bytes" << endl;
    cout << "short is " << sizeof(short) << " bytes" << endl;
    cout << "long is " << sizeof(long) << " bytes" << endl;
    cout << "long long is " << sizeof(long long) << " bytes" << endl;

    cout << "Maxvalues" << endl;
    cout << "int:" << max_n << endl;
    cout << "short:" << max_short << endl;
    cout << "long:" << max_long << endl;
    cout << "long long:" << max_longs << endl;
    cout << "Minmam int is " << INT_MIN << endl;
    cout << "Per byte has " << CHAR_BIT << " bits" << endl;
    return 0;
}