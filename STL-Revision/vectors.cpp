#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Normal Decleration and Pushing Popping
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6);
    cout << "Before Popping\n";
    for (int val : vec)
    {
        cout << val << " ";
    }
    vec.pop_back();
    cout << "\nAfter Popping\n";
    for (int val : vec)
    {
        cout << val << " ";
    }

    //.at .front and .back
    cout << "Values at Index 2 is " << vec[2] << " or " << vec.at(2) << endl;
    cout << "Front Element is " << vec.front() << endl;
    cout << "Last Element is " << vec.back() << endl;

    // Other ways of initilize
    vector<int> v1 = {1, 2, 3, 4, 5};
    cout << "V1: ";
    for (int v : v1)
    {
        cout << v << " ";
    }

    vector<int> v2(3, 10); // Initilize a Vecotr of size 3 and all 3 elements 10
    cout << "\nV2: ";
    for (int v : v2)
    {
        cout << v << " ";
    }

    vector<int> v3(v1); // initilize with existing vector

    cout << "\n--------------------------------\n";
    vec.erase(vec.begin());
    for (int v : vec)
    {
        cout << v << " ";
    }
    cout << endl;
    vec.insert(vec.begin() + 1, 99);
    for (int v : vec)
    {
        cout << v << " ";
    }
    cout << "\n--------------------------------\n";

    vec.clear(); // Clears the Vector nut keeps the size

    cout << "is empty: " << vec.empty() << endl;

    return 0;
}
