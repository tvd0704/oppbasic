#include<iostream>
using namespace std;
class DogCage{
private:
float KhoiLuongMax;
float KhoiLuongChuong;
public:
DogCage();
DogCage(float KhoiLuongMax,float KhoiLuongChuong);
 void AddDog();
void RemoveDog();
void ThrowSquirrel();
float Gettotalweight();
float GetKhoiLuongMax(){return this->KhoiLuongMax;}
float GetKhoiLuongChuong(){return this->KhoiLuongChuong;}
void  SetKhoiLuongMax(float khoiluongmax);
void SetKhoiLuongChuong(float khoiluongchuong);
~DogCage();
};

DogCage::DogCage(){

SetKhoiLuongMax(0.0);
SetKhoiLuongChuong(0.0);
}
DogCage::DogCage(float khoiluongmax,float khoiluongchuong){

SetKhoiLuongMax(khoiluongmax);
SetKhoiLuongChuong(khoiluongchuong);
}

void DogCage::SetKhoiLuongChuong(float khoiluongchuong){

     this->KhoiLuongChuong=khoiluongchuong;
}

void DogCage::SetKhoiLuongMax(float khoiluongmax){
 this->KhoiLuongMax=khoiluongmax;
}

void DogCage::AddDog(){
    float AddCho;
cout<<"them 1 chu cho vao chuong";
cin>>AddCho;
if(KhoiLuongChuong+AddCho>KhoiLuongMax){

    cout<<"vuot qua khoi luong cho phep";

}
else{
cout<<"1 chu cho da duoc them vao chuong";
KhoiLuongChuong=KhoiLuongChuong+AddCho;
}
}
void DogCage::RemoveDog(){
float MCho;
cout<<"tha 1 chu cho ra khoi chuong";
cout<<"\nkhoi luong chu cho tha:";
cin>>MCho;
KhoiLuongChuong=KhoiLuongChuong-MCho;
}

void DogCage::ThrowSquirrel()
{
cout<<"cac chu cho deu sua";
cout<<"\n cho soi se vua sua vua hu";

}

float DogCage::Gettotalweight(){

    return KhoiLuongChuong;
}



class Husky:public DogCage{
public:
void sua();
};
void Husky::sua(){

    cout<<"woofwoof";
}





int main(){




    return 0;
}