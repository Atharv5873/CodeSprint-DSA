#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << "Popping\n";
    l.pop_back();
    l.pop_front();
    for (int val : l)
        cout << val << " ";
    cout << "Size: " << l.size() << "\n";
    cout << "Front: " << l.front() << "\n";
    cout << "Back: " << l.back() << "\n";

    // No Direct Indexing Supported

    // Other functions same as vectors
    return 0;
}
