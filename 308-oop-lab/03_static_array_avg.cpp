#include <iostream>
using namespace std;
class IntManipulator{
   
    public:
    static int length;
     static int arr[10];
     static void averageCalculator(int length);
    void input(){
        cout<<"How many numbers do you wanna enter(less than 10): ";
        cin>>length;
        cout<<"Enter any "<<length<<" integers: ";
        for(int i = 0;i<length;i++){
            cin>>arr[i];
        }
    }
    void multiply (){
        int multiplier;
        cout<<"\nUsing which number you wanna multiply: ";
        cin>>multiplier;
        
        for(int i = 0; i<length;i++){
            int temp = arr[i];
            arr[i] = multiplier*temp;
        }
    }
    void sort(){
        int swap;
        for(int i = 0;i<length;i++){
            for(int j = i+1;j<length;j++){
                if(arr[i]>arr[j]){
                    swap = arr[i];
                    arr[i] = arr[j];
                    arr[j] = swap;
                }
            }
        }
        cout<<"\nSorted array is: ";
        for(int i = 0; i<length;i++){
            cout<<arr[i]<<" ";
        }

    }    

};
int IntManipulator :: length = 0;
int IntManipulator :: arr[10] = {1,2};
  void IntManipulator :: averageCalculator(int length){
        double average;
        int sum=0;
        for(int i=0;i<length;i++){
            sum += arr[i];  
        }
        average = sum/length;
        cout<<"Average is: "<<average;
    }
int main(){
    IntManipulator a,b,c;
    a.input();
    a.averageCalculator(a.length);
    b.multiply();
    a.averageCalculator(a.length);
    c.sort();
}
