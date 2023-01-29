#include <iostream>
using namespace std;
void digitSum(int number);
main()
{
    int number;
    cout << "Enter a number:";
    cin >> number;
    digitSum(number);
}
void digitSum(int number)
{
    
    
    int count = 0;
    int sum = 0;
    
    while (number > 0)
    {
        int counter = number % 10;
        sum = counter + sum;
        number = number / 10;
        
    }
    cout << sum;
    
}