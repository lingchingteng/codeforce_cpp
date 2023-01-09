#include <iostream>

using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        string a;

        cin >> n;
        cin >> a;

        string result = "";
        int sum = (a[0] == '1' ? 1 : 0);
        for (int i = 1; i < n; ++i)
        {
            if (a[i] == '1' && sum == 1)
            {
                result += '-';
                --sum;
            }
            else
            {
                if (a[i] == '1')
                {
                    ++sum;
                }
                result += '+';
            }
        }
        cout << result << endl;
    }
    return 0;
}