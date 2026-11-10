#include <iostream>
#include <string>

using namespace std;

void readgrades(float grade[3])
{
    cout << "pleasae enter grade 1 " << endl;
    cin >> grade[0];

    cout << "pleasae enter grade 2 " << endl;
    cin >> grade[1];

    cout << "pleasae enter grade 3 " << endl;
    cin >> grade[2];

}

float Average(float grade[3])
{
    float average = (grade[0] + grade[1] + grade[2]) / 3;
    return average;
}
int main()
{
    float grades[3];
    readgrades(grades);
    cout << Average(grades);

    return 0;
}

