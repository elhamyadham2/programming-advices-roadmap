#include <iostream>

using namespace std;

int x = 100;
int function1(int x)
{
    x = 300;
    return x;
}

void void1()
{
    int x = 20;
    
    cout << x;
}
int main()
{
    cout << function1(x) << endl;
    void1();
    cout<< endl;
    cout << ::x << endl;

    return 0;
}

