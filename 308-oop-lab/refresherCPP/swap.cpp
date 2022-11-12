// Swap two numbers

// Several Methods
/*
|:--:|
|Using a 3rd variable.|
|W/o using 3rd variable(Arithmetic Operators).|
|Using inbuilt function.|
|Using BitWise Operator.|
|Using Pointers.|
*/

#include <iostream>
using namespace std;

void printNum(int num1,int num2){
	cout<<"Num 1 : "<<num1<<"\n\tNum2 : "<<num2<<endl;
}

void using3rdVar(int num1,int num2){
	
	int temp = num1;
	num1 = num2;
	num2 = temp;
	printNum(num1,num2);

}
void withOut3rdVar(int num1,int num2){
// using arithmetic operators like +,-,*,/ 

	// if num1 = 10 and num2 = 20
	num1 = num1 + num2; // num1 = 10+20 = 30 ; num1 = 30
	num2 = num1 - num2; // num2 = 30-20 = 10 ; num1 = 30, num2 = 10
	num1 = num1 - num2; // num1 = 30-10 = 20 ; num1 = 20, num2 = 10
	// here numbers are swapped : num1 = 20, num2 = 10
	
	printNum(num1,num2);
	
	// can also use * and / instead of + and -
	/*
	// if num1 = 10 and num2 = 20
	num1 = num1 * num2; // num1 = 10*20 = 200 ; num1 = 200
	num2 = num1 / num2; // num2 = 200/20 = 10 ; num1 = 200, num2 = 10
	num1 = num1 / num2; // num1 = 200/10 = 20 ; num1 = 20, num2 = 10
	// here numbers are swapped : num1 = 20, num2 = 10
	*/

}
void withBitWiseOptr(int num1,int num2){
	//assign XOR of “a” and “b” to “a” [a = a ^ b]
	//assign XOR of “b” and “a” to “b” [b = b ^ a] 
	//assign the difference of “b” and “a” to b  [a = a ^ b]
	
	num1 = num1^num2;
	num2 = num2^num1;
	num1 = num1^num2;
	
	printNum(num1,num2);

}
void withInbuiltFunc(int num1,int num2){
	swap(num1,num2);
	printNum(num1,num2);
}

//driver code
int main(){
	int num1,num2;
	cout<<"Enter Num 1: ";
	cin>>num1;
	cout<<"Enter Num 2: ";
	cin>>num2;
	printNum(num1,num2);
	
	cout<<"Swap using 3rd Variable :\n\t";
	using3rdVar(num1,num2);
	cout<<"Swap without using 3rd Variable :\n\t";
	withOut3rdVar(num1,num2);
	cout<<"Swap using inbuilt function :\n\t";
	withInbuiltFunc(num1,num2);
	cout<<"Swap using Bitwise Operator :\n\t";
	withBitWiseOptr(num1,num2);
	
	
	
	
	
	
}

