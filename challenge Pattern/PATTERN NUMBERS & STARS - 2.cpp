/*PATTERN NUMBERS & STARS - 2
Take as input N, a number. Print the pattern as given in the input and output section.

*/
#include<iostream>
using namespace std;
int main() {
int i,j,N,k;
cout<< endl;
cin>> N;

for(i=1;i<=N;i++)
    {
        for(j=1;j<=i;j++)
            {
            	cout<< j;

        }
            for(k=N;k>=j;k--)
                	{
                		cout<< "*";

					}
				cout<< " " << endl;
            }




return 0;
}
