#include <iostream>
#include <string>

using namespace std;

void readinput()
{
    cout << "please enter the number: ";

}

int factorialnumbers(int num)
{
    int factorial = 1;
    for (int n = 1; n <= num; n++)
    {
        factorial = factorial * n;
    }
    return factorial;
}

int main()
{
    int num;
    readinput();
    cin >> num;
    cout << "the factorial is " << factorialnumbers(num);
    return 0;
}
