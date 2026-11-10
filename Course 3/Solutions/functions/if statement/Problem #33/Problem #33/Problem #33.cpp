#include <iostream>
#include <string>

using namespace std;

struct stgrade
{
    int grade;
};

void readgrade(stgrade& num)
{
    cout << "please enter your grade: ";
    cin >> num.grade;
}

int main()
{
    stgrade person1;
    readgrade(person1);

    if (person1.grade >= 90)
    {
        cout << "A";
    }
    else if (person1.grade >= 80)
    {
        cout << "B";
    }
    else if (person1.grade >= 70)
    {
        cout << "C";
    }
    else if (person1.grade >= 60)
    {
        cout << "D";
    }
    else if (person1.grade >= 50)
    {
        cout << "E";
    }
    else
    {
        cout << "F";
    }

    return 0;
}


