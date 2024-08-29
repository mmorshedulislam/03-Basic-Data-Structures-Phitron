#include <bits/stdc++.h>
using namespace std;

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
        }
        else
        {
            break;
        }
        cur_idx = parent_idx;
    }
};

void delete_max_heap(vector<int> &v)
{
    v[0] = v[v.size() - 1]; // set first index = last index
    v.pop_back();
    int cur_idx = 0;

    while (true)
    {
        int left_idx = (cur_idx * 2) + 1;
        int right_idx = (cur_idx * 2) + 2;
        int last_idx = v.size() - 1;

        if (left_idx <= last_idx && right_idx <= last_idx)
        {
            // 2tai ace
            if (v[left_idx] >= v[right_idx] && v[left_idx] > v[cur_idx])
            {
                swap(v[left_idx], v[cur_idx]);
                cur_idx = left_idx;
            }
            else if (v[right_idx] >= v[left_idx] && v[right_idx] > v[cur_idx])
            {
                swap(v[right_idx], v[cur_idx]);
                cur_idx = right_idx;
            }
            else
            {
                break;
            }
        }
        else if (left_idx <= last_idx)
        {
            // left ace
            if (v[left_idx] > v[cur_idx])
            {
                swap(v[left_idx], v[cur_idx]);
                cur_idx = left_idx;
            }
            else
            {
                break;
            }
        }
        else if (right_idx <= last_idx)
        {
            // right ace
            if (v[right_idx] > v[cur_idx])
            {
                swap(v[right_idx], v[cur_idx]);
                cur_idx = right_idx;
            }
            else
            {
                break;
            }
        }
        else
        {
            // kono tai nai
            break;
        }
    }
};

void print_heap(vector<int> v)
{
    for (int val : v)
    {
        cout << val << " ";
    }
}

int main()
{
    int n;
    cin >> n; // 7
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_max_heap(v, x); // 30 20 25 15 5 6 3
    };

    delete_max_heap(v);
    print_heap(v); // 25 20 6 15 5 3

    return 0;
}