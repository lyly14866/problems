#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    int p;
    int p5;
    int p10;

    cout << left << setw(2) << "p"
         << right << setw(9) << "p*5"
         << setw(9) << "p*10" << endl;

    p = 5;
    p5 = p * 5;
    p10 = p * 10;
    cout << left << setw(2) << p
         << right << setw(9) << p5
         << setw(9) << p10 << endl;
        
    p = 10;
    p5 = p * 5;
    p10 = p * 10;
    cout << left << setw(2) << p
         << right << setw(9) << p5
         << setw(9) << p10 << endl;

    p = 25;
    p5 = p * 5;
    p10 = p * 10;
    cout << left << setw(2) << p
         << right << setw(9) << p5
         << setw(9) << p10 << endl;

    p = 50;
    p5 = p * 5;
    p10 = p * 10;
    cout << left << setw(2) << p
         << right << setw(9) << p5
         << setw(9) << p10 << endl;

    return 0;
}
