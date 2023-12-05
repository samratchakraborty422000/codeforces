#include<iostream>
using namespace std;
int main() {
    int n,i=1,count=0,temp=0;
    cin>>n;
    while(n>0){
        temp+=i;
        i++;
        n-=temp;
        if(n<0){
            cout<<count;
            return 0;
        }
        count++;
        
    }
    cout<<count;
    return 0;
}
