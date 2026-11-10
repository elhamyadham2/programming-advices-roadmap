#include <iostream>
#include <cmath>

using namespace std;

float Area(float r)
{
    const float PI = 3.14;
    float area;

    area = PI * pow(r, 2);

    return area;
}
int main()
{
    int r;

    cout << "please enter r: ";
    cin >> r;

    cout << "the area is " << Area(r) << endl;

    return 0;

}

