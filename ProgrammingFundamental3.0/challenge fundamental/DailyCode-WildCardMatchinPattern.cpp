/*
You are given a text and a wildcard pattern. A text contains lowercase English letters only. A wildcard pattern can contain, along with lowercase English letters, '?' and '*' characters.

1.'?' matches any single character. For example, Text = "aaba" and Pattern = "aa?a", then they are matched.
2.' * ' matches any subsegment of characters(including empty sub-segment). For example, Text = "aaba" and Pattern = "a*", then they are matched. Find out if the pattern and text matches or not.
*/
#include <iostream>
using namespace std;

bool isMatched(string text,string pat){
    int row=text.length();
    int col=pat.length();
    //cout<<row<<" "<<col;
   // cout<<endl;
    bool dp[row+1][col+1];// dp[i][j] represents that if text till i and pattern till j are matched or not
    dp[0][0]=1;
    for(int i=1;i<=col;++i){
            dp[0][i]=0;
    }
    if(col>0 && pat[0]=='*')// if first character in pat is * then dp[0][1]= true
        dp[0][1]=1;
    for(int i=1;i<=row;++i){
            dp[i][0]=0;
    }
    for(int i=1;i<=row;++i){
        for(int j=1;j<=col;++j){
            if(pat[j-1]=='?' || text[i-1]==pat[j-1])
                dp[i][j]=dp[i-1][j-1];
            else if(pat[j-1]=='*'){
                dp[i][j]=dp[i-1][j]||dp[i][j-1];
            }
            else{
                dp[i][j]=0;
            }
        }
    }
    /*for(int i=0;i<=row;++i){
        for(int j=0;j<=col;++j){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }*/
    return dp[row][col];
}

int main() {
    string text="";
    cin>>text;
    string pat="";
    cin>>pat;
    string pattern ="";// to make pattern "**xyz"  --> "*xyz"  multiple kleene closure adjacent to each other are irrelevant
    pattern+=pat[0];
    for(int i=1;i<pat.length();++i){
        if(pat[i-1]=='*' && pat[i]=='*')
            continue;
        else{
            pattern+=pat[i];
        }
    }
    //cout<<pattern<<endl;
    if(isMatched(text,pattern)==1)
        cout<<"MATCHED"<<endl;
    else
        cout<<"NOT MATCHED"<<endl;
    return 0;
}
