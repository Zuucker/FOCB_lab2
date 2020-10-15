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

int pow(int base,int power) {
    int result=1;

    for (int i = 0; i <power; i++)
    {
        result *= base;
    }
    return result;

}

int main()
{
    int base = read_int();
    int power = read_int();

    int result = pow(base, power);
    cout << "The result is: " << result << endl;

    return 0;
}