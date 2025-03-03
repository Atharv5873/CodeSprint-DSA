#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Normal Map
    map<string, int> m;

    m["tv"] = 100;
    m["fridge"] = 50;
    m["laptop"] = 50;
    m["tablet"] = 70;
    m["watch"] = 50;

    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }

    m.insert({"camera", 25});
    m.emplace("usb", 350);

    m.erase("fridge");
    cout << "\n---------------------\n";
    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }

    cout << "Count = " << m.count("laptop") << endl;
    if (m.find("camera") != m.end())
    {
        cout << "found";
    }
    else
        cout << "not found";
    return 0;
}
