#include<iostream>
using namespace std;
int showSum(int number);
main()
{
    int totalSum, number;
    cout <<"Enter any number: ";
    cin >> number;
    totalSum = showSum(number);
    cout << totalSum;
}
int showSum(int number)
{
    int sum = 0;
    for(int i = 1; i <= number; i++)
    {
        sum = sum + i;
    }
      return sum;
}