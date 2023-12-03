#include<iostream>
#include <string>
using namespace std;
int arr[128];
int main()
{
    string s;
    cin>>s;
    int count=0,n=s.size();
    for(int i=0;i<n;i++){
        arr[s[i]]++;
        if(arr[s[i]]==1)
            count++;
    }
    if(count%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";

    return 0;
}
