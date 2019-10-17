/* FIBONACCI PATTERN (PATTERN 4)
Take N (number of rows), print the following pattern (for N = 4)
0
1 1
2 3 5
8 13 21 34
*/

#include <iostream>
using namespace std;
int main(){
	 int n;
	 cin>>n;

    if (n>2){
        cout << "0" << '\n';
        cout << "1" << '\t'   << "1";
        cout << '\n';
     }
	 int row = 3;

     int a,b,c;

     a = 1;
     b = 1;
     c = a + b;

     int z = 1;
     while (z <= n){
     if (n==1){
         cout << "0" << '\n';
         break;
     }
     if (n==2){
         cout << "0" << '\n';
         cout << "1" <<'\t'  << "1";
         cout << '\n';
         break;
     }
	 while (row<=n){
	 	int count = 1;

	 	while(count<=row){
	 		cout<<c<<'\t';
	 		// updating the value of c
	 		a = b;
	 		b = c;
	 		c = a + b;

	 		// updating the count variable
	 		count = count + 1;
	 	}

	 	cout<<'\n';
	 	row = row + 1;
	 }
     z+=1;
     }

	return 0;
}
