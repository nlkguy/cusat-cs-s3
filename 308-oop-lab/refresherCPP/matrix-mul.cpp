#include <iostream>  
using namespace std;  
int main(){  
	int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;    
	cout<<"no of rows :";    
	cin>>r;    
	cout<<"no of column :";    
	cin>>c;    
	cout<<"1st matrix element :\n";    
	for(i=0;i<r;i++){    
		for(j=0;j<c;j++){    
			cin>>a[i][j];  
		}    
	}    
	cout<<"2nd matrix element :\n";    
	for(i=0;i<r;i++){    
		for(j=0;j<c;j++){    
			cin>>b[i][j];    
		}    
	}    
	cout<<"product :\n";    
	for(i=0;i<r;i++){    
		for(j=0;j<c;j++){    
			mul[i][j]=0;    
			for(k=0;k<c;k++){    
				mul[i][j]+=a[i][k]*b[k][j];    
			}    
		}    
	}   
	for(i=0;i<r;i++){    
		for(j=0;j<c;j++){    
			cout<<mul[i][j]<<" ";    
		}    
		cout<<"\n";
	}    
	return 0;  
}    
