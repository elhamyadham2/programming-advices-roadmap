#include <iostream>
using namespace std;
int main()
{
	cout << (12 <= 12) << endl;
	cout << (12 > 7) << endl;
	cout << (8 < 6) << endl;
	cout << (8 == 8) << endl;
	cout << (12 <= 12) << endl;
	cout << (12 == 8) << endl << endl;

	cout << !(12 >= 12) << endl;
	cout << !(12 < 7) << endl;
	cout << !(8 < 6) << endl;
	cout << !(8 == 8) << endl;
	cout << !(12 <= 12) << endl;
	cout << !(7 == 5) << endl << endl;

	cout << (true && true) << endl;
	cout << (true && false) << endl;
	cout << (false || true) << endl;
	cout << (false || false) << endl;
	cout << !(false) << endl;
	cout << !(true || false) << endl << endl;

	cout << ((7 == 7) && (7 > 5)) << endl;
	cout << ((7 == 7) && (7 < 5)) << endl;
	cout << ((7 < 7) || (7 > 5)) << endl;
	cout << (!((7 == 7) && (7 > 5))) << endl;
	cout << ((7 == 7) && !(7 < 5)) << endl << endl;

	cout << (((5 > 6) && (7 == 7)) || (true || false)) << endl;
	cout << ((!(5 > 6) && (7 == 7)) || (true || false)) << endl;
	cout << ((!(5 > 6) && (7 == 7)) || (!(true || false))) << endl;
	cout << ((!(5 > 6) && (7 == 7)) &&(!(true || false))) << endl;
	cout << ((((5 > 6) && (7 <= 8)) || ((8 > 1) && (4 <= 3))) && (true)) << endl;
	cout << ((((5 > 6) && (!(7 <= 8))) && ((8 > 1) && (4 <= 3))) || (true)) << endl << endl;

	return 0;
}
