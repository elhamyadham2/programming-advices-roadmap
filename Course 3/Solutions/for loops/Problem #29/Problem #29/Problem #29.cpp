#include <iostream>
#include <string>

using namespace std;

void readinput()
{
    cout << "please enter the number: ";
    
}

int sumevennumbers(int num)
{
    int sum = 0;
    for (int n = 2; n <= num; n = n + 2)
    {
        sum = sum + n;
    }
    return sum;
}

int main()
{
    int num;
    readinput();
    cin >> num;
    cout << "the sum is " << sumevennumbers(num);
    return 0;
}
