#include <iostream>

using namespace std;

void fibonacci(int limit)
{
    int first_number = 0, second_number = 1;
    int temp;

    cout << first_number << "  " << second_number << "  "; // The initial terms of the series: 0 and 1

    for(int i = 3; i <= limit; i++)
    {
        cout << first_number + second_number << "  ";
        temp = first_number + second_number;
        first_number = second_number;
        second_number = temp;
    }
}

int main()
{
    int lim;
    
    cout << "Enter number of terms: ";
    cin >> lim;

    fibonacci(lim);

    return 0;
}