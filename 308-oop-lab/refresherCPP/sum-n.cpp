// Calculate sum of N natural numbers

#include <iostream>
using namespace std;

// with using loop
void sumWithLoop(int num){
	int i, sum = 0;
	for (i=1;i<=num;i++){
		sum+=i;
	}
	cout<<"Sum : "<<sum<<endl;
}

// w/o using loop
void sumWithOutLoop(int num){
	int i, sum = 0;
	sum = (num*(num+1))/2;
	cout<<"Sum : "<<sum<<endl;
}

// using Recursion
int sumWithRecursion(int num){
	if(num == 0){
		return num;
	}
	return num + sumWithRecursion(num -1);
}

// driver code
int main(){
	int i,num, sum = 0;
	cout<<"Enter a +ve Num: ";
	cin>>num;
	sumWithOutLoop(num);
	sumWithLoop(num);
	cout<<"Sum : "<<sumWithRecursion(num)<<endl;
}



/*
// implementation using loop
int main(){
	int i,num, sum = 0;
	cout<<"Enter a +ve Num: ";
	cin>>num;
	for (i=1;i<=num;i++){
		sum+=i;
	}
	cout<<"Sum : "<<sum<<endl;
	return 0;
}

*/
/* 
// implementation without using loop
int main(){
	int i,num, sum = 0;
	cout<<"Enter a +ve Num: ";
	cin>>num;
	sum = (n*((n-1))/2)
	cout<<"Sum : "<<sum<<endl;
	return 0;
*/
