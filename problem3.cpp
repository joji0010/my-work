// طباعه كل اليرفكت نمبر
#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int number = 0;
    do
    {
        cout << Message;
        cin >> number;
    } while (number <= 0);

    return number;
}

bool isperfict(int number)
{
    int cont = 0;
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
            cont = cont + i;
    }
    return cont == number;
}

void print(int number)
{
    for (int i = 1; i < number; i++)
    {
        if (isperfict(i))
            cout << i << endl;
    }
}

int main()
{
    print(ReadPositiveNumber("enter number : "));
}