#include<iostream>
using namespace std;
int showSum(int number);
main()
{
    int totalSum, number;
    totalSum = showSum(number);
    cout << totalSum;
}
int showSum(int number)
{
    int sum = 0;
    for(int i = 1; i <= 100; i++)
    {
        sum = sum + i;
    }
      return sum;
}