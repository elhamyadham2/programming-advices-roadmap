#include <iostream>
#include <cmath>

using namespace std;

float Area(float a, float d)
{
    float area;

    area = a * sqrt((pow(d, 2)) - (pow(a, 2)));

    return area;
}
int main()
{
    float a;
    float d;

    cout << "please enter a: ";
    cin >> a;

    cout << "please enter d: ";
    cin >> d;

    cout << "the area is " << Area(a, d) << endl;

    return 0;
}

