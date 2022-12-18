#include<iostream>
#include<string>

using namespace std;

/*
write a class which contains 1D array, use copy cinstructor to initialize data.
member function to find mod of a number.

*/

class Array{

    int arr[50],limit;
    public:
    Array(){
        cout<<"No.of Elements : ";cin>>limit;
        cout<<"Enter Elements : ";
        for(int i=0;i<limit;i++)
            cin>>arr[i];
        printArr();
    }

    Array(Array& ob){
        for(int i=0;i<limit;i++)
            arr[i]=ob.arr[i];
        cout<<"Initialized using Copy COnstructor"<<endl;
        printArr();
    }

    void printArr(){
        cout<<"Elements :";
        for(int i=0;i<limit;i++)
            cout<<" "<<arr[i];
    }

    int findMode() {
        int maxVal=0, count=0, maxCount=0,i,j;
        int n=limit;

        for(i=0;i<n;i++) {
            count = 0;
            for(j=0;j<n;j++) {
                if(arr[i] == arr[j]) {
                    count++;
                }
            }
            if (count > maxCount) {
                maxCount = count;
                maxVal = arr[i];
            }
        }

        //cout<<"\nThe mode is :"<<maxVal<<" as count is :"<<maxCount<<endl;
	
	    return maxVal;
    }

};

int main(){
    cout<<"\n\tFirst Object :\n";
    Array a1;
    cout<<"\n\tSecond Object :\n";
    Array a2(a1);

    cout<<"\nMode :"<<a1.findMode()<<endl;




}