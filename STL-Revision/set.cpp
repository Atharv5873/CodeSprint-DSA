#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    for (int v : s)
        cout << v << " ";

    s.insert(1);
    s.insert(1);
    s.insert(1);

    cout << "\nSize: " << s.size() << endl;

    cout << "Lower Bound: " << *(s.lower_bound(4)) << endl;
    s.erase(4);
    cout << "Lower Bound: " << *(s.lower_bound(4)) << endl;
    s.insert(4);
    cout << "Upper Bound: " << *(s.upper_bound(5)) << endl;
    return 0;
}
