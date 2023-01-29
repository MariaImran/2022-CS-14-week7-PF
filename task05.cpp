#include <iostream>
using namespace std;
void totalDigits(int number);
main()
{
    int number = 0;
    cout << "Enter a number";
    cin >> number;
    totalDigits(number);
}
void totalDigits(int number)
{
    int counter = 0;
    while (number > 0)
    {

        number = number / 10;
        counter = counter + 1;
       
    }
     cout << counter;
}