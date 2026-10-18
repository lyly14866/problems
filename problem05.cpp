#include <iostream>
#include <cmath>

int main()

{
    using namespace std;

    cout << "Enter the first double: ";
    double num1;
    cin >> num1;

    cout << "Enter the second double:";
    double num2;
    cin >> num2;

    double sum;
    sum = num1 + num2;

    cout << num1 << " + " << num2 << " = " << sum << "\n";

    double sum1;
    sum1 = num1 - num2;

    cout << num1 << " - " << num2 << " = " << sum1 << "\n";

    double sum2;
    sum2 = num1 * num2;

    cout << num1 << " * " << num2 << " = " << sum2 << "\n";

    double sum3;
    sum3 = num1 / num2;

    cout << num1 << " / " << num2 << " = " << sum3 << "\n";

    double sum4;
    sum4 = fmod(num1, num2);
    cout << num1 << " % " << num2 << " = " << sum4 << "\n";
 
    return 0;
}
