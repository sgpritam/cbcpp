#include<iostream>
#include<cstring>
using namespace std;
char *mystrtok(char str[],char delim[])
{
    // Static Pointer
    static char*input = NULL;
    if(str!=NULL)
    {
        input=str;
    }
    if(input==NULL)
    {
        return NULL;
    }

    // Dynamic Array
    char *output = new char[strlen(input)+1];

    int i;
    for(i = 0;input[i]!='\0';i++)
    {
        if(input[i]!=delim)
        {
            output[i]=input[i];
        }
        else
        {
            // You are now at delim
            output[i]='\0';
            input = input+i+1;
            return output;
        }
    }
        // Return the last word even if delim is not there
        output[i]='\0';
        input = NULL;
        return output;

}

int main()
{
    char str[]="Hi,I am teaching about strings, in C++";
    char *ptr;

    ptr = strtok(str,",");

    while(ptr!=NULL)
    {
        cout<<ptr<<endl;
        ptr=mystrtok(NULL,",");
    }
    return 0;
}




















