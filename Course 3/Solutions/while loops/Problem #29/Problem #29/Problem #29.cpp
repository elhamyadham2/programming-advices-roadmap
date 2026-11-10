#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int printnumber(int num)
{
    int n = 1;
    while (n <= num)
    {
        cout << n << endl;
        n++;
    }
    return n;
}

int main()
{
    int num;
    cout << "please enter the number: ";
    cin >> num;
    printnumber(num);
    return 0;

}

