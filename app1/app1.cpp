#include <iostream>
using namespace std;

bool is_prime(int x) {
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int read_int() {
    int number;
    cout << "Give me a number: ";
    cin >> number;

    return number;
}

int main()
{
    int number = read_int();

    if (is_prime(number)) {
        cout << "Your number is prime";
    }
    else
    {
        cout << "Your number is not prime";
    }

    return 0;
}