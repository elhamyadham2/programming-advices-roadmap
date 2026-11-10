#include <iostream>

using namespace std;

int Area(int a, int b)
{
    int area;

    area = a * b;

    return area;
}

int main()
{
    int a;
    int b;

    cout << "please enter a: ";
    cin >> a;

    cout << "please enter b: ";
    cin >> b;

    cout << "the area is " << Area(a, b) << endl;

    return 0;
}
