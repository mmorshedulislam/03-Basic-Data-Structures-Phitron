#include <bits/stdc++.h>
using namespace std;

class User
{
public:
    string name;
    long long int ID;
    User(string name, long long int ID)
    {
        this->name = name;
        this->ID = ID;
    }
};

class cmp
{
public:
    bool operator()(User a, User b)
    {
        if (a.name == b.name)
            return a.ID < b.ID;
        else
            return a.name > b.name;
    };
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    priority_queue<User, vector<User>, cmp> pq;

    int n;
    cin >> n;
    while (n--)
    {
        string name;
        long long int ID;
        cin >> name >> ID;
        User obj(name, ID);
        pq.push(obj);
    };

    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().ID << endl;
        pq.pop();
    };

    return 0;
}