#include<iostream>
using namespace std;
int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2, int gcd);
main()
{
    int number1, number2;
    int gcd;
    cout << "enter number 1:";
    cin >> number1;
    cout << "enter number 2:";
    cin >> number2;
    calculateGCD(number1, number2);
    calculateLCM( number1, number2, gcd);


}
int calculateGCD(int number1, int number2)
{
    if(number2 == 0)
    {
        cout << number1;
    }
    if(number2 != 0)
    {
        cout << (number2, number1 % number2) << endl;
    }
    return 0;
    
}
int calculateLCM(int number1, int number2, int gcd)
{
    int lcm;
    lcm = number1 * number2 / (number2, number1 % number2);
    cout << lcm;
    return 0;
}
    
