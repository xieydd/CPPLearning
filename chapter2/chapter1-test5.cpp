//chapter1-test5.cpp 将摄氏温度转换成华氏温度 转换光年  
#include <iostream>
double convertDegree(double);
double convertLightyear(double);
void time(int,int);

using namespace std;
int main() {
    cout << "输入摄氏温度";
    double cDegree;
    cin >> cDegree;
    cout << "摄氏温度:" << cDegree << "是华式温度:" << convertDegree(cDegree) << endl;

    double lightYear;
    cin >> lightYear;
    cout << lightYear << "光年是" << convertLightyear(lightYear) << "天文单位" << endl;

    double hours;
    double minuts;
    cin >> hours;
    cin >> minuts;
    cout << "时间是";
    time(hours,minuts);
    return 0;
}

double convertDegree(double n) {
    return 1.8*n + 32.0;
} 

double convertLightyear(double n) {
    return 63240*n;
}

void time(int hours,int minuts) {
    cout << hours << ":" << minuts << endl;
}