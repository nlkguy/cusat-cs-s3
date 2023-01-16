#include <iostream>
#include <string>

using namespace std;

class Employee {
    protected:
    string name;
    int code;
    double rate;

    public:
    Employee(string name, int code, double rate) {
        this->name = name;
        this->code = code;
        this->rate = rate;
    }
    void pay() {    cout<<"Paying "<<this->name<<"(emp:"<<code<<") with pay rate of Rs:"<<rate;
}
};

class Manager : public Employee {
    private:
    bool salaried;
    int hours=100;

    public:
    Manager(string name, int code, double rate, bool salaried) : Employee(name, code, rate) {
        this->salaried = salaried;
    }

    void pay() {
        if (salaried){
            cout<<"Paying "<<this->name<<"(emp:"<<code<<")(rate:"<<rate<<") with Rs:"<<rate*12;
        }else {
            //cout<<"Hours :";cin>>hours;
            cout<<"Paying "<<this->name<<"(emp:"<<code<<")(rate:"<<rate<<") with Rs:"<<rate*hours;
        }
    }
};

class Supervisor : public Employee {
    private:
    string dept;
    public:
    Supervisor(string name, int code, double rate, string dept) : Employee(name, code, rate) {
        this->dept = dept;
    }
    void pay() {  
        cout<<"Paying "<<this->name<<"(emp:"<<code<<")(rate:"<<rate<<") with Rs:"<<rate*12;
    }
};

int main() {
    Employee e1("Mohen LOL",13, 15);
    Manager m1("Ma'am ooty", 69, 25,true);
    Supervisor s1("Sir yes Gophee", 420, 45, "H R");
    cout << "\nEmployee:\t";e1.pay();
    cout << "\nManager:\t";m1.pay();
    cout << "\nSupervisor:\t";s1.pay();cout<<endl;
    return 0;
}
