#include <iostream>
#include <string>

using namespace std;

void readinput(int &num , int &power)
{
    cout << "please enter the number: "; 
    cin >> num;
    cout << "please enter the power: ";
    cin >> power;

}

int powernumbers(int num,int power)
{
    int result=1;
    for (int n = 1; n <= power; n++)
    {
        result = result * num;
    }
    return result;
}

int main()
{
    int num; 
    int power;
    readinput(num, power);
    cout << "the factorial is " << powernumbers(num,power);
    return 0;
}
