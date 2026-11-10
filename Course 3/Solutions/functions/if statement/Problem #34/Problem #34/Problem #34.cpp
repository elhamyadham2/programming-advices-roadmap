#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct stsales
{
    float totalsales;
    float persentage;
};

void readsalesinfo(stsales& num)
{
    cout << "please enter your total sales: ";
    cin >> num.totalsales;

}

float Commision(stsales num)
{
    float commision;
    commision = num.totalsales * num.persentage;
    return commision;
}
int main()
{
    stsales person1sales;
    readsalesinfo(person1sales);

    if (person1sales.totalsales > 1000000)
    {
        person1sales.persentage = 0.01;
    }
    else if (person1sales.totalsales >= 500000)
    {
        person1sales.persentage = 0.02;
    }
    else if (person1sales.totalsales >= 100000)
    {
        person1sales.persentage = 0.03;
    }
    else if (person1sales.totalsales >= 50000)
    {
        person1sales.persentage = 0.05;
    }
    else
    {
        person1sales.persentage = 0;
    }

    cout << "your commision is " << Commision(person1sales);
  
    return 0;
}

