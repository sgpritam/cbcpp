#include<iostream>
using namespace std;


int main(){

    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin>>n;
    int num=65;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            char ch=char(num);
            cout<<ch<<" ";
        }
        num=num+1;
        cout<<endl;
    }

}

