#include <iostream>
using namespace std;

int main()
{
    int x,counter=0;
    cout << "Give me a number: ";
    cin >> x;

    for (int i = 2; i<x; i++)
    {
        if (x % i == 0) {
            cout << "your number is not primal!";
            return 0;
        }
    }

    cout << "your number is primal!";

    return 0;
}