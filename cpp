#include<iostream>
#include<cstring>
#include <list> 
#include <iterator> 
using namespace std;
class Product{
    private:
    int id;
    char name[15];
    char producer[15];
    char date[15];
    double price;
    int amount;
    public:
    void printInformation(){
        cout<<id<<name<<producer<<date<<price<<amount;
    }
    Product(int id,char* name,char* producer,char* date,double price,int amount){
        this->id=id;
        strcpy(this->name,name);
        strcpy(this->producer,producer);
        strcpy(this->date,date);
        this->price=price;
        this->amount=amount;
    }
    void setId(int id){
        this->id=id;
    }
    void setName(string name){
       strcpy(this->name,name);
    }
    void setProducer(string name){
      strcpy(this->producer,producer);
    }
    void setDate(string name){
     strcpy(this->date,date);
    }
    void setPrice(double price){
        this->price=price;
    }
    void setAmount(int amount){
        this->amount=amount;
    }
    int getId(){
      return this->id; 
    }
    char* getName(){
       return this->name;
    }
};
void showMenus(){
    cout<<"########系统菜单###########\n"<<endl;
    cout<<"      1.商品入库           "<<endl;
    cout<<"      2.商品出库           "<<endl;
    cout<<"      3.删除商品           "<<endl;
    cout<<"      4.修改商品           "<<endl;
    cout<<"      5.查询商品           "<<endl;
    cout<<"      6.浏览商品           "<<endl;
    cout<<"      7.商品统计           "<<endl;
    cout<<"      8.商品排序           "<<endl;
}
void inputProduct(){
    int id;
    char name[15];
    char producer[15];
    char date[15];
    double price;
    int amount;
    cout<<"请输入商品id:"<<endl;
    cin>>id;
    cout<<"请输入商品名称:"<<endl;
    cin>>name;
    cout<<"请输入商品生产商:"<<endl;
    cin>>producer;
    cout<<"请输入商品生产日期"<<endl;
    cin>>date;
    cout<<"请输入商品价格"<<endl;
    cin>>price;
    cout<<"请输入商品数量"<<endl;
    cin>>amount;
    Product product(id,name,producer,date,price,amount);
    product.printInformation();
}
int main(){
    while(true){
    int num;
    showMenus();
    cin>>num;
    switch(num){
        case 1:{
            inputProduct();
            break;
        }
        case 2:{
         cout<<"fucker!"<<endl;
         break;
        }
        default:{
          
        }
    }
    }
    return 0;
}
