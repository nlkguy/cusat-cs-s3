/*
write a class to represent time with hour,minute,second as fileds.
write a swap function to swap second field for two objects passed as arguments.

    - h,m,s
    - 
*/


#include<iostream>
#include<string>

using namespace std;

class Time{

    int hour,minute,second;
    public:
    void setTime(int h,int m,int s){
        hour=h;minute=m;second=s;
        //printTime();
    }
    void printTime(){
        cout<<"\t"<<hour<<":"<<minute<<":"<<second<<endl;

    }
    
    friend void swapTimeSecField(Time& ob1,Time& ob2);

};

void swapTimeSecField(Time& ob1,Time& ob2){

        //cout<<"Before Swpping :\t";

        int temp = ob2.second;
        ob2.second = ob1.second;
        ob1.second = temp;

        cout<<"Swpped :\t\n";

    }

int main(){

    Time t1,t2;
    t1.setTime(13,8,59);
    t2.setTime(12,4,42);


    cout<<"Before Swapping :\n";

    cout<<"Time 1:\t";t1.printTime();
    cout<<"Time 2:\t";t2.printTime();

    swapTimeSecField(t1,t2);

    cout<<"After Swapping :\n";

    cout<<"Time 1:\t";t1.printTime();
    cout<<"Time 2:\t";t2.printTime();


}