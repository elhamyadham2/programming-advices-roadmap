#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int i;
    int sum = 0;
    cout << "please enter a number: ";
    cin >> i;
    int c = -99;
    
    while (i != c)
    {
        sum = sum + i;
        cout << "please enter a number: ";
        cin >> i;
       
        
    }
    cout << sum;
}
