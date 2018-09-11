// chapter1-sqrt.cpp use sqrt() function

#include <iostream>
#include <cmath>

int main() {
    using namespace std;

    double area;
    cout << "Enter the floor area:";
    cin >> area;
    double slide = sqrt(area);
    cout << "slide of arena = " << area << " is " << slide << endl;
    return 0;
}