#include<iostream>  
using namespace std;  
int main()  
{  
	int arr[10]={52,13,4,15,46,1,18,19,21,22};
	int large,small,size=0,n=10;
	large=small=arr[0];

	for(int i=1;i<n;++i){
		if(arr[i]>large){
			large=arr[i];
		}
		if(arr[i]<small){
			small=arr[i];
		}
	}

	cout <<"\nSmallest : "<<small<<endl;
	cout <<"\nLargest : "<<large<<endl;

return 0;
	
	
	return 0;  
}  
