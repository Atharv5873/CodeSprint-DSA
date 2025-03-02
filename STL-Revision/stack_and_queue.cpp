#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Stack:\n";
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout << "Initially Top: " << s.top() << endl;
    cout << "Size: " << s.size() << endl;
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << "\nQueue:\n";
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << "Initially Top: " << q.front() << endl;
    cout << "Size: " << q.size() << endl;
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\npriority_queue\n";
    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    cout << "\nreversed_priority_queue\n";
    priority_queue<int, vector<int>, greater<int>> rpq;
    rpq.push(1);
    rpq.push(2);
    rpq.push(3);
    rpq.push(4);

    while (!rpq.empty())
    {
        cout << rpq.top() << " ";
        rpq.pop();
    }

    return 0;
}
