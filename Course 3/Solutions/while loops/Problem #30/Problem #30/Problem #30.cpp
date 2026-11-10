#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void readinput(int &n)
{
    cout << "please enter the number : ";
    cin >> n;
}
void postivenuber(int n)
{
    while (n < 0)
    {
        cout << "please enter a postive number." ;
    }
    
}

int factorialnumber(int n)
{
    int factorial = 1;
    for (int num = n; num >= 1; num--)
    {
        factorial = factorial * num;
    }
    return factorial;
}
int factorialusingwhile(int n)
{
    int i=1;
    int factorial = 1;
    
    while (i <= n)
    {
        factorial = factorial * i;
        i++;
    }
    return factorial;
}

int main()
{
    int num;
    readinput(num);
    postivenuber(num);
    cout << factorialnumber(num) << endl;
    cout << factorialusingwhile(num);
    return 0;
}

