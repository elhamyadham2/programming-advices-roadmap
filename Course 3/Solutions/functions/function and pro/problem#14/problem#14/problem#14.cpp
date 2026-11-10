#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void swapnum(int& num1, int& num2)
{
    int temp = 0;
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "the swaped numbers are" << num1 << "\t" << num2;
}

int main()
{
    int num1;
    int num2;

    cout << "please enter number 1 " << endl;
    cin >> num1;

    cout<< "please enter number 2 " << endl;
    cin >> num2;

    cout << "after the swap" << endl;
    swapnum(num1, num2);
    cout << endl;
    cout << "after the swap inside the function " << num1 << "\t" << num2;

    return 0;

}
