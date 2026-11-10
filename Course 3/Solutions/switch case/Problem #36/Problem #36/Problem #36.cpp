#include <iostream>
#include <cmath>
#include <string>

using namespace std;

enum operation { postive = '+', minuse = '-', mult = '*', dev = '/' };
struct stnumbers
{
    int num1;
    int num2;
    char operation;
};
int sum(stnumbers num)
{
    int sum;
    sum = num.num1 + num.num2;
    return sum;
}
int subtract(stnumbers num)
{
    int subtract;
    subtract = num.num1 - num.num2;
    return subtract;
}
int multiply(stnumbers num)
{
    int multiply;
    multiply = num.num1 * num.num2;
    return multiply;
}
int devide(stnumbers num)
{
    int devide;
    devide = num.num1 / num.num2;
    return devide;
}
void readinput(stnumbers& num)
{
    cout << "please enter the first number: ";
    cin >> num.num1;
    cout << "please enter the second number: ";
    cin >> num.num2;
    cout << "please enter the operation: ";
    cin >> num.operation;

}
int main()
{
    stnumbers numbers;
    readinput(numbers);
    switch (numbers.operation)
    {
    case postive:
        cout << sum(numbers);
        return 0;
    case minuse:
        cout << subtract(numbers);
        return 0;
    case mult:
        cout << multiply(numbers);
        return 0;
    case dev:
        cout << devide(numbers);
        return 0;
    default:
        cout << "wrong operation";
        return 0;
        
    }
    return 0;
}
