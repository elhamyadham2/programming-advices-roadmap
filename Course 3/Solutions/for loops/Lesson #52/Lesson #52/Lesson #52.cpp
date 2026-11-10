#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int arr[10] = { 10,20,44,55,33,22,99,88,100,55 };
    int i=0;
    int searchednumber = 20;
    for (int i = 0; i <= 10; i++)
    {
        cout << "we are at iteration " << i << endl;
        if (searchednumber == arr[i])
        {
            cout << i;
            break;
        }
        
    }
    
}

