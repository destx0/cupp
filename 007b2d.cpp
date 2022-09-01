#include <iostream>
using namespace std;

int main()
{
    int n, out = 0, pow = 1;
    cout << "enter no" << endl;
    cin >> n;
    while (n > 0)
    {

        out += pow * (n % 2);
        n /= 2;
        pow *= 10;
    }
    cout << out << endl;
}