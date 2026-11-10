#include <iostream>
#include <string>

using namespace std;


int mysumfunction()
{
    int num1;
    int num2;

    cout << "please enter number 1: ";
    cin >> num1;

    cout << "please enter number 2 : ";
    cin >> num2;
    
    cout << "**************************" << endl;

    return num1 + num2;
}

void mysumprocedure()
{

    int num1;
    int num2;

    cout << "please enter number 1: " << endl;
    cin >> num1;

    cout << "please enter number 2 : " << endl;
    cin >> num2;

    cout << "**************************" << endl;
    cout << num1 + num2 << endl;
}

int main()
{
    mysumprocedure();

    cout << mysumfunction();

    return 0;

}

