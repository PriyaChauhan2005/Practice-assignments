#include<iostream>
using namespace std;
int main(){
    int count,i,n;
    cin>>n;
    int a[n];
    count=0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(i=0;i<n;i++){
        if(a[i]!=0){
            a[count]=a[i];
            count++;
        }
       
    }
    
     while(count<n){
            a[count]=0;
            count++;
        }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
