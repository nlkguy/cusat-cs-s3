#include<iostream>
#include<string>
using namespace std;
class Item{
    public:
    int code,quantity;
    string name;
    float price;
    void getData(){
        cout<<"Enter code,name,price,quantity :";cin>>code>>name>>price>>quantity;
    }
    void printData(){
        cout<<"Code:"<<code<<"\tName:"<<name<<"\tPrice:"<<price<<"\tQuantity:"<<quantity<<endl;
    }
};
void findOrder(Item *objArr,int totalCount){
    bool ascending = true;
    bool descending = true;
    for (int i = 0; i < totalCount - 1; i++) {
        if (objArr[i].code > objArr[i+1].code)   
            ascending = false;
        if (objArr[i].code < objArr[i+1].code)   
            descending = false;
    }
    if(ascending){
        cout<<"ascending order";
    }else if(descending) {
        cout<<"descending order";
    }else{
        cout<<"random order";
    }
}
void totalValue(Item *objArr,int totalCount){
    float totalValue;
    for(int i=0;i<totalCount;i++){
        totalValue = totalValue + objArr[i].quantity*objArr[i].price;
    }
    cout<<"Total Stock Value :"<<totalValue<<endl;
}
void printAllItems(Item *objArr,int totalCount){
    for(int i=0;i<totalCount;i++){
        objArr[i].printData();
    }
}
int main(){
    int totalCount = 0,ch;
    Item objArr[10];
    do{
        cout<<"\n1:Add Item\t2:Display Items\t3:Find Order\t4:Total Value\t0:Exit"<<"Choice : ";cin>>ch;
        switch(ch){
            case 1: objArr[totalCount].getData();totalCount++;break;
            case 2: printAllItems(objArr,totalCount);break;
            case 3: findOrder(objArr,totalCount);break;
            case 4: totalValue(objArr,totalCount);break;
            default: cout<<"Enter valid choice !";break;
        }
    }while(ch!=0);
}