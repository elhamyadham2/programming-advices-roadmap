#include <iostream>
#include <string>

using namespace std;

int main()
{
	float grades[3];
	float average;
	
	cout << "please enter grade 1 " << endl;
	cin >> grades[0];

	cout << "please enter grade 2 " << endl;
	cin >> grades[1];

	cout << "please enter grade 3 " << endl;
	cin >> grades[2];

	average = (grades[0] + grades[1] + grades[2]) / 3;

	cout << "\n******************************************\n";
	cout << "the average is " << average;

	return 0;

}