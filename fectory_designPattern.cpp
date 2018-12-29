#include <iostream>

using namespace std;

enum PETs{
DOG=0,
CAT,
COW,
PIG,
DONKEY,
HORSE,
LOL=100
};

class pet{
    public:
virtual void petsound()=0;

};

class dog:public pet{
public:
    void petsound(){
     cout <<"WOWOWWOW"<<endl;
    }

};

class cat :public pet{
public:
  void petsound(){
  cout <<"MEEEEEEEW"<<endl;

  }

};

class cow:public pet{
public:
    void petsound(){
    cout <<"HOOOOOOOOOOOO"<<endl;
    }

};
class emptyClass:public pet{
void petsound(){
    cout <<"LOLOLOLLOLOLOLOLOLOLOLOLOLO"<<endl;
    }

};

class petType{
public:
    pet *pe;
    pet &getPetType(int input){
       if(input==0){
        pe=new dog();
        return *pe;
       }else if(input ==1){
           pe =new cat();
         return *pe;
       }else if(input ==2){
          pe= new cow();
         return *pe;
       }else{
        pe= new emptyClass();
        return *pe;
       }
    }
};

int main(){
petType *po= new petType();
pet *pi=&(po->getPetType(1));
pi->petsound();
cout<<"LOL DOne"<<endl;
return 0;
}
