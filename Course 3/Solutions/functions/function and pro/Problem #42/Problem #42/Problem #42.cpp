#include <iostream>
#include <cmath>

using namespace std;

int SecondstoDays(int d)
{
    int secoundtodays;
    secoundtodays = d * 24 * 60 * 60;

    return secoundtodays;
    
}

int Secoundstohours(int h)
{
    int secoundtohours;
    secoundtohours = h * 60 * 60;

    return secoundtohours;
}

int Secoundstominutes(int m)
{
    int secondstominutes;
    secondstominutes = m * 60;

    return secondstominutes;
}

int main()
{
    int d, h, m, s;

    cout << "please enter the number of days: ";
    cin >> d;

    cout << "please enter the number of hours: ";
    cin >> h;

    cout << "please enter the number of minutes: ";
    cin >> m;

    cout << "please enter the number of secounds: ";
    cin >> s;

    cout << "the number of total secounds = " << SecondstoDays(d) + Secoundstohours(h) + Secoundstominutes(m) + s;

    return 0;

}

