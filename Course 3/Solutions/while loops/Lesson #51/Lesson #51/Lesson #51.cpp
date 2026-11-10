#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void readnumberusingwhileloop(int start, int finish)
{
    int num;
    cout << "please enter the number between " << start << " : " << finish << endl;
    cin >> num;
    while (num<start || num>finish)
    {
        cout << "wrong number please enter a number between " << start << " : " << finish << endl;
        cin >> num;
    }
    cout << "the number you entered is " << num;
}
void readnumberusingdowhileloop(int start, int finish)
{
    int num;

    do
    {
        cout << "please enter the number between " << start << " : " << finish << endl;
        cin >> num;
    } while (num<start || num>finish);
    cout << "the number you entered is " << num;
}

int main()
{
    int num;
    int start = 1, finish = 10;
    readnumberusingwhileloop(start, finish);
    readnumberusingdowhileloop(start, finish);
    return 0;
}

