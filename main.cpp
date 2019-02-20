#include<iostream>
#include <cmath>

using namespace std;

float power(float base, int exponent);

int main()
{
    cout << power(10, 2) << endl;
    system("pause");
    return 0;
}

float power(float base, int exponent)
{
    int newNumber = base*exponent;

    base = newNumber * base;

    return base;
}

