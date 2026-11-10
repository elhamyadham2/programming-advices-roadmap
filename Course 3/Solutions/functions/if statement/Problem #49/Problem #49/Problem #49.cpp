#include <iostream>
#include <string>

using namespace std;

struct stpin
{
    int pin;
    int pincode;
};

void readpin(stpin& num)
{
    cout << "please enter your pin: ";
    cin >> num.pin;

    num.pincode = 1234;

}
void printcorrectpin(stpin num)
{
    cout << "7500";
}
void personwrongpin(stpin num)
{
    cout << "wrong pin";
}
int main()
{
    stpin personpin;
    readpin(personpin);

    if (personpin.pin == personpin.pincode)
    {
        printcorrectpin(personpin);
    }
    else
    {
        personwrongpin(personpin);
    }
    return 0;
}

