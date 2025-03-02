#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> d = {1, 2, 3, 4, 5};

    for (int val : d)
    {
        cout << val << " ";
    }
    cout << "Popping\n";
    d.pop_back();
    d.pop_front();
    for (int val : d)
        cout << val << " ";
    cout << "\nSize: " << d.size() << "\n";
    cout << "Front: " << d.front() << "\n";
    cout << "Back: " << d.back() << "\n";

    // Direct Indexing Supported
    cout << d[2];


    return 0;
}
