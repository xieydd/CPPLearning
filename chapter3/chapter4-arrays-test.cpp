#include <iostream>
#include <string>
#include <array>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::array;
using std::string;

void c4_test1(void) {
    char actor[30] = {'a','s'};
    cout << actor << endl;

    short betsie[100] = {1,2,3,4};
    cout << *(betsie+1) << endl;

    float chuck[13];
    long double dipsea[64];
} 

void c4_test2(void) {
    array<char,30> actor;
    array<short,100> betsie;
    array<float,13> chuck = {3.4,5.6};
    array<long double,64> dipsea;

    cout << chuck[1] << endl;
}

void c4_test3(void) {
    int array[5] = {1, 3, 5, 7, 9};
    for (const int& i : array ) {
        cout << i << " at " << &i << endl;
    }
}


void c4_test4(void) {
   int array[5] = {1, 3, 5, 7, 9};
   int even = array[0] + array[4];
   cout << even << " at " << &even << endl; 
}

void c4_test5(void) {
    float ideas[3] = {1.1, 2.2, 3.3};
    cout << ideas[1] << endl;
}

void c4_test6_7(void) {
    char cheeseburger[20] = "cheeseburger";
    string xieydd = "xieyuandong";
}

void c4_test8_9(void) {
    struct fish {
        string type;
        int weights;
        double heights;
    };

    struct fish fish1 = {
        "张淑贞",
        108,
        34.5,
    };
}

void c4_test10(void) {
    enum Response {
        YES = 1,
        No = 0,
        Maybe = 2,
    };
}

void c4_test11(void) {
    double a = 10.0;
    double * ted = &a;
    cout << *ted << endl;

}

void c4_test12(void) {
    float treacle[10] = {1.0,2.0,3.0};
    cout << treacle << " first: " << *treacle << " end: "  << *(treacle+2) << endl;
}

void c4_test13(void) {
    int nums;
    cout << "Enter your number:\t";
    cin >> nums;
    int * arr = new int[nums];
    vector<int> vec[nums];

    cout << vec << " " << arr;
}

void c4_test14(void) {
    cout << (int *) "I have a dream";
}

void c4_test15(void) {
   struct fish {
        string type;
        int weights;
        double heights;
    }; 

    fish * fish1 = new fish();
    fish1->type = "zsz";
}

void c4_test16(void) {
    int year;
    char address[80];
    cout << "Which year was your house builed \n";
    (cin >> year).get();
    //cin >> year;
    //cin.get();
    cout << "What is the address \n";
    //cin.getline(address,80);
    cin >> address;
    cout << "The house was builded in " << year << endl;
    cout << "Address is " << address << endl;
}

void c4_test17(void) {
    const int nums = 10;
    std::array<string,nums> array1;
    std::vector<string> vec[nums]; 
}


void c4_test1_2_code(void) {

    char first_name[128];

    //string first_name;
    cout << "What your first name ? \t";
    //cin >> first_name;
    cin.getline(first_name,128);
    //string last_name;
    char last_name[128];
    cout << "What your last name ? \t";
    //cin >> last_name;
    cin.getline(last_name,128);
    char grade;
    cout << "What Letter grade do your deserve ? \t";
    cin >> grade;

    int age;
    cout << "What is your age ? \t";
    cin >> age;

    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << char(grade + 1) << endl;
    cout << "Age: " << age;
}

void c4_test3_4_code(void) {
    char first_name[100];
    //string first_name;
    cout << "Enter your first name: \t";
    //cin.get(first_name,100); 这样会导致后面读到换行符，不会让你输入
    cin.getline(first_name,100);

    char last_name[256];
    cout << "Enter your last name:\t";
    cin.getline(last_name,256);
    cout << "Here`s the information in a single string: " << first_name << ", " <<  last_name << endl;
}

typedef struct CandyBar {
    string brand;
    double weights;
    int    calories;
} TS_CandyBar;
void c4_test5_6_code(void) {

    TS_CandyBar snack = {
        "Mocha Munch",
        2.3,
        350,
    };

    cout << snack.brand << "\n" << &snack << endl;

    TS_CandyBar array[3] = {
        {"1",1.1,100},
        {"2",1.2,200},
        {"3",1.3,300},
    };

    cout << array[1].brand << endl;
    cout << array << endl;
}

typedef struct Pizza {
    string company;
    int diameter;
    int weights;

} TS_Pizza;
void c4_test7_8_code(void) {
    TS_Pizza guest1;
    cout << "Enter the pizza company name" << endl;
    getline(cin,guest1.company);

    cout << "Enter the diameter of the pizza , 7 10 or 13" << endl;
    cin >> guest1.diameter;

    cout << "Enter the weight of the pizza" << endl;
    cin >> guest1.weights;
    
    cout << "Pizza company is " << guest1.company << " ,and the diameter of the pizza is " << guest1.diameter
    << " and the pizze weights is " << guest1.weights << endl;

    TS_Pizza * guest2 = new TS_Pizza;
    cout << "Enter the diameter of the pizza , 7 10 or 13" << endl;
    cin >> guest2 -> diameter;

    cout << "Enter the pizza company name" << endl;
    getline(cin,guest2->company);

    cout << "Enter the weight of the pizza" << endl;
    cin >> guest2->weights;
    
    cout << "Pizza company is " << guest2->company << " ,and the diameter of the pizza is " << guest2->diameter
    << " and the pizze weights is " << guest2->weights << endl;



}

void c4_test8_code(void) {
    TS_CandyBar *candyArray = new TS_CandyBar[3]{
        { "Mocha Munch", 2.3, 350 },
        { "Banana", 3.5, 400 },
        { "HAHAHAHA", 3.0, 370 }
    };

    for(int i = 0; i < 3; i++) {
        cout << candyArray[i].brand << endl;
    }
}

void c4_test10_code(void) {
    array<double,3> array1;
    for(int i = 0; i < 3; i++) {
        cout << "Enter your 40 ma seconds" << ", time" << i << endl;
        cin >> array1[i];
    }
    cout << "average " << (array1[0] + array1[1] + array1[2]) / 3 << endl;
}

int main() {
    c4_test10_code();
    return 0;
}