#include<iostream>  
using namespace std;  
int main()  
{  
	int arr[10]={12,13,14,15,16,17,18,19,21,22};
	int sum=0;
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" , ";
		sum = sum+arr[i];
	}
	cout<<"\nSum of Elements :"<<sum<<endl;
	return 0;  
}  
