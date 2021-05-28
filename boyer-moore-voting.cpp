#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++) cin>>ar[i];
    int mana;
    int count =0;
    for(int i=0;i<n;i++){
        if(count==0){
            count =1;
            mana = ar[i];
        }
        else if(mana != ar[i]){
            count--;
        }
        else{
            count++;
        }
    }
    cout<<mana<<endl;
}
