#include <iostream>
#include <string>

using namespace std;

int main()
{
    string string1;
    string string2;
    string string3;
    int num1;
    int num2;

    cout << "please enter string 1: ";
    getline(cin, string1);

    cout << "please enter string 2: ";
    cin >> string2;

    cout << "please enter string 3: ";
    cin >> string3;

    cout << endl << endl;

    cout << "**************************************" << endl;
    cout << "the length of the string is " << string1.length() << endl;
    cout << "characters at 0,2,4,7 are " << string1[0] << "\t" << string1[2] << "\t" << string1[4] << "\t" << string1[7] << endl;
    cout << "concatenation string2 and sring3 = " << string2 + string3 << endl;

    num1 = stoi(string2);
    num2 = stoi(string3);

    cout << string2 << " * " << string3 << " = " << num1 * num2;

    return 0;

}
