#include <iostream>
#include <math.h>
using namespace std;
class Triangle{
    private:
    int x1,x2,x3,y1,y2,y3;
    double d1,d2,d3;
    double distanceFinder(int a1,int a2,int b1,int b2){
        return sqrt(pow(a2-a1,2)+pow(b2-b1,2));
    }
    public: 
    void input(){
        cout<<"Enter the coordinates of side 1: ";
        cin>>x1>>y1;
        cout<<"Enter the coordinates of side 2: ";
        cin>>x2>>y2;
        cout<<"Enter the coordinates of side 3: ";
        cin>>x3>>y3;
        d1 = distanceFinder(x1,x2,y1,y2);
        d2 = distanceFinder(x1,x3,y1,y3);
        d3 = distanceFinder(x2,x3,y2,y3);
    }
    void validator(){
        if((d1+d2)<d3 || (d1+d3)<d2 || (d2+d3)<d1){
            cout<<"Invalid sides";
            exit(1);
        }
        else{
            cout<<"Valid sides\n";
        }
    }
    inline double shortDistance(){
        return (d1+d2+d3)/3;
    }
};
int main(){
    Triangle t;
    t.input();
    t.validator();
    cout<<"Shortest distance = "<<t.shortDistance();
}
