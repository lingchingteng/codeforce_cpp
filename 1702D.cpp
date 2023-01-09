#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string w;
        cin >> w;

        int n;
        cin >> n;

        int total = 0;

        vector<pair<int, char>> v{};

        for (int i = 0; i < w.size(); ++i)
        {
            total += (w[i] - 'a' + 1);
            v.push_back(make_pair(i, w[i]));
        }

        // 先按照字元由大到小排序
        sort(v.begin(), v.end(), [](pair<int, char> a, pair<int, char> b)
             {
                 return a.second == b.second ? a.first < b.first : a.second > b.second; // 降序排列
             });

        int idx = 0;
        while (total > n && idx < v.size())
        {
            total -= (v[idx++].second - 'a' + 1);
        }

        if (idx == v.size())
        {
            cout << endl;
            continue;
        }

        vector<pair<int, char>> new_v(v.begin() + idx, v.end());

        // 在按照原本的 index 由小到大排序
        sort(new_v.begin(), new_v.end(), [](pair<int, char> a, pair<int, char> b)
             {
                 return a.first < b.first; // 升序排列
             });

        for (auto iter = new_v.begin(); iter != new_v.end(); ++iter)
        {
            cout << iter->second;
        }
        cout << endl;
    }
    return 0;
}