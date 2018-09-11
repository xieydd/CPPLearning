// chapter1-test3.cpp 三个定义函数包括main

#include <iostream>
void mice();
void run();

using namespace std;
int main() {
    mice();
    mice();
    run();
    run();
}

void mice() {
    cout << "Three bind mice" << endl;    
}

void run() {
    cout << "See how they run" << endl;
}