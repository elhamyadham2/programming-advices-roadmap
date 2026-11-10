#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enweekday { sunday = 1, monday = 2, tuesday = 3, wednesday = 4, thursday = 5, friday = 6, saturday = 7 };

void printmenue()
{
    cout << "\n**************************\n";
    cout << "week days" << endl;
    cout << "\n**************************\n";
    cout << "1. sunday" << endl;
    cout << "2. monday" << endl;
    cout << "3. tuesday" << endl;
    cout << "4. wednesday" << endl;
    cout << "5. thursday" << endl;
    cout << "6. friday" << endl;
    cout << "7. saturday" << endl;
    cout << "\n**************************\n";
    cout << "please enter the day: ";
}
enweekday readweekday()
{
    int day;
    cin >> day;
    return (enweekday)day;
}
string getweekday(enweekday wday)
{
    switch (wday)
    {
    case 1:
        cout << "sunday";
        return 0;
    case 2:
        cout << "monday";
        return 0;
    case 3:
        cout << "tuesday";
        return 0;
    case 4:
        cout << "wednesday";
        return 0;
    case 5:
        cout << "thursday";
        return 0;
    case 6:
        cout << "friday";
        return 0;
    case 7:
        cout << "saturday";
        return 0;
    default:
        cout << "wrong day";
        return 0;

    }
}


int main()
{
    printmenue();
    cout << "today is " << getweekday(readweekday());

    
    return 0;
}

