#include <iostream>
using namespace std;
class Date {
    private: 
      int day, month, year;
        bool leapChecker(){
              if(month==2 &&year%4 == 0){
                  return true;
              }
              else{
                  return false;
              }
          }
          bool thirtyChecker(){
              if((month< 8 && month%2==0 && month != 2) || (month>7 && month%2!=0 && month != 2)){
                  return true;
              }
              else{
                  return false;
              }
          }
    public:
          void input(){
              cout<<"Enter day: ";
              cin>>day;
              cout<<"Enter month: ";
              cin>>month;
              cout<<"Enter year: ";
              cin>>year;            
          }       
          void dateValidator(){
              if(month > 12){
                  cout<<"Invalid month";exit(1);
              } 
              else if(day > 31) {
                  cout<<"Invalid day";exit(1);
                  }
              else if((month < 8 && month%2==0 && day>=31) || (month>7 && month%2!=0 && day>=31) || (month ==2 && leapChecker() == false && day > 28) || (month == 2 && leapChecker() == true && day>29) ){
                  cout<<"Invalid date";
                  exit(1);
              }
              else {
                  cout<<"\nValid date";
              }
          }      
          void nextDate(){
               if((leapChecker() == true && day == 29)|| (leapChecker() == false && day == 28)){
               day = 1;
                month++;
            }                
           else if((thirtyChecker() == true && day == 30 && month != 12) || (thirtyChecker() == false && day == 31 && month != 12) ){
                 day = 1;
                month++;
           }
            else if(month == 12 && day == 31){
                day = 1;
                month = 1;
                year++;
            }
            else{
                day++;
            }   
            cout<<"\nNext date: "<<day<<"/"<<month<<"/"<< year; 
          }     
};
int main(){
    Date nextdate;
    nextdate.input();
    nextdate.dateValidator();
    nextdate.nextDate();
}
