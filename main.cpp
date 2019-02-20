#include<iostream>
#include <cmath>

using namespace std;

void power(float base, int exponent);

int main()
{
    power(10, 2);
    system("pause");
    return 0;
}

void power(float base, int exponent)
{
    int newNumber = base*exponent;

    base = newNumber * base;

    cout << base;
}

