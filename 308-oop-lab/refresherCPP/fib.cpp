// print fibonacci number series


#include<iostream>
using namespace std;

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55....

int main(){

	int n1 = 0 , n2 = 1,n3;
	int limit = 10;
	cout<<n1<<", "<<n2;
	for(int i=2;i<=limit;i++){
		n3 = n1+n2;
		cout<<", "<<n3;
		n1 = n2;
		n2 = n3;
		
	}
	cout<<endl;
	
}
