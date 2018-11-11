//chapter4-arrays.cpp 

#include <iostream>
#include <cstring>
#include <vector>
#include <array>
char * getname(void);

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::array;

void  c4_arrayone(void) {
    int yams[3] = {7,6,9};
    cout << "Size of yams array " << sizeof yams << " bytes" << endl;
    cout << "Size of yams array parameter " << sizeof (yams[0]+yams[1]) << " bytes";
}

void c4_strings(void) {
    const int SIZE = 12;
    char name1[SIZE] =  "C++xieydd";
    char name2[SIZE];
    char name3[SIZE];

    cout << "Size of the array " << sizeof name1 << endl;
    cout << "Size of the char " << strlen(name1) << endl;

    cout << "Enter your favorite food\n";
    //cin >> name2;
    cin.getline(name2,SIZE);
    cout << name2 << endl;
    cout << "Enter your name \n";
    cin.get(name3,SIZE).get();
    cout << name3 << endl;
}

void c4_numstr(void) {
    int year;
    char address[80];
    cout << "Which year was your house builed \n";
    (cin >> year).get();
    //cin >> year;
    //cin.get();
    cout << "What is the address \n";
    cin.getline(address,80);
    cout << "The house was builded in " << year << endl;
    cout << "Address is " << address << endl;
}

void c4_strtype1(void) {
    char char1[20];
    char char2[20] = "xieydd";
    string str1;
    string str2 = "xieydd";

    cout << "char1 is " << endl;
    (cin >> char1).get();

    cout << "str1 is " << endl;
    cin >> str1;

    cout << char1 << endl;
    cout << str1 << endl;

    cout << char2[1] << endl;
    cout << str2[1] << endl;

}

void c4_strtype2(void) {
    string s1 = "xieydd";
    string s2;
    string s3 = "zsz";

    cout << "assign" << endl;
    s2 = s1;
    cout << s2 << endl;

    cout << " add \"zsz\" to s2" << endl;
    s2 = s2 + s3;
    cout << s2 << endl;

    s2 += " xpp ";
    cout << s2 << endl;
    
}

void c4_strtype3(void) {
    char char1[20];
    char char2[20] = "xieydd";

    string s1;
    string s2 = "xieydd";

    strcpy(char1,char2);
    cout << strlen(char2) << endl;

    s1 = s2;
    cout << s1.size() << endl;

    strcat(char1,"hahahahahahahahaah");
    cout << s1 << endl;

}

void c4_strtype4(void) {
    char char1[20];
    string s1;

    cout << "char1" << strlen(char1) << endl;
    cin.getline(char1,20);

    cout << "s1" << s1.size() << endl;
    getline(cin,s1);

    cout << char1 << " : " << strlen(char1) << endl;
    cout << s1 << " : "  << s1.size() << endl;
}

void c4_structur(void) {
    struct xieydd {
        char name[20];
        int age;
        double length;
    };

    struct xieydd xieydd1 = {
        "xieydd",
        25,
        180.0,
    };

    xieydd xieydd2 = 
    {
        "xieydd1",
        23,
        175.0,
    };

    cout << xieydd1.name << "  " << xieydd2.name << endl;

    xieydd1 = xieydd2;

    cout << xieydd1.name << "  " << xieydd2.name << endl;

    xieydd xieyddArray[2] = {xieydd1,xieydd2};
    cout << xieyddArray[0].name << endl;
}

void c4_address(void) {
   struct xieydd {
        char name[20];
        int age;
        double length;
    };

    struct xieydd xieydd1 = {
        "xieydd",
        25,
        180.0,
    }; 
    double a = 4.5;
    int b = 6;

    cout << &xieydd1 << endl;
    cout << &a << endl;
    cout << &b << endl;
}

void c4_initptr(void) {
    int higgins = 5;
    int * ptr = &higgins;

    cout << "Address ptr" << ptr << endl;
    cout << "Address higgins" << &higgins << endl;
    cout << "Value ptr" << *ptr << endl;
    cout << "Value higgins" << *&higgins << endl;

}

void c4_new(void) {
    int nights = 1001;
    int * ptr = new int;
    *ptr = 1001;

    cout << nights << " Address " << &nights << endl;
    cout << ptr << " " << *ptr << " size" << sizeof *ptr << endl; 
    cout << " size ptr" << sizeof ptr <<endl;

    double * pd = new double;
    *pd = 2001.0;
    cout << pd << " " << *pd << " size " << sizeof *pd << endl;
    cout << "size ptr " << sizeof pd << endl;
    delete ptr;
    delete pd;

}

