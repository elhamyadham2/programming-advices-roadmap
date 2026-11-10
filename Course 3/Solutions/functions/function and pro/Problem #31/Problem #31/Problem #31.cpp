#include <iostream>
#include <cmath>

using namespace std;

int Power2(int a)
{
    int power2;
    power2 = pow(a,2);

    return power2;
}
int Power3(int a)
{
    int power3;
    power3 = pow(a, 3);

    return power3;
}
int Power4(int a)
{
    int power4;
    power4 = pow(a, 4);

    return power4;
}

int main()
{
    int a;

    cout << "please enter a: ";
    cin >> a;

    cout << Power2(a) << "\t" << Power3(a) << "\t" << Power4(a) << endl;

    return 0;

}
