#include <bits/stdc++.h>
using namespace std;
vector<int> arr;
string s;
stringstream ss;
int num;
int main()
{

    while (getline(cin, s))
    {
        ss.clear();
        arr.clear();
        ss << s;
        while (ss >> num)
        {
            arr.push_back(num);
        }
        reverse(arr.begin(), arr.end());
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i];
            if (i != arr.size() - 1)
                cout << " ";
        }
        cout << endl;
    }
}
