#include <iostream>
using namespace std;
void printNumber(int length);
main()
{
    int length = 0;

    cout << "Enter length";
    cin >> length;
    printNumber(length);
}
void printNumber(int length)
{
    int result = 0;
    int number1 = 0;
    int number2 = 1;
    cout <<"Fibbonocci series:" << number1 <<number2;
    for (int x = 0; x <= length - 2; x++)
    {
        result = number1 + number2;
        cout << result ;
        number1 = number2;
        number2 = result;
    }
}