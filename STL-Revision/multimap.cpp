#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Normal Map
    multimap<string, int> m;

    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
    cout << "\n------------\n";
    m.erase("tv");
    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
    cout << "\n------------\n";
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.erase(m.find("tv"));
    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
