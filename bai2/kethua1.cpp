#include<iostream>
using namespace std;

class Dog
{
protected:
string Ten;
int Tuoi;
float ChieuCao;
float CanNang;
public:
//constructor and destructor
Dog();
Dog(string Ten,int Tuoi,float ChieuCao,float CanNang);
virtual ~Dog();

//getter
string GetTen(){return Ten;}
int GetTuoi(){return Tuoi;}
float GetChieuCao(){return ChieuCao;}
float GetCanNang(){return CanNang;}

//setter
void SetTen(string ten);
void SetTuoi(int tuoi);
void SetChieuCao(float chieucao);
void SetCanNang(float cangnang);
 void Sua();

};
//Dog definition
//Constructor and destructor

Dog::Dog(){
SetTen("");
SetTuoi(0);
SetChieuCao(0.0);
SetCanNang(0.0);
}

Dog::Dog(string Ten,int Tuoi,float ChieuCao, float CanNang){
SetTen(Ten);
SetTuoi(Tuoi);
SetChieuCao(ChieuCao);
SetCanNang(CanNang);
}
Dog::~Dog(){


}

//setter

void Dog::SetTen(string ten){

    this->Ten=ten;
}
void Dog::SetTuoi(int tuoi){

    this->Tuoi=tuoi;
}
void Dog::SetChieuCao(float chieucao){
this->ChieuCao=chieucao;
}

void Dog::SetCanNang(float cannang){
    this->CanNang=cannang;
}

//pitbull
class Pitbull:public Dog
{
public:
void Sua();

};

void Pitbull::Sua(){

cout<<"gugu"<<endl;
}

//begie
class Begie:public Dog
{
public:
void Sua();
};
void Begie::Sua(){
    cout<<"gaugau";
}

//mastiff
class Mastiff:public Dog
{
public:
void Sua();
  void Hu();

};

//alaskan
class Alaskan:public Mastiff 
{
void Hu();

};
void Alaskan::Hu(){
    cout<<"woof woof";
}

//husky
class Husky:public Mastiff 
{
    public:
void Hu();

};
void Husky::Hu(){
    cout<<"huhu";
}








int main(){


Begie bg;
bg.Sua();
    return 0;
}