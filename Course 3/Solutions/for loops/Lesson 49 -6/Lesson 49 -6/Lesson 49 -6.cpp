#include <iostream>
#include <string>

using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int x = i; x <= 10; x++)
        {
            cout << x<<'\t';
        }
        cout << endl;
    }
}

