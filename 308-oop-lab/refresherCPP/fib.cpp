// print fibonacci number series


#include<iostream>
using namespace std;

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55....


int fibRecursion(int num){
	if(num<=1){
		return num;
	}
	return fibRecursion(num-1) + fibRecursion(num-2);
}

int main(){

	int n1 = 0 , n2 = 1,n3;
	int limit = 10; // can also get value from user
	cout<<n1<<", "<<n2;
	for(int i=2;i<=limit;i++){
		n3 = n1+n2;
		cout<<", "<<n3;
		n1 = n2;
		n2 = n3;
		
	}
	cout<<"\nUsing Recursion : "<<fibRecursion(limit)<<endl;
	
}

/*

// other methods are also present
// recurrence relation : F(n) = F(n-1) + F(n-2)
// pseudo code : 

*/

// refer : https://www.geeksforgeeks.org/program-for-nth-fibonacci-number/
