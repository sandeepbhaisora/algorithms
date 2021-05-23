/* finding the largest subarray sum
   eg -2,2,4,-1,3
   output = 8
   look for the maximum sum till the current pos
   either choose to include this index or exclude 
    either choose the sum including the current number or choose the current number
*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i =0;i<n;i++) cin>>ar[i];

    int globalSum = ar[0],localSum = ar[0];
    for(int i=0;i<n;i++){
        localSum = max(ar[i],(ar[i]+localSum));
        if(localSum> globalSum) globalSum = localSum;
    }
    cout<<globalSum<<endl;
}



