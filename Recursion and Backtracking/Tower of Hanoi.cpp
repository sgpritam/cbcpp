/*
Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move all disks from source rod to destination rod using third rod (say auxiliary). The rules are :
1) Only one disk can be moved at a time.
2) A disk can be moved only if it is on the top of a rod.
3) No disk can be placed on the top of a smaller disk.
Print the steps required to move n disks from source rod to destination rod.
Source Rod is named as 'a', auxiliary rod as 'b' and destination rod as 'c'.
*/


#include<iostream>
using namespace std;

void towerofHanoi(int n,char src,char dest,char helper)
{
    // Base case
    if(n==0)
    {
        return;
    }
    //Rec case
    // First step N-1 disks move from src to helper

    towerofHanoi(n-1,src,helper,dest);
    // Shift Nth disk from src to dest

    cout<<"Move "<<n<<" disk from "<<src<<" to "<<dest<<endl;

    // Move N-1 disk from helper to dest

    towerofHanoi(n-1,helper,dest,src);
}
int main()
{
    int n;
    cin>>n;
    towerofHanoi(n,'A','B','C');
    return 0;
}
