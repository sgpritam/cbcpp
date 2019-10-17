#include<iostream>
using namespace std;
void menu()
{
    cout << "Press 1 to calculate Sum of Numbers\n";
    cout << "Press 2 to calculate Difference of Numbers\n";
    cout << "Press 3 to calculate Product of numbers\n";
    cout << "Press 4 to calculate Division of numbers\n";
    cout << "Press X or x to terminate the program\n";
}
void result(int choice,int n1,int n2)
{
    switch(choice){
            case '1':
                cout<<"Sum is "<< (n1 + n2)<<endl;
                break;
            case '2':
                cout<<"Difference is "<<(n1 - n2)<<endl;
                break;
            case '3':
                cout << "Product is " <<(n1 * n2)<<endl;
                break;
            case '4':
                cout << "Division is " <<(n1 / n2)<<endl;
                break;
            case 'X or x':
                cout<<"Thank You"<<endl;

            default:
                cout<<'Invalid operation. Try again.'<<endl;
}
int main()
{
    int n1,n2;
    int choice,result;
    menu();
    cout << "Enter your choice:\n";
    choice = 1;
    cout << "Choice is " << choice << endl;
    result(choice, n1, n2);
    return 0;
}










