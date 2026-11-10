#include <iostream>
#include <cmath>

using namespace std;

float T(float a, float b)
{
    float t;
    t = (2 * a - b) / (2 * a + b);
    return t;
}

float Area(float a, float b)
{
    float PI = 3.14;
    float area;

    area = PI * (pow(b, 2) / 4) * T(a, b);

    return area;
    
}

int main()
{
    int a;
    int b;

    cout << "please enter a ";
    cin >> a;

    cout << "please enter b ";
    cin >> b;

    cout << "the area is " << Area(a, b);

    return 0;
}

