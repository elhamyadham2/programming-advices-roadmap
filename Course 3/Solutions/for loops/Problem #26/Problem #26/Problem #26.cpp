#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void readinput()
{
    cout << "please enter the number: ";
}

int finalnumber(int num)
{
    int n;
    for ( n = 1; n <= num; n++)
    {
        cout << n<<endl;
    }
    return n;
}

int main()
{
    int n;
    readinput();
    cin >> n;
    finalnumber(n);
    

    return 0;
}

