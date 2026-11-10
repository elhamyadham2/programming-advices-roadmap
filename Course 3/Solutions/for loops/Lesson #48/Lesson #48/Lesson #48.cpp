#include <iostream>
#include <string>

using namespace std;

struct stpersoninfo
{
    string firstname;
    string lastname;
    int phonenumber;
    int age;
};

void readinfo(int people[100], int &numberofpeople, stpersoninfo& info)
{
    cout << "please enter how many people you want to log in? : ";
    cin >> numberofpeople;

    
    
    for (int i = 0; i <= (numberofpeople-1); i++)
    {
        cout << "please enter person " << i+1 << "info" << endl;
        cout << "please enter your first name: ";
        cin >> info.firstname;
        cout << "please enter your last name: ";
        cin >> info.lastname;
        cout << "please enter your age: ";
        cin >> info.age;
        cout << "please enter your phonenumber: ";
        cin >> info.phonenumber;
        cout << endl;
    }
    
}
void printinfo(int people[100], int numberofpeople, stpersoninfo info)
{
    for (int i = 0; i <= (numberofpeople - 1); i++)
    {
        cout << "\tperson " << i+1 << " info ";
        cout << "\n*******************************\n";
        cout << "your first name is : " << info.firstname << endl;
        cout << "your last name is : " << info.lastname << endl;
        cout << "your age is : " << info.age << endl;
        cout << "your phone number is : " << info.phonenumber << endl;
        cout << "\n*******************************\n";
    }
}

int main()
{
    stpersoninfo personinfo;
    int aop[100], numberofpeople = 0;
    readinfo(aop, numberofpeople,personinfo);
    printinfo(aop, numberofpeople, personinfo);
    return 0;
}
