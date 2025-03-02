#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << *(it) << endl;
    }

    for (vector<int>::reverse_iterator it = vec.rbegin(); it != vec.rend(); it++) // This is too length therfore we can use 'auto' keyword here
    {
        cout << *(it) << endl;
    }

    cout << "-----------------------\n";
    // auto detects itself
    for (auto i = vec.begin(); i != vec.end(); i++)
    {
        cout << *(i) << endl;
    }

    return 0;
}
