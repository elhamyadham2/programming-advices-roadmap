#include <iostream>

using namespace std;

struct name
{
	string firstname;
	string secondname;

};

struct adress
{
	int streenumber;
	int buildingnumber;
	string streetname;
	string city;
	string contry;
	int postnumber;
};
struct salary
{
	 int monthlysalary;
	 int yearlysalary;
};

struct personinfo
{
	name name;
	short int age;
	adress adress;
	salary salary;
	char gender;
	bool marriage;
};

int main()
{
	personinfo person1;
	cout << "please enter your first name ";
	cin >> person1.name.firstname;

	cout << "please enter your second name ";
	cin >> person1.name.secondname;

	cout << "please enter your age ";
	cin >> person1.age;

	cout << "please enter your streetnumber ";
	cin >> person1.adress.streenumber;

	cout << "please enter your streetname ";
	cin >> person1.adress.streetname;

	cout << "please enter your building number ";
	cin >> person1.adress.buildingnumber;

	cout << "please enter your city name ";
	cin >> person1.adress.city;

	cout << "please enter your contry ";
	cin >> person1.adress.contry;

	cout << "pleae enter your postal number ";
	cin >> person1.adress.postnumber;

	cout << "please enter your monthly salary ";
	cin >> person1.salary.monthlysalary;
	person1.salary.yearlysalary = person1.salary.monthlysalary * 12;

	cout << "please enter your gender ";
	cin >> person1.gender;

	cout << "please enter your marriage statues ";
	cin >> person1.marriage;

	cout << endl << endl;

	cout << "your name is " << person1.name.firstname << " " << person1.name.secondname << endl;
	cout << "your age is " << person1.age << endl;
	cout << "your adress is " << person1.adress.buildingnumber << " " << person1.adress.streenumber << " " 
		<< person1.adress.streetname << " " << person1.adress.city << " " << person1.adress.contry << endl;
	cout << "your monthly salary is " << person1.salary.monthlysalary << endl;
	cout << "your yearly salary is " << person1.salary.yearlysalary << endl;
	cout << "your gender " << person1.gender << endl;
	cout << "your marriage statues" << person1.marriage << endl;


	return 0;
	
}