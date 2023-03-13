#include <iostream>
using namespace std;
int masivisElementtaJami(int A[],int n){
	if(n==0){
		return 0;
	}else{
		return A[0]+masivisElementtaJami(A+1,n-1);
	}
}
int main(){	
	int n; cout<<"elementta raodenoba=";cin>>n;
	int A[n];
	for(int i=0;i<n;i++){
		cout<<"A["<<i<<"]=";
		cin>>A[i];
	};
	cout<<masivisElementtaJami(A,n)<<endl;
	
	
	
	
	return 0;
}
