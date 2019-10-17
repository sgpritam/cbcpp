#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();

    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        int j;

        /* For current index i, check for pattern match */
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;

        if (j == M)
            return i;
    }

    return -1;
}
bool compare(string a, string b)
    {
    if (a.find(b)==0 || b.find(a)==0)
    return a.length() > b.length();
    return a < b;
    }
int main() {
    int n;
    cin>>n;
    vector<string> v;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end(),compare);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<endl;

}

