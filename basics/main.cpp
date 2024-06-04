#include <iostream>
using namespace std;

int main() {
	int t,n,count=0;
	int a[n];
	int b[n];
	int c[n-1];
	cin>>t;

	while(t--){
            cin>>n;
	    for (int i=0; i<n;i++){
	        cin>>a[i];
	    }
	     for (int i=0; i<n;i++){
	        cin>>b[i];
	    }
	     for (int i=1; i<n;i++){
	       c[i]= a[i+1] - a[i];
	    }
	    if (b[0]< a[0]){
	        count= count+1;
	    }
	     for (int i=1; i<n;i++){
	        if (b[i] < c[i]) {
	            count= count+1;
	        }
	    }
	    cout<<count<<endl;
	    count=0;


	}

	return 0;
}

