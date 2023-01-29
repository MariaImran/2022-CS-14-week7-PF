#include <iostream>
using namespace std;
void printTable(int number);
main()
{
    int number;
    printTable(number);
}
void printTable(int number)
{
    for (int number = 1, count = 0; number <= 10; number++)
    {
        count = number * 5;
        cout << "5 * " << number << "   =  " << count << endl;
    }
}