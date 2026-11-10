#include <iostream>
#include <string>

using namespace std;
void username()
{
    string name;
    
    cout << "please enter your name: ";
    getline(cin, name);

    cout << "your name is " << name;
}
int main()
{
    username();

    return 0;
}

