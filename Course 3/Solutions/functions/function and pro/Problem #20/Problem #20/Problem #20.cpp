#include <iostream>
#include <cmath>

using namespace std;

float Area(float a)
{
    float PI = 3.14;
    float area;

    area = (PI * pow(a, 2)) / 4;
    
    return area;
}
int main()
{
    float a;

    cout << "please enter d: ";
    cin >> a;

    cout << "the area is " << Area(a) << endl;

    return 0;
}
