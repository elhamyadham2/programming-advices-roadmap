#include <iostream>
#include <string>

using namespace std;

struct stgrade
{
    int grade1;
    int grade2;
    int grade3;
};

void readgrades(stgrade x[3])
{
    cout << "please enter grade 1: ";
    cin >> x[0].grade1;

    cout << "please enter grade 2: ";
    cin >> x[1].grade2;

    cout << "please enter grade 3: ";
    cin >> x[2].grade3;
}
void printgrades(stgrade x[3])
{
    cout << "\n********************************\n";
    cout << "the average is " << (x[0].grade1 + x[1].grade2 + x[2].grade3) / 3;
}


int main()
{
    stgrade grades[3];
    readgrades(grades);
    printgrades(grades);

    return 0;

}

