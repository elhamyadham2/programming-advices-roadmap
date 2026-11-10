#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct stnum
{
    int num1;
    int num2;
    char operation;
};

void readinput(stnum& num)
{
    cout << "please enter number 1: ";
    cin >> num.num1;
    cout << "please enter number 2: ";
    cin >> num.num2;
    cout << "please enter the operation: ";
    cin >> num.operation;
}
int sumnum(stnum num)
{
    int sum = num.num1 + num.num2;
    return sum;
}
int subtractnum(stnum num)
{
    int sum = num.num1 - num.num2;
    return sum;
}
int multiplynum(stnum num)
{
    int sum = num.num1 * num.num2;
    return sum;
}
int devidenum(stnum num)
{
    int sum = num.num1 / num.num2;
    return sum;
}
int main()
{
    stnum calculation1;
    readinput(calculation1);
    if (calculation1.operation == '+')
    {
        cout << sumnum(calculation1);
    }
    else if (calculation1.operation == '-')
    {
        cout << subtractnum(calculation1);
    }
    else if (calculation1.operation == '*')
    {
        cout << multiplynum(calculation1);
    }
    else
    {
        cout << devidenum(calculation1);
    }
    return 0;
}
