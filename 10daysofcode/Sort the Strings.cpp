#include <iostream>
#include<algorithm>
using namespace std;
//to check substring and print longer string first // works fine when i/p is bat and batman
int check_substring(string a, string b)
{int i, j, index_i=-1;
    for(i=0,j=0; i,j<min(a.length(),b.length());i++,j++)
    {
        if(a[i]==b[j])
        {
            index_i=i;
        }
    }
    if(index_i==a.length()-1)//checking which string's length is short
    return 0;
    else if(index_i==-1)
	return -1;
	else return 1;
}
// how to put both checks, coz for eg if i/p is app, apple , bc, o/p is bc, apple, app
//bc and apple are also getting compared in the above func, why so?
bool compare(string a, string b)
{
    if(check_substring(a,b)==1)
    return 1;
	else if(check_substring(a,b)==-1)
	{
	if(a>b) //sorting alphabetically
    return 0;
	}
    else return 0;

return 1;

}
int main() {
    string s[10]; int n;
    cin>>n;
    for(int i=0;i<n; i++)
    cin>>s[i];

  sort(s, s+n, compare);

for(int i=0;i<n; i++)
cout<<s[i]<<" ";

    return 0;
}
