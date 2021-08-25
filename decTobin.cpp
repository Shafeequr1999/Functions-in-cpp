#include<bits/stdc++.h>
using namespace std;
int decTobin(int n){
    int a[100];
    int rem;
    int ans;
    int i=0;
    while(n>0){
        rem=n%2;
        n=n/2;
        a[i]=rem;
        i++;
    }
    for(int j=i-1;j>=0;j--){
         ans=a[j];
    }
    
    return ans;
    
}
int main(){
   int n;
    cin>>n;
    cout<<decTobin(n)<<endl;
    return 0;
}