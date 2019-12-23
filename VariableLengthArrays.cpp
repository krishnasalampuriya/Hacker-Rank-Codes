#include<iostream>
using namespace std;
int main(){
    int n,q;
    int *a[100001];
    cin>>n>>q;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        a[i]=new int[k];
        for(int j=0;j<k;j++)
            cin>>a[i][j];
    }
    int Query[100001][2];
    for(int i=0;i<q;i++)
        cin>>Query[i][0]>>Query[i][1];
    
}