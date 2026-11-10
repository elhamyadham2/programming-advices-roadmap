#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void readinput()
{
    cout << "please enter your number: ";
}

int finalnumber(int num)
{
    int n;
    for (n = num; n >= 1; --n)
    {
        cout << n << endl;
    }
    return n;
}

int main()
{
    int num;
    readinput();
    cin >> num;

    finalnumber(num);

    return 0;

}

