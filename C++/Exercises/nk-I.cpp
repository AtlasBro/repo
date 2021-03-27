#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        bool A = 1;
        int sum;
        cin >> sum;
        for (int i = 2; i <= 15; i++)
        {
            long long n = pow(2, i) - 1;
            if (sum % n == 0)
            {
                cout << "YE5\n";
                A = 0;
                break;
            }
        }
        if (A)
            cout << "N0\n";
    }
    return 0;
}
