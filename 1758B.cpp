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
        if (n % 2 == 1)
        {
            for (int i = 0; i < n; ++i)
            {
                if (i != 0)
                {
                    cout << " ";
                }
                cout << "1";
            }
        }
        else
        {
            cout << "2 6";
            for (int i = 2; i < n; ++i)
            {
                cout << " 4";
            }
        }
        cout << endl;
    }
    return 0;
}