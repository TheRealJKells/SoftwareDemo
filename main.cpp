#include<iostream>
#include <cmath>

using namespace std;

int power(float base, int exponent);

int main()
{
    cout << power(10, 2) << endl;
    system("pause");
    return 0;
}

int power(float base, int exponent)
{
    int newNumber = base*exponent;

    base = newNumber * base;

    return base;
}

