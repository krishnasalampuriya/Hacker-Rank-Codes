#include<iostream>
using namespace std;
int main(){
    int n,q;
    int *a[100001];
    int k[100001];
    cin>>n>>q;
    for(int i=0;i<n;i++){
        
        cin>>k[i];
        a[i]=new int[k[i]];
        for(int j=0;j<k[i];j++)
            cin>>a[i][j];
    }
    int Query[100001][2];
    for(int i=0;i<q;i++)
        cin>>Query[i][0]>>Query[i][1];
    /*
    cout<<n<<" "<<q<<endl;
    for(int i=0;i<n;i++)
        for(int j=0;j<k[i];j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    for(int i=0;i<q;i++)
        cout<<Query[i][0]<<" "<<Query[i][1]<<endl; */
        for(int i=0;i<q;i++)
            cout<<a[Query[i][0]][Query[i][1]]<<endl;
        
}