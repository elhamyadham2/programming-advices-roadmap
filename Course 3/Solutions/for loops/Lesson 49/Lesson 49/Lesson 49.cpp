#include <iostream>
#include <string>

using namespace std;
int main()
{
    for (int c = 65; c <= 90; c++)
    {
        cout << "c = " << char(c) << endl;
        for (int x = 65; x <= 90; x++)
        {
            cout << char(c) << char(x) << endl;
        }
        cout << "\n--------------------------\n";
    }
    return 0;
}

