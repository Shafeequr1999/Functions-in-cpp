#include<iostream>
using namespace std;

int countMaxChoco(int money,int price,int wrap)
{
    if(money<price){
        return 0;
    }
   
        int choc=money/price;
        choc=choc+(choc-1)/(wrap-1);
        return choc;
}
    
int main(){
    int money=15;
    int price=1;
    int wrap=3;
    cout<<countMaxChoco(money,price,wrap);
    return 0;
}