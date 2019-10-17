/*
Take as input S, a string. Write a function that returns the character with maximum frequency. Print the value returnedins
*/
#include<iostream>
#include<cstring>
#define ASCII_SIZE 256
using namespace std;
char maxFreq(char *str){
    int count[ASCII_SIZE]={0};
    int len =strlen(str);
    int max = 0;
    char result;
    for (int i=0;i<len;i++){
        count[str[i]]++;
        if (max<count[str[i]]){
            max=count[str[i]];
            result = str[i];
        }
    }
    return result;
}
int main() {
    char str[1000];
    cin>>str;
    cout<<maxFreq(str);
    return 0;
}

