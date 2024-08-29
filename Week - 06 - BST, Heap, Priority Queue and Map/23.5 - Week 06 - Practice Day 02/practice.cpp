#include <bits/stdc++.h>
using namespace std;

void print_heap(vector<int> v)
{
    for (int val : v)
    {
        cout << val << " ";
    }
}

void insert_max_heap(vector<int> &v, int x)
{
    v.push_back(x);
    int cur_idx = v.size() - 1;

    while (cur_idx != 0)
    {
        int parent_idx = (cur_idx - 1) / 2;
        if (v[parent_idx] < v[cur_idx])
        {
            swap(v[parent_idx], v[cur_idx]);
            cur_idx = parent_idx;
        }
        else
        {
            break;
        }
    }
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_max_heap(v, x);
    }

    print_heap(v);

    return 0;
}