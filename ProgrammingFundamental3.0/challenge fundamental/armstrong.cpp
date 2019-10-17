#include<iostream>
using namespace std;
void checkarm(long );
int main() {
	long number;
    cin>>number;
    checkarm(number);
	return 0;
}
void checkarm(long nnumber){
         long temp=nnumber;
         long cube=0,sum=0,rem=0;
         while(temp>0)
        { rem=temp%10;
         cube=rem*rem*rem;
         sum=sum+cube;
         temp=temp/10;
        }
        if(sum!=nnumber){
        	cout<<"false";
		}
        else{
        	cout<<"true";
		}
}
