#include <iostream>
#include <cmath>
#include <string>

using namespace std;

struct stday
{
    int day;
};

void readday(stday& num)
{
    cout << "please enter the day ";
    cin >> num.day;
}

int main()
{
    stday daynumber;
    readday(daynumber);
    if (daynumber.day == 1)
    {
        cout << "sunday";
    }
    else if (daynumber.day == 2)
    {
        cout << "monday";
    }
    else if (daynumber.day == 3)
    {
        cout << "tuesday";
    }
    else if (daynumber.day == 4)
    {
        cout << "wednesday";
    }
    else if (daynumber.day == 5)
    {
        cout << "thursday";
    }
    else if (daynumber.day == 6)
    {
        cout << "friday";
    }
    else if (daynumber.day == 7)
    {
        cout << "saturday";
    }
    else
    {
        cout << "wrong day";
    }
    return 0;
}

