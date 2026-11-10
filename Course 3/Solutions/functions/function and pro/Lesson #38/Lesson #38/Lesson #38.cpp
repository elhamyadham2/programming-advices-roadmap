#include <iostream>
#include <string>

using namespace std;

struct stpersoninfo
{
    string name;
    int age;
    string country;
    string city;
    int monthlysalary;
    char gender;
    bool married;
};

void ReadInfo(stpersoninfo &info)
{
    cout << "please enter your name" << endl;
    cin.ignore(1, '\n');
    getline(cin, info.name);

    cout << "please enter your age " << endl;
    cin >> info.age;

    cout << "please enter your country " << endl;
    cin >> info.country;

    cout << "please enter your city " << endl;
    cin >> info.city;

    cout << "please enter your monthly salary " << endl;
    cin >> info.monthlysalary;

    cout << "please enter your gender " << endl;
    cin >> info.gender;

    cout << "please enter your marriage status " << endl;
    cin >> info.married;


}

void printinfo(stpersoninfo info)
{
    cout << "\n****************************************\n";
    cout << "your name is " << info.name << endl;
    cout << "your age is " << info.age << endl;
    cout << "your country is " << info.country << endl;
    cout << "your city is " << info.city << endl;
    cout << "your monthly salary is " << info.monthlysalary << endl;
    cout << "your yearly salary is " << info.monthlysalary * 12 << endl;
    cout << "your gender is " << info.gender << endl;
    cout << "your marrige status is " << info.married << endl;
    cout << "\n****************************************\n";
}

int main()
{
    stpersoninfo infoperson1;
    ReadInfo(infoperson1);
    printinfo(infoperson1);

    stpersoninfo infoperson2;
    ReadInfo(infoperson2);
    printinfo(infoperson2);

    return 0;

}

