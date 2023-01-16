#include <iostream>
#include <math.h>
#define PI 3.141592
using namespace std;

class Polar{
    float a,r;
    public:
    void getPolar(){
        cout<<"Polar Co-ordinates (R,A): ";cin>>r>>a;
        a=a*(PI/180);
    }
    void printPolar(){ cout<<"Polar Co-ordinates (radial,angular): ("<<r<<","<<r<<")";}
    operator Rect(){
        Rect T;
        T.x=r*cos(a);
        T.y=r*sin(a);
        return T;
    }
};
class Rect{ 
    public:float x,y;
    void printRect(){ cout<<"Rectangular Co-ordinates (x,y)) : ("<<x<<","<<y<<")\n";}
};
int main(){
    Polar P;
    Rect R;
    P.getPolar();
    R=P;
    P.printPolar();
    cout<<endl;
    R.printRect();
    return 0;
}