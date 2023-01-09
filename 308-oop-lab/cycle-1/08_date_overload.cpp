#include <iostream>
using namespace std;

class Date{

    // get date info
    // overload '+' to add days
    // print new date

    private:
    int year,month,day,days;
    public:
    Date(){
        cout<<"Enter y/m/d : ";
        cin>>year>>month>>day;
    }
    void printDate(){
        cout<<"Date :"<<year<<", "<<month<<", "<<day<<endl;
    }
    Date operator + (int dayToAdd){
        
        valDate();
        int extra;
        day = day + dayToAdd;

        while(day>days){

            extra = day - days;
            day = extra;
            month++;
            valDate();
            if(month > 12){
                month=1;
                valDate();
                year++;
                valDate();
            }
            valDate();
        }
        printDate();

    }
    int valDate(){
        if(month == 2){
            if(year%4==0 && (year%100!=0 || year%400==0)){
                days = 29;
            }else{
                days = 28;
            }
        }else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
            days = 31;
        }else{
            days = 30;
        }
        return days;
    }

};



int main(){
    Date d;
    d.printDate();
    cout<<d.valDate();
    int dAdd;
    cout<<"Enter days to Add :";cin>>dAdd;
    d = d + dAdd; 

}
