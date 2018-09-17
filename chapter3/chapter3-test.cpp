//chapter3-test.cpp 
//1.考察除法和取余以及常量和输入
//2.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const int INCH_PER_FEET = 12.0;
void p3_1(void) {
    int cint;
    int feet;
    int couts;
    cout << "Enter your height ____\b\b\b\b";
    cin >> cint;
    feet = cint / INCH_PER_FEET;
    couts = cint % INCH_PER_FEET;
    cout << "Your height is " << feet << " feets and " << couts << " inches" << endl;
}

const double Inch2Meter = 0.0254;
const double Kile2Pond = 2.2;
void p3_2(void) {
    int height_foot;
    int height_inch;
    double height_meter;
    double weight_kile;
    int weight_pond;
    double BMI;

    cout << "请输入您的身高为___\b\b\b";
    cin >> height_foot;
    cout << ",___\b\b\b英寸" << endl;
    cin >> height_inch;

    cout << "请输入您的体重___\b\b\b";
    cin >> weight_pond;
    cout << "磅";
    height_meter = (height_foot * INCH_PER_FEET + height_inch) * Inch2Meter;
    weight_kile = Kile2Pond * weight_pond;
    BMI = weight_kile / (height_meter * height_meter);
    cout << "您的BMI值为 " << BMI;
}

const int Minutes2Degrees = 60.0;
const int Seconds2Minuts = 60.0;
void p3_3(void) {

    int degrees;
    int minutes;
    int seconds;
    double result;

    cout << "Enter a latitude in degrees,minuts, and seconds:\n";
    cout << "First , enter the degree:__\b\b";
    cin >> degrees;
    cout << "Next, enter the minutes of arc:__\b\b";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc:__\b\b";
    cin >> seconds;

    result = degrees + (double)minutes/Minutes2Degrees + (double)seconds/(Minutes2Degrees*Seconds2Minuts);    
    cout << degrees << " degrees, " << minutes << " minutes, " <<  seconds <<  " seconds " << "= " << result << " degrees";
}

const int Degrees2Day = 24;
void p3_4(void) {

    long seconds;
    int second;
    int minutes;
    int hours;
    int days;

    cout << "Enter the number of seconds: __\b\b";
    cin >> seconds;
    second = seconds % Seconds2Minuts;
    minutes = seconds/Seconds2Minuts % Minutes2Degrees;
    hours = seconds/Seconds2Minuts/Minutes2Degrees % Degrees2Day;
    days = seconds/Seconds2Minuts/Minutes2Degrees/Degrees2Day;

    cout << seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << second << " seconds." << endl; 
}

void p3_5(void) {
    long population;
    long populationUSA;
    double percentage_USA;
    cout << "Enter the world`s population: _\b";
    cin >> population;
    cout << "Enter the population of USA: _\b";
    cin >> populationUSA;
    percentage_USA = (double) populationUSA / population * 100;
    cout << "The population of the USA is " << percentage_USA << "%" << " of the world populations";
}

int main() {
    p3_5();
}