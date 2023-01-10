#include<iostream>
#include<string>

using namespace std;

/*
Admin Section :
    - Add item
    - Delete item
    - Add Stock
    - See Transactions
Customer Section :
    - See items
    - Add to Cart
    - See Bill and Checkout;
*/

class Supermarket{

/*
    - displayStock() xx
    - addItem() xx
    - deleteItem(itemIndex) xx
    - addStock(itemIndex,itemQuantity) xx
    - seeTrxs()
    -----------------------------------
    - displayItems() xx
    - addToCart(itemIndex)
    - displayCart()
    - checkOut()
*/

    public:

    // string array to store all items names in stock/racks
    string itemsInRackArr[50] = {"Poyit Adutha Thinkalazcha Vaaa","Putt Podi - Premium Blend","Eli Petti - Teakwood Edition","Uppil Itta Manga - Dufaai Edition","Upp - SaltBae Edition"};
    // array to store quantities of items
    int itemQuantityArr[50] = {0,12,4,7,6}; 
    // array to store items price
    float itemPriceArr[50] = {0.00,130.34,234.67,56.44,88.00}; 

    // count for total items present in rack
    int totalItemsinRack = 4;
    // count of total transactions done in program runtime
    int totalTransactions = 0;
    // total money received by supermarket
    float totalMoneyReceived =0.00;

    // array to contin index of items added to cart
    int cartArr[50];
    // count of number of items in cart
    int cartCount = 0;
    // total price of items in cart
    float cartTotalPrice=0.00;

    // -------- member functions for customer section ---------

    // function to reset the total cart count and total cart price 
    void resetCart(){

        cartCount=0;
        cartTotalPrice =0.00;
        

    }
    // function to checkout , confirm purchase
    void checkOut(){
        char type;
        displayCart();    
        //float cartTotalPrice;    
        do{cout<<"Confirm Purchase? [y/n] : ";cin>>type;}while(type!='y'&&type!='n');
        if(type=='y'){
            cout<<"Purchased Succesfullly\nSpend Rs."<<cartTotalPrice<<"\n\tResetting Cart...."<<endl;
            totalTransactions++;
            totalMoneyReceived = totalMoneyReceived + cartTotalPrice;
            resetCart();
        }else{
            cout<<"Purchase Aborted\tContinue Shopping"<<endl;
        }


    }
    // function to add an item to cart, add index of item to cart array
    void addToCart(){
        int itemIndex;
        cout<<"\tPick Item : ";cin>>itemIndex;

        cartArr[cartCount] = itemIndex;
        cartTotalPrice = cartTotalPrice + itemPriceArr[itemIndex];
        cout<<"Added "<<itemsInRackArr[itemIndex]<<" to Cart Successfully\nCart Value : "<<cartTotalPrice<<"/- Rupees"<<endl;
        cartCount++;
    }
    // functions to see items added to cart
    void displayCart(){
        cout<<"\n\t------Your Cart------"<<endl;
        for(int i=0;i<cartCount;i++){
            cout<<"\t"<<i+1<<") "<<itemsInRackArr[cartArr[i]]<<"\t- ("<<itemPriceArr[cartArr[i]]<<") Rupees"<<endl;
        }

        cout<<"Cart Value : "<<cartTotalPrice<<"/- Rupees"<<endl;
    }
    // functions to display items to customer
    void displayItems(){
        cout<<endl<<endl;
        for(int i=1;i<=totalItemsinRack;i++){
            if(itemsInRackArr[i]!=" " && itemQuantityArr[i]!=0){
                cout<<"\t"<<i<<") "<<itemsInRackArr[i]<<"\tPrice:"<<itemPriceArr[i]<<endl;
            }
        }
    }
    // function to display details of a single item
    void printItemDetails(int index){

        cout<<"\t"<<index<<") "<<itemsInRackArr[index]<<"\t- ("<<itemQuantityArr[index]<<") Nos, Price:"<<itemPriceArr[index]<<endl;

    }

