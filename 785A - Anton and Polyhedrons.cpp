#include <bits/stdc++.h>
using namespace std;
int main() {
    unordered_map<string,int>umap;
    umap["Tetrahedron"]=4;
    umap["Cube"]=6;
    umap["Octahedron"]=8;
    umap["Dodecahedron"]=12;
    umap["Icosahedron"]=20;
    
    int n,sum;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        sum+=umap[s];
    }
    cout<<sum;
    return 0;
}
