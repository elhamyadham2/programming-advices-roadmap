#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void readinput()
{
    cout << "please enter the number: ";
}

int sumoddnumbers(int n)
{
    int sum = 0;
    
    for (int num = 1; num <= n; num = num + 2)
    {
        sum = sum + num;
    }
    return sum;
}
int main()
{
    int n;
    readinput();
    cin >> n;
    cout << "the sum is "<< sumoddnumbers(n);
    return 0;
}