    // -------- member functions for admin section ---------

    // function to display items in stock to admin
    void displayStock(){
        cout<<"\nCurrent Stock Status :\n\tTotal Items in Rack : "<<totalItemsinRack<<"\n\t-------------------------------------\n"<<endl;
        for(int i=1;i<=totalItemsinRack;i++){
            if(itemsInRackArr[i]!=" " && itemQuantityArr[i]!=0){
                cout<<"\t"<<i<<") "<<itemsInRackArr[i]<<"\t- ("<<itemQuantityArr[i]<<") Nos, Rs."<<itemPriceArr[i]<<endl;
            }
        }
    }
    // function to add new items to stock
    void addItem(){
        cout<<"\nCurrent Stock Status :\n\tTotal Items in Rack : "<<totalItemsinRack<<"\n\t-------------------------------------\n"<<endl;
        
        int index = totalItemsinRack + 1;
        cout<<"Enter Item Details :\n";
        cout<<"\tEnter Item Name : ";
        cin>>itemsInRackArr[index];
        cout<<"\tEnter Quantity : ";
        cin>>itemQuantityArr[index];
        cout<<"\tEnter Price : ";
        cin>>itemPriceArr[index];

        totalItemsinRack++;
        printItemDetails(totalItemsinRack);

    }
    // function to delete item from stock
    void deleteItem(){
        displayStock();
        int index;
        char type;
        cout<<"Enter Index of Item to Delete : ";cin>>index;
        printItemDetails(index);
        do{cout<<"Confirm Deletion? [y/n] : ";cin>>type;}while(type!='y'&&type!='n');
        if(type=='y'){
            totalItemsinRack--;
            itemsInRackArr[index] = ' ';
            itemQuantityArr[index] = 0;
            cout<<"Deleted item Succesfullly"<<endl;
        }else{
            cout<<"Deletion Aborted"<<endl;
        }
    }
    // function to add stock of an item
    void addStock(){
        displayStock();
        int index;
        char type;
        int quantity;
        cout<<"Enter Index of Item to Add Stock : ";cin>>index;
        cout<<"Enter Stock Quantity : ";cin>>quantity;

        printItemDetails(index);
        int currentQuantity = itemQuantityArr[index];

        do{cout<<"Confirm Adding Stock? [y/n] : ";cin>>type;}while(type!='y'&&type!='n');
        if(type=='y'){
            itemQuantityArr[index] = currentQuantity + quantity;
            cout<<"Added Stocks Succesfullly"<<endl;
        }else{
            cout<<"Aborted"<<endl;
        }
    }
    // function to see total transactions done in program runtime
    void seeTrxs(){

        cout<<"Succesfullly Completed "<<totalTransactions<<" Transactions and your Mothalali made Rs."<<totalMoneyReceived<<endl;


    }
};

int main(){
    int choice;
    Supermarket sm;
    do{
        cout<<"\t\n\t--------Main Menu--------";
        cout<<"\n\n\t01) Print Items in Rack\t 02) Add Item\t 03) Delete Item\t 04) Add Stock\t10) See Total Transactions\n\t-----------------------\n\t05) Display items to Buy\t06) Add to Cart\t 07) View Cart\t08) Checkout\t09) Exit Supermarket\n";

        cout << "Enter your choice: ";cin>>choice;

        switch(choice){
            
            case 1:
                sm.displayStock();break;                
            case 2:
                sm.addItem();break;
            case 3:
                sm.deleteItem();break;
            case 4:
                sm.addStock();break;
            case 5:
                sm.displayItems();break;
            case 6:
                sm.addToCart();break;
            case 7:
                sm.displayCart();break;
            case 8:
                sm.checkOut();break;
            case 10:
                sm.seeTrxs();break;
            case 9:
                cout<<"Thanks for Visiting, Next Time Buy Something\n";break;
            default :
                cout<<"Enter right choice"<<endl;break;
        }
    }while(choice!=9);
}
