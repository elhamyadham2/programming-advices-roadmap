#include <iostream>
#include <string>

using namespace std;

struct stmarks
{
    int mark1, mark2, mark3;
};

void readmarks(stmarks& num)
{
    cout << "please enter mark 1: ";
    cin >> num.mark1;

    cout << "please enter mark 2: ";
    cin >> num.mark2;

    cout << "please enter mark 3: ";
    cin >> num.mark3;
}

int Average(stmarks num)
{
    int average;
    average = ((num.mark1 + num.mark2 + num.mark3) / 3);
    return average;
}

int main()
{
    stmarks person1;

    readmarks(person1);
    cout << Average(person1) << endl;
    
    if (Average(person1) >= 50)
    {
        cout << "pass";
    }
    else
    {
        cout << "fail";
    }
    return 0;
}

