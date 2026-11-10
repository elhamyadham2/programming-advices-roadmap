#include <iostream>
#include <string>

using namespace std;

struct stgrade
{
    int grade;
};

void readgrade(stgrade& info)
{
    cout << "please enter your grade: ";
    cin >> info.grade;
}
int main()
{
    stgrade person1;
    readgrade(person1);
    if (person1.grade >= 50)
    {
        cout << "pass";
    }
    else
    {
        cout << "fail";
    }
    return 0;
}
