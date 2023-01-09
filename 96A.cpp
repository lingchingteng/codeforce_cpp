#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    if (s.size() < 7)
    {
        cout << "NO" << endl;
        return 0;
    }

    int cnt = 1;
    for (int i = 1; i < s.size(); ++i)
    {
        if (s[i] == s[i - 1])
        {
            ++cnt;
            if (cnt == 7)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        else
        {
            cnt = 1;
        }
    }
    cout << "NO" << endl;

    return 0;
}