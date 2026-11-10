#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int num;
	cout << "please enter a number : ";
	cin >> num;

	int i = 0;
	int sum = 0;

	while (i <= num)
	{
		
		if (i % 2 == 0)
		{
			sum += i;
		}
		i++;
	}
	cout << sum;
	return 0;
}