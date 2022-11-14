#include<iostream>
using namespace std;


bool primeOrNot(int num){

	int temp = 0;
	for(int i=2;i<=(num/2);i++){
		if(num%i==0){
			temp++;
			break;
		}
	}
	if(temp==0 && num!=1){
		cout<<num<<" prime \n";
		return true;
	}else{
		//cout<<num<<" not prime\n";
		return false;
	}
	
}


// driver code
int main(){
	int limit = 40;
	int n1=0,n2=1,n3;
	if(primeOrNot(n1)){
		cout<<"0 ,";
	}
	if(primeOrNot(n2)){
		cout<<"1 ,";
	}
	
	for(int i=2;i<=limit;i++){
		n3=n1+n2;
		if(primeOrNot(n3)==true){
			cout<<n3<<" ,";
		}
		n1=n2;
		n2=n3;
	}
	
}
