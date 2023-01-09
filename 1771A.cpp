#include <iostream>

using namespace std;
int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        long long max = 0;
        long long max_cnt = 0;
        long long min = 100001;
        long long min_cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (max < a[i])
            {
                max = a[i];
                max_cnt = 1;
            }
            else if (max == a[i])
            {
                ++max_cnt;
            }

            if (min > a[i])
            {
                min = a[i];
                min_cnt = 1;
            }
            else if (min == a[i])
            {
                ++min_cnt;
            }
        }

        if (max != min)
        {
            cout << 2 * max_cnt * min_cnt << endl;
        }
        else
        {
            cout << max_cnt * (max_cnt - 1) << endl;
        }
    }

    return 0;
}