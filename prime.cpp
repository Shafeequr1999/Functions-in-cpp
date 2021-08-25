#include<iostream>
#include<math.h>
using namespace std;
void print(int num){
    cout<<num<<' '<<'\n';
    return;
}
int isprime(int num){
    
    for(int i=2;i<=sqrt(num);i++){

        if(num%i==0){
            return false;
        }
        else{
            return true;
        }
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    print(a);
    print(b);
    for(int i=a;i<=b;i++){
        if(int(isprime(i))){
            cout<<i<<endl;
        }
    }
}