#include<iostream>
#include<cstring>
using namespace std;
int main() {
char ch1;
cin>>ch1;
int ch;
ch=int(ch1);
if(ch<=90 && ch>=65){
    cout<<"U";
}
else if(ch<=122 && ch>=97){
    cout<<"L";
}
else{
    cout<<"I";
}
return 0;
}
