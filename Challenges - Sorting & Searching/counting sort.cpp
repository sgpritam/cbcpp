#include <iostream>
using namespace std;
long long int a[1000000];
void countingsort (long long int a[], long long int n){
    long long int k=0;
    long long int freq[1000000];
    long long int sorteda[1000000];
    //firstly we'll find the maximum ele of a[]
    for(int i=0; i<n; i++)
    k = max(k,a[i]);

    //initialise all the elements of freq[] to 0
    for(int i=0; i<k; i++){
        freq[i]= 0;
    }

    //store the frequencies of each distinct element of a[],
    //by mapping it's value as the index of freq[]
    for(int i = 0; i<n; i++){
        //iterate over a[] and the freq[] with the elements freq counts
        freq[a[i]]+= 1;
    }

    //now store the elements in sorteda[] by decreasing count of frequencies
    long long int j=0;
    //iterate over freq[]
    for(int i =0; i<=k; i++){
        long long int temp;
        temp = freq[i];

        // freq[] stores which element occur how many times(it's frequency)
        //store i(index of freq[]) in sorteda[]according to the no. of times i occured

        while(temp--){
        //cout<<freq[i]<<endl;
        sorteda[j] = i;
        j++;
        }
    }

    //printing the sorteda[]
    for(int i = 0; i<n ; i++){
        cout<< sorteda[i]<<" ";
    }
}
int main() {

    long long int n;cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    countingsort(a,n);
   // for(int i=0; i<n; i++){
     //   cout<<a[i]<<" , ";
  //  }
    return 0;
}

