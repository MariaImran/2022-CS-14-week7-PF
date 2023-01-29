#include <iostream>
using namespace std;
void checkFrequency(int number, int digit);
main()
{
    int number = 0, digit = 0;
    cout << "Enter a number";
    cin >> number;
    cout << "Enter a digit";
    cin >> digit;
    checkFrequency(number, digit);
}
void checkFrequency(int number, int digit)
{
    int count = 0;
    while (number > 0)
    {

        int counter = number % 10;
        
        if (counter == digit)
        {
            count = count + 1;
        }
        number = number / 10;
        

    }   
    cout << count;
}