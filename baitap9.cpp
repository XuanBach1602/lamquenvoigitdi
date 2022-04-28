#include<iostream>
using namespace std;
int n;
int A[10005],S[10005];

void Try(int k){
    for(int i=1;i>=0;i--){
         S[k]=i;
         if(k==n-1){
             for(int j=0;j<=n-1;j++){
                 if(S[j]==1) cout<<A[j]<<" ";               
             }
             cout<<"\n";
         } else Try(k+1);
    }
}

int main(){
    cout<<"Nhap so n ";
    cin>>n;
    for(int i=0;i<=n-1;i++){
        cin>>A[i];
    }
    Try(0);
    return 0;
}