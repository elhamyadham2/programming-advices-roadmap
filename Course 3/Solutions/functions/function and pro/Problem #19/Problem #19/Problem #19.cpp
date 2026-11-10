#include <iostream>
#include <cmath>

using namespace std;

float Area(float d)
{
    float PI = 3.14;
    float area;

    area = (PI * pow(d, 2)) / 4;
    return area;
}
int main()
{
    float d;

    cout << "please enter the d: ";//hahahaha ai habel walahe bs el parmaga 3azama
    cin >> d;

    cout << "the area is " << Area(d) << endl;

    return 0;
}

