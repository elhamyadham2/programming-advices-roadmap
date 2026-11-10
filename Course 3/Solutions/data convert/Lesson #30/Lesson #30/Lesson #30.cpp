#include <iostream>
#include <string>

using namespace std;


int main()
{
	string st1 = "43.22";
	int n1 = 20;
	int n2 = 33.5;
	int n3 = 55.23;

	int int1,int2;
	float float1;
	double double1;

	int1 = stoi(st1);
	float1 = stof(st1);
	double1 = stod(st1);

	cout << int1 << endl;
	cout << float1 << endl;
	cout << double1 << endl;

	cout << endl << endl;

	string s1, s2, s3;
	s1 = to_string(n1);
	s2 = to_string(n2);
	s3 = to_string(n3);

	int2 = int(n3);
	cout << s1 << endl << s2 << endl << s3 << endl << int2 << endl;

	return 0;
}
