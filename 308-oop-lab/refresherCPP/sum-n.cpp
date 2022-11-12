// Calculate sum of N natural numbers
#include <iostream>
using namespace std;
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
