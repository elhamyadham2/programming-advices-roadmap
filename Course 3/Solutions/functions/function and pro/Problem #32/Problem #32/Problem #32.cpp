#include <iostream>
#include <cmath>

using namespace std;

int Power(int num, int p)
{
    int result;
    
    result = pow(num, p);

    return result;
}

int main()
{
    int num, p;

    cout << "please enter number ";
    cin >> num;

    cout << "please enter power ";
    cin >> p;

    cout << "the result is " << Power(num, p);

    return 0;


}

