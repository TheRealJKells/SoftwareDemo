#include<iostream>
#include <math>

using namespace std;

int main()
{
    square(10);

    return 0;
}

void square(int number)
{
    number = number*number;

    cout << number;
}