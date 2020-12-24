#include<iostream>
#include<cstring>
using namespace std;
class Person{
    public:
      void setAge(int);
      void setHeight(int);
      void printInformation();
      void setName(string);
      Person(int,int);
    private:
      int age;
      int height;
      char name[20];
};
Person::Person(int age,int height){
    this->age=age;
    this->height=height;
}
void Person::setName(string name){
    strcpy(this->name,name.c_str());
}
void Person::setAge(int age){
    this->age=age;
}
void Person::setHeight(int height){
    this->height=height;
}
void Person::printInformation(){
    cout<<age<<height<<name;
}
int main(){
    Person person(1,2);
    person.setName("hujkc123");
    person.printInformation();
    person.setAge(3);
    person.setHeight(5);
    person.printInformation();
    return 0;
}
