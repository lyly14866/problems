#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    double sum = 1 + 1.0 / 4 + 1.0 / 9 + 1.0 / 16 + 1.0 / 25;

    double pi1 = sqrt(6 * sum);
    double pi2 = sqrt(6 * (sum + 1.0 / 36));

    cout << pi1 << endl;
    cout << pi2 << endl;

    return 0;
    
}
