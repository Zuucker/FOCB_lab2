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
    for (int i=1;i<index;i++)
    {
        int tmp = a + b;
        a = b;
        b = tmp;
    }
    return b;

}

int fibonacci_rec(int index) {

    if (index <2)
    {
        return index;
    }
    
    return fibonacci_rec(index-2)+fibonacci_rec(index-1);
}

int main()
{
    cout << "Please introduce a number: ";
    int index = read_int();

    int result = fibonacci_rec(index);
    cout << "The result is: " << result << endl;

    return 0;
}