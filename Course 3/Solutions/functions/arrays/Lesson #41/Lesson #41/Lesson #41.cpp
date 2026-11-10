#include <iostream>
#include <string>

using namespace std;

struct stpersoninfo
{
    string firstname;
    string lastname;
    int age;
    int phonenumber;
};

void readinfo(stpersoninfo& info)
{
    cout << "please enter your first name: ";
    cin >> info.firstname;

    cout << "please enter your last name: ";
    cin >> info.lastname;

    cout << "please enter your age: ";
    cin >> info.age;

    cout << "please enter your phone number: ";
    cin >> info.phonenumber;
}
void printinfo(stpersoninfo info)
{
    cout << "\n****************************************\n";
    cout << "your first name is " << info.firstname << endl;
    cout << "your last name is " << info.lastname << endl;
    cout << "your age is " << info.age << endl;
    cout << "your phone number is " << info.phonenumber << endl;
    cout << "\n****************************************\n";
}
void readpersonsinfo(stpersoninfo personinfo[2])
{
     readinfo(personinfo[0]);
     readinfo(personinfo[1]);
}
void printpersonsinfo(stpersoninfo personinfo[2])
{
    printinfo(personinfo[0]);
    printinfo(personinfo[1]);
}
int main()
{
    stpersoninfo personinfo[2];
    readpersonsinfo(personinfo);
    printpersonsinfo(personinfo);

    return 0;
}
