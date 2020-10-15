#include <iostream>
using namespace std;


int read_int() {
    int number;
    cout << "Give me a number: ";
    cin >> number;

    return number;
}

int fibonacci_iter(int index) {

    int a = 0,b = 1;
    if (index == 0 || index == 1 )
    {
        return index;
    }
    for (int i=2;i<index;i++)
    {
        int tmp = a + b;
        a = b;
        b = tmp;
    }
    return b;

}

int main()
{
    int index = read_int();

    int result = fibonacci_iter(index);
    cout << "The result is: " << result << endl;

    return 0;
}