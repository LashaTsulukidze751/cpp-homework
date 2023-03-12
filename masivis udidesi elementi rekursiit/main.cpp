#include <iostream>
using namespace std;
int masivisUdidesiElementi(int A[], int n){
	
	if(n==1){
		return A[0];
	}else{
		int max=masivisUdidesiElementi(A+1,n-1);
		if(max>A[0]){
			return max;
		}else{
			return A[0];
		}
			}	
}
int main(int argc, char** argv) {
	int n; cout<<"n=";cin>>n;
	int A[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	
	cout<<masivisUdidesiElementi(A,n);
	
	
	
	return 0;
}
