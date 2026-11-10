#include <iostream>
#include <cmath>

using namespace std;

float T(float a, float b, float c)
{
    float p;
    float t;

    p = (a + b + c) / 2;
    t = sqrt((p * (p - a) * (p - b) * (p - c)));

    return t;
    
}

float Big(float a, float b, float c)
{
    float big;

    big = (a * b * c) / (4 * T(a, b, c));

    return big;


}

float Area(float a, float b, float c)
{
    const float PI = 3.14;
    float area;

    area = PI * pow(Big(a, b, c),2);

    return area;


}



int main()
{
    float a, b, c;

    cout << "please enter a: ";
    cin >> a;

    cout << "please enter b: ";
    cin >> b;

    cout << "please enter c: ";
    cin >> c;

    cout << "the area is " << Area(a, b, c);

    return 0;
}
