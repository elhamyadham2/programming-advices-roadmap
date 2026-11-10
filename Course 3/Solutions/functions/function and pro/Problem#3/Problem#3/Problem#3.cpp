#include <iostream>

using namespace std;

int swapnum1(int num1, int num2)
{
    int swap = 0;

    swap = num1;
    num1 = num2;
    num2 = swap;

    return num1;
}


int swapnum2(int num1, int num2)
{
    int swap = 0;

    swap = num1;
    num1 = num2;
    num2 = swap;

    return num2;
}

int main()
{
    int num1;
    int num2;

    cout << "please enter num1 ";
    cin >> num1;

    cout << "please enter num2 ";
    cin >> num2;

    cout << swapnum1(num1,num2) << endl;
    cout << swapnum2(num1, num2) << endl;

    return 0;

}
