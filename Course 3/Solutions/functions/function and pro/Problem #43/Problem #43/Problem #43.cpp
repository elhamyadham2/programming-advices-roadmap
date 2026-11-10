#include <iostream>
#include <cmath>

using namespace std;

int Totaldays(int s)
{
    int totaldays;
    totaldays = s / (24 * 60 * 60);

    return totaldays;
}

int Reminderofdays(int s)
{
    int reminder1;
    reminder1 = s - Totaldays(s) * (24 * 60 * 60);

    return reminder1;
}

int Totalhours(int s)
{
    int totalhours;
    totalhours = Reminderofdays(s) / (60 * 60);

    return totalhours;
}

int Reminderofhours(int s)
{
    int reminder2;
    reminder2 = Reminderofdays(s) - Totalhours(s) * (60 * 60);

    return reminder2;
}

int Totalminutes(int s)
{
    int totalminutes;
    totalminutes = Reminderofhours(s) / 60;

    return totalminutes;
}

int Reminderofminutes(int s)
{
    int reminder3;
    reminder3 = Reminderofhours(s) - Totalminutes(s) * 60;

    return reminder3;
}
int Totalseconds(int s)
{
    int totalseconds;
    totalseconds = Reminderofminutes(s);

    return totalseconds;
}
int main()
{
    int s;

    cout << "please enter the total of seconds: ";
    cin >> s;

    cout << Totaldays(s) << " : " << Totalhours(s) << " : " << Totalminutes(s) << " : " << Totalseconds(s) << endl;

    return 0;

}
