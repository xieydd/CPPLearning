// chapter1-carrot.cpp Display a variable
#include <iostream>

int main() {
    using namespace std;
    int carrot;
    carrot = 25;
    cout << "Carrot is assign to ";
    cout << carrot;
    cout << endl;
    carrot = carrot - 1;
    cout << "Carrot is changed to " << carrot << " haha." << endl;
    cin.get();
    return 0; 
}