void c4_newarray(void) {
    double * d1 = new double[3];
    d1[0] = 0.1;
    d1[1] = 0.2;
    d1[2] = 0.3;

    cout << "d1[1] is " << d1[1] << endl;
    d1 = d1+1; //指向第二个元素
    cout << "Now d1[0] is " << d1[0] << endl;

    d1 = d1 -1; //又回来了
    cout << "Now d1[2] is " << d1[2] << endl; 

    delete [] d1;
}

void c4_addpntr(void) {
    double d1[3] = {0.1,0.2,0.3};
    short s1[3] = {1,2,3};

    double * pd = d1;
    short * ps = &s1[0];

    cout << "pd = " << pd << "*pd = " << *pd <<endl;
    pd = pd + 1;
    cout << "pd + 1 pd[1] = " << pd << " *pd= " << *pd << endl;
    cout << "ps = " << ps << " *ps= " << *ps << endl;
    ps = ps + 1;
    cout << "ps + 1 ps[1] = " << ps << " *ps " << *ps << endl;

    cout << d1[0] << " " << d1[1] << d1[2] << endl;
    cout << *pd << *(pd+1) << endl;

    cout << sizeof(d1) << " " << sizeof s1 << endl;
    delete pd;
    delete ps;
}

void c4_ptrstr(void) {
    char animal[20] = "monkey";
    const char * bird = "fly";
    char * ps;

    cout << animal << " " << bird << endl;
    cout << (int *) bird << endl;
    cout << "Enter a animal\t";
    cin >> animal;
    ps = animal;
    cout << ps << endl;

    cout << "*ps " << *ps << endl;
    cout << "(int *) ps " << (int *) ps << endl;

    ps = new char[strlen(animal) + 1];
    strcpy(ps,animal);
    cout << "After strcpy ps " << ps << endl;
    cout << "After strcpy *ps " << *ps << endl;
    cout << "After strcpy (int *)ps " << (int *)ps << endl;
    cout << "animal address " << (int *)animal << endl;

}

void c4_newstuct(void) {
    struct xieyd {
        string name;
        int age;
    };

    xieyd * xieyd1 = new xieyd;
    cout << "Enter name of xieyd\t" << endl;
    cin >> xieyd1->name;
    cout << "Enter age of xieyd\t" <<endl;
    cin >> xieyd1->age;
    cout << "Address of xieyd1 first address " << xieyd1 << endl;
    cout << "name of xieyd1 " << xieyd1->name << endl;
    cout << "age of xieyd1 " << xieyd1->age << endl;
    delete xieyd1;

}

void c4_delete(void) {
    char * name;
    name = getname();
    cout << name << " at " << (int *) name << endl;
    delete [] name;

    name = getname();
    cout << name << " at " << (int *) name << endl;
    delete [] name;
}

void c4_mixtype(void) {
    struct xieydd {
        int year;
        string name;
    };

    xieydd xieyd1,xieyd2,xieyd3;
    xieydd * xieyda = &xieyd1;
    xieydd * xieydb = &xieyd2; 
    xieydd * xieydc = &xieyd3; 
    // error xieyd1 -> year = 21;
    xieyda->year = 34;
    xieydb->year = 22;
    xieydc->year = 24;

    xieydd xieydda[3];
    xieydda[0].year = 100;
    std::cout << xieydda->year << std::endl; 


    const xieydd * xieyddaa[3] = {&xieyd1,&xieyd2,&xieyd3};
    std::cout << xieyddaa[1]->year << std::endl;

    const xieydd ** xieyddapp = xieyddaa;
    auto ppb = xieyddaa;
    std::cout << (*xieyddapp)->year << std::endl;
    std::cout << (*(ppb+1))->year << std::endl; 
}


    void c4_chioces(void) {
        double d1[4] = {1.1, 1.2, 1.3, 1.4};
        vector<double> v1(4);
        v1[0] = 2.1;
        v1[1] = 2.2;
        v1[2] = 2.3;
        v1[3] = 2.4;

        array<double,4> a1 = {3.1,3.2,3.3,3.4};
        array<double,4> a2 = a1;

        for(const double& d : d1)
        {
            cout << d << " at " << &d << endl;
        }
        
        for(const double& a : a1)
        {
            cout << a << " at " << &a << endl;
        }


        for(const double& v : v1)
        {
            cout << "vector v1 " << v << " at " << &v << endl;
        }
        

    }

char * getname() { //return a new pointer to a new string
    char temp[80];
    cout << "Enter something " << endl;
    cin >> temp;
    char * pn = new char[strlen(temp) + 1];
    strcpy(pn,temp);

    return pn; //temp lost when function return
}
int main() {
    c4_chioces();
    return 0;
}
