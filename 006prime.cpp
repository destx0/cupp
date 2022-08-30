#include <iostream>
using namespace std;

int main()
{
    int n, i;
    bool isPrime = 1;
    cout << "enter no" << endl;
    cin >> n;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "not prime" << endl;
            isPrime = 0;
            break;

            /* code */
        }

        /* code */
    }
    if (isPrime)
    {
        cout << "prime" << endl;
    }
}