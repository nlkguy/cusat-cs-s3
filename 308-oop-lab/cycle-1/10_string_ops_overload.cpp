#include <iostream>
#include <cstring>
using namespace std;

// class to store string
// overload '+' to concatanete 2 strings
// overload '-' to reverse string

class Str{

    private :
    char str[100];
    public :
    void getStr(){
        cout<<"\nEnter String :";
        cin.getline(str,50);

    }
    void printStr(){
        cout<<"\nString :";cout<<str;
    }
    Str operator + (Str &s){
        int l1 = strlen(s.str);

        int l2 = strlen(str);
        cout<<l1<<"  "<<l2;

        for(int i=0;i<l2;i++){
            str[l1+i] = s.str[i];
            cout<<"i ="<<i<<"  "<<l1+i<<endl;
        }
        str[l1+l2]='\0';
        printStr();

    }
    Str operator - (){

        int len = strlen(str);
        for(int i =0;i<len/2;i++){

            char temp = str[i];
            str[i] = str[len-1-i];
            str[len-1-i] = temp;
        }
        printStr();
        //return s;
    }

};
int main(){

    Str s1,s2;
    s1.getStr();
    s1.printStr();

    s2.getStr();
    s2.printStr();

    s2 = s1+s2;
    //s2.printStr();
    -s1;






}

/*

class Str{

    private :
    string str;
    public :
    void getStr(){
        cout<<"Enter String :";cin>>str;
    }
    void printStr(){
        cout<<"String :";cout<<str;
    }
    Str operator + (Str &s){
        s.str = str+s.str;
        return s;
    }

};
int main(){

    Str s1,s2;
    s1.getStr();
    s1.printStr();

    s2.getStr();
    s2.printStr();

    s1 = s1+s2;
    s2.printStr();


}

*/