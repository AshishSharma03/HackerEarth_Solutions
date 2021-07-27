#include<iostream>
using namespace std;

int a[100001];
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,k;
    cin>>t;
    while(t--){

        cin>>n
           >>k;

        while(k >=n)k -= n;

        for (int i {0}; i < n; i++) {
			cin >> a[i];
		}

        for(int i{n-k}; i<n; i++ ){
            cout<<a[i]<<" ";
        }
        for(int i {0}; i<n-k; i++ ){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }      
    return 0;
}