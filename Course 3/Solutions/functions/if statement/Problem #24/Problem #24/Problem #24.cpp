#include <iostream>
#include <string>

using namespace std;

struct stage
{
    int age;
};

void readage(stage& num)
{
    cout << "please enter your age: ";
    cin >> num.age;
}

int main()
{
    stage person1;
    readage(person1);

    if ((person1.age >= 18) && (person1.age <= 45))
    {
        cout << "valid age";
    }
    else
    {
        cout << "invalid age";
    }

    return 0;
}

