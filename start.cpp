#include<iostream>

using namespace std;

void sum(int a,int b){
    int c=a+b;
    cout<<"sum:"<<c;
}
void dif(int a,int b){
    int c=a-b;
    cout<<"difference:"<<c;
}
void mul(int a,int b){
    int c=a*b;
    cout<<"multiplication:"<<c;
}
void divv(int a,int b){
    int c=a/b;
    cout<<"division:"<<c;
}
void mod(int a,int b){
    int c=a%b;
    cout<<"modulo:"<<c;
}
int main(){
    // int a,b,c;
    // cout<<"Enter the value of a:";
    // cin>>a;
    // cout<<"Enter the value of b:";
    // cin>>b;
    // cout<<"1->sum\n2->difference\n3->multiplication\n4->division\n5->modulo\n";
    // cout<<"Enter the operation:";
    // cin>>c;
    // switch(c){
    //     case 1:
    //         sum(a,b);
    //         break;
    //     case 2:
    //         dif(a,b);
    //         break;
    //     case 3:
    //         mul(a,b);
    //         break;
    //     case 4:
    //         divv(a,b);
    //         break;
    //     case 5:
    //         mod(a,b);
    //         break;
    //     default:
    //         cout<<"invalid operation";
    //         break;
    // }

    // int n,sum=0;
    // cout<<"enter the value of n: ";cin>>n;
    // for(int i=1;i<=n;i++){
        
    //     sum=sum+i;
    // }
    // cout<<"sum:"<<sum;

    // int n,flag;
    // cout<<"enter the value of n: ";cin>>n;
    // for(int i=2;i<n;i++){
    //     if(n%i==0){
    //         flag=0;
    //     }
    // }
    // if (flag==0)
    // {
    //  cout<<"its not a prime";
    // }
    // else{
    //  cout<<"its a prime";
    // }

    // int n,fact=1;
    // cout<<"enter the value of n: ";cin>>n;
    // for (int i = 1; i <= n; i++)
    // {
    //     fact=fact*i;
    // }
    // cout<<"factorial:"<<fact;
    
    
    
    return 0;
}