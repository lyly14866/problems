#include <iostream>
#include <string>

int main()
{
    using namespace std;

    cout << "Enter the first integer: ";
    long long num1;
    cin >> num1;

    cout << "Enter the second integer:";
    long long num2;
    cin >> num2;

    long long sum;
    sum = num1 + num2;

    cout << num1 << " + " << num2 << " = " << sum << "\n";

    long long sum1;
    sum1 = num1 - num2;

    cout << num1 << " - " << num2 << " = " << sum1 << "\n";

    long long sum2;
    sum2 = num1 * num2;

    cout << num1 << " * " << num2 << " = " << sum2 << "\n";

    long long sum3;
    sum3 = num1 / num2;

    cout << num1 << " / " << num2 << " = " << sum3 << "\n";

    long long sum4;
    sum4 = num1 % num2;

    cout << num1 << " % " << num2 << " = " << sum2 << "\n";
 
    return 0;
}
