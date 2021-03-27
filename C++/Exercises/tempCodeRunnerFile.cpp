#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int num = 0;
    long long int score[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> score[i];
    }
    if (n == 1)
    {
        num = 1;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = n - 1; j > i; j--)
            {
                if (score[j] - score[i] > 0)
                    num++;
            }
        }
    }

    cout << num;
    return 0;
}