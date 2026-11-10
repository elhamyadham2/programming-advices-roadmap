#include <iostream>
#include <string>

using namespace std;

int main()
{
    for (int i = 10; i >= 1; i--)
    {
        for (int x = i; x >= 1; x--)
        {
            cout << "*" ;
        }
        cout << endl;
    }
    return 0;
}
