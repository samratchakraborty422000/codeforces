#include <iostream>
using namespace std;
int main() {
    int a,b;
    int count;
    cin>>a>>b;
    while(a<=b){
        a*=3;
        b*=2;
        count++;   
    }
    cout<<count;
    return 0;
}
