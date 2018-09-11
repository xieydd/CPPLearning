// chapter1-test4.cpp 计算一个人输入的年龄包含的月数

#include <iostream>

int main() {
    using namespace std;
    cout << "Enter Your Age";
    int age;
    cin >> age;
    cout << "You cross " << 12*age << " Months." << endl;
    return 0;
}