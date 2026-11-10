#include <iostream>
#include <cmath>

using namespace std;

float Area(float l)
{
    float PI = 3.14;
    float area;

    area = (pow(l, 2)) / (4 * PI);

    return area;
}

int main()
{
    int l;

    cout << "please enter the l ";
    cin >> l;

    cout << "the area is " << Area(l) << endl;

    return 0;
}
