#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> p = {1, 5};

    cout << p.first << endl;
    cout << p.second << endl;

    pair<string, int> g = {"Atharv", 100};
    cout << g.first << endl;
    cout << g.second << endl;

    pair<int, pair<int, int>> pp = {1, {2, 3}};
    cout << pp.first << endl;
    cout << pp.second.first << endl;
    cout << pp.second.second << endl;
    vector<pair<int, int>> vec = {{1, 2}, {2, 3}, {3, 4}};
    for (auto v : vec)
    {
        cout << v.first << " " << v.second << endl;
    }

    return 0;
}
