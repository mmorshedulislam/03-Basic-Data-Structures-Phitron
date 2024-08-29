#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sentence;
    getline(cin, sentence);

    string word;
    stringstream ss(sentence);
    map<string, int> mp;

    while (ss >> word)
    {
        mp[word]++;
    }

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}

// input
// I love cricket we  love cricket they  love cricket

// output
// I 1
// cricket 3
// love 3
// they 1
// we 1