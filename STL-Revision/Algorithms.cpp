#include <bits/stdc++.h>
using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    else
        return false;
}

int main()
{
    int arr[5] = {3, 5, 1, 8, 2};

    sort(arr, arr + 5);

    for (int val : arr)
        cout << val << " ";
    cout << endl;

    vector<int> vec = {5, 2, 3, 1, 7, 4};
    sort(vec.begin(), vec.end(), greater<int>());
    for (int v : vec)
        cout << v << " ";
    cout << endl;

    vector<pair<int, int>> vecc = {{3, 1}, {2, 1}, {7, 1}, {5, 2}};
    sort(vecc.begin(), vecc.end()); // sorted based on first value
    for (auto p : vecc)
        cout << p.first << " " << p.second << endl;

    // Custom Comprators
    cout << "\nCustom Comparators\n";
    sort(vecc.begin(), vecc.end(), comparator); // sorted based comparator
    for (auto p : vecc)
        cout << p.first << " " << p.second << endl;

    cout << "\nReversed\n";
    reverse(vec.begin(), vec.end());
    for (int v : vec)
        cout
            << v << " ";

    cout << "\nNext Permutation\n";
    string s = "abc";
    next_permutation(s.begin(), s.end());
    cout << s << endl;
    return 0;
}
