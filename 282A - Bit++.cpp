#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int X=0;
    string temp;
    while(n--){
        cin>>temp;
        if(temp=="X++" || temp=="++X") ++X;
        else --X;
    }
    cout<<X;
}
