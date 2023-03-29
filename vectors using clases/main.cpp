#include <iostream>
using namespace std;
class Vector{
	private:
		double N;
		double* data;
		unsigned int verifyI(unsigned int i){
			if(i>N-1)return N-1;
			return i;
		}
	public:
		Vector(){
			N=1;
			data=new double[1];
		}
		Vector(unsigned int N){
			if(N==0) this->N=1;
				else this->N=N;
			data=new double[N];
			clear();	
		}
		void setI(int i,double tmp){
			data[verifyI(i)]=tmp;
		}
		double getN(){
			return N;
		}
		double getdata(unsigned int i){
			return data[verifyI(i)];
		}
		void clear(){
			for(int i=0;i<N;i++){
				data[i]=0;
			};
		}		
};
Vector getVectorFromKeyboard(unsigned int N){
	Vector Rez=Vector(N);
	double tmp=0;
	for(int i=0;i<N;i++){
		cout<<i<<"=";cin>>tmp;
		Rez.setI(i,tmp);
	}
	return Rez;
};

Vector sumOfVectors(Vector A,Vector B){
	Vector tmp=Vector(A.getN());
	for(int i=0;i<A.getN();i++){
		tmp.setI(i,A.getdata(i)+B.getdata(i));
	}
	return tmp;
};
Vector printArray(Vector tmp){
	for(int i=0;i<tmp.getN();i++){
		cout<<i<<"="<<tmp.getdata(i)<<endl;
	}
}
int main(int argc, char** argv) {
	Vector A=getVectorFromKeyboard(2);
	Vector B=getVectorFromKeyboard(2);
	Vector C=sumOfVectors(A,B);
	printArray(C);
	return 0;
}