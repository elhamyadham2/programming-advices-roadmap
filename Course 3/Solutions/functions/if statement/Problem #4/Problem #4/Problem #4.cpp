#include <iostream>
#include <string>

using namespace std;

struct stjobrequirement
{
    int age;
    bool driverlicence;
};

void Readinfo(stjobrequirement& info)
{
    cout << "please enter your age: ";
    cin >> info.age;

    cout << "please state if your have a driving liceces: ";
    cin >> info.driverlicence;
}

int main()
{
    stjobrequirement person1;
    Readinfo(person1);
    if ((person1.age >= 21) && (person1.driverlicence = true))
    {
        cout << "your are accepted";
    }
    else
    {
        cout << "your are rejected";
    }

    return 0;
}
