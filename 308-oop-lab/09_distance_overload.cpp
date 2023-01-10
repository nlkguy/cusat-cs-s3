#include <iostream>
using namespace std;

// measure distance in feet , inches
// overload '--' to decrement distance by 1 inch
// overload '-' to subtract 2 distances

class Distance{

    private :
    int feet , inch;
    public :
    void getDist(){
        cout<<"Distance feet/inch : ";cin>>feet>>inch;
        while(inch>12){

            feet = feet + inch/12;
            inch = inch%12;

        }
    }
    void printDist(){
        cout<<feet<<" feets, "<<inch<<" inches"<<endl;
    }

    // overloading
    // mem func : - binary = pass 1 arg
    //              unary = no arg

    Distance operator -- (){
        //Distance tmp;
        if(feet>0 && inch==0){
            feet--;
            inch = 11;
        }else{
            inch--;
        }
    }

    Distance operator -(Distance &d){

        int i , f;
        f = feet - d.feet;
        i = inch - d.inch;
        if(i<0){
            i = i + 12;
            f--;
        }
        d.feet = f;
        d.inch = i;
        return d;
    }



};

int main(){

    Distance d1;
    d1.getDist();
    d1.printDist();
    --d1;
    d1.printDist();
    Distance d2;
    d2.getDist();
    d2.printDist();
    d2 = d1-d2;
    d2.printDist();


}