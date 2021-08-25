#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    int m=n%10;
    if(m>5){
         k=n/10;
         k=k*10+10;
       cout<<k;
    }
    else if(m<5){
        k=n-m;
       cout<<k;
    }
    return 0;
}
  