#include <iostream>
#include <string>
#include <cmath>

using namespace std;
struct stcode
{
    int pin;
    int rightpin = 1234;
    int balance = 7500;
};
void readpincode(stcode &num)
{
   
    cout << "please enter the Pin: ";
    cin >> num.pin;

    
}

void pincheck(stcode num)
{
    int i = 1;

    while (i < 3)
    {
       
        if (num.pin == num.rightpin)
        {
            cout << num.balance;
        }
        else
        {
            cout << "wrong pin" << endl;
            i++;
        }
        readpincode(num);
    }
    
    cout << "card decline";
}

int main()
{
    stcode pin1;
    readpincode(pin1);
    pincheck(pin1);

}
