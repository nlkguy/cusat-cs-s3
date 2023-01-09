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

};

int main(){

    Distance d;
    d.getDist();
    d.printDist();
    --d;
    d.printDist();

}