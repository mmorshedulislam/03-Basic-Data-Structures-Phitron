#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    
    while (t--)
    {
        map<string, int> mp;

        string sentence;
        getline(cin, sentence);

        string word;
        stringstream ss(sentence);

        string maxWord;
        int maxCount = 0;

        while (ss >> word)
        {
            mp[word]++;

            if (mp[word] > maxCount)
            {
                maxCount = mp[word];
                maxWord = word;
            }
        }

        cout << maxWord << " " << maxCount << endl;
    }

    return 0;
}