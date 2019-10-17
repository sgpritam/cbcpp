/*
An elephant decided to visit his friend. It turned out that the elephant's house is located at point x (x>0) and his friend's house is located at point  of the coordinate line. In one step the elephant can move 1, 2, 3, 4 or 5 positions forward.
Determine, what is the minimum number of steps he need to make in order to get to his friend's house.
*/
#include<iostream>
int main()
{
    int i,r,q;
    std::cin>>i;
    q=i/5;
    r=i%5;
    if(r!=0)
    std::cout<<q+1;
    else
    std::cout<<q;
}
