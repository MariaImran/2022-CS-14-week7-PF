#include<iostream>
using namespace std;
void counting(int number);
main()
{
    int number;
    cout <<"Enter any number: ";
    cin >> number;
    counting( number);
    
}
void counting(int number)
{
    for(int i = 1; i <= number; i++)
    cout << i <<endl;

}