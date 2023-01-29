#include<iostream>
using namespace std;
int validateIntegar(int number);
main()
{
    int number;
    cout << "Enter any number: ";
    cin >> number;
    validateIntegar( number);
}
int validateIntegar(int number)
{
    while (number < 0)
    {
        cout << "ERROR! You've entered an invalid number." <<endl;
        cout << "Please! Enter the number again : ";
        cin >> number;
    }
    return number;

}