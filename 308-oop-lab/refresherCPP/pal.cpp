#include<iostream>  
using namespace std;  
int main()  
{  
	int num,r,rev=0,temp;    
	cout<<"Enter a Num : ";    
	cin>>num;    
	temp=num;    
	while(num>0){    
		r=num%10;    
		rev=(rev*10)+r;    
		num=num/10;    
	}    
	if(temp==rev){   
		cout<<"Num is Palindrome\n";    
	}else{    
		cout<<"Num is not Palindrome\n";   
	}
	return 0;  
}  
