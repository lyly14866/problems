#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    using namespace std;

    double population = 312032486.0;
    double secondsPerYear = 365.0 * 24.0 * 60.0 * 60.0;

    double birthsPerYear = secondsPerYear / 7.0;
    double deathsPerYear = secondsPerYear / 13.0;
    double immigrantsPerYear = secondsPerYear / 45.0;
    double netChange = birthsPerYear - deathsPerYear + immigrantsPerYear;

    cout << fixed << setprecision(0);

    population += netChange;
    cout << round(population) << endl;

    population += netChange;
    cout << round(population) << endl;

    population += netChange;
    cout << round(population) << endl;

    population += netChange;
    cout << round(population) << endl;

    population += netChange;
    cout << round(population) << endl;

    return 0;
}