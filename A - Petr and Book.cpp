#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[7];
    for(int i=0;i<7;i++) cin>>arr[i];
    
    while(n>0){
        for(int i=0;i<7;i++){
            n-=arr[i];
            if(n<=0){
                cout<<i+1;
                return 0;
                
            }
        }
    }
    return 0;
}
