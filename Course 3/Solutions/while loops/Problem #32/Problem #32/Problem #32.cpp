#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void readinput(int &num, int &power)
{
    cout << "please enter the num: ";
    cin >> num;

    cout << "please enter the power: ";
    cin >> power;
}

int powernumber(int num, int power)
{
    int i = 1;
    int result = 1;
    while (i <= power)
    {
        result = result * num;
        i++;
    }
    return result;
}

int main()
{
    int num;
    int power;

    readinput(num, power);
    cout << powernumber(num, power);
    return 0;
}

