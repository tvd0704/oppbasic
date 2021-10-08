#include<iostream>
#include<vector>
#include<fstream>
#include <typeinfo>
#include <cstdlib>
#include <ctime>
#include<stdio.h>
#include <stdbool.h>
using namespace std;

class SinhVien{
private:
string Id;
string Gender;
string Birthday;
public:

//nhap va xuat thong tin
void Nhap();
void Xuat();

//xuat thong tin
void XuatFile(ostream& os);

////constructor and destructor
SinhVien();
SinhVien(string Id,string Birthday,string Gender);
 
 //getter
string GetId(){return this->Id;}
string GetBirthday(){return this->Birthday;}
string GetGender(){return this->Gender;}

//setter
void SetId(string ID);
void SetBirthday(string BIrthday);
void SetGender(string GEnder);
};

//student definiton
//constructor and destructor
SinhVien::SinhVien(){
this->SetId("");
this->SetBirthday("");
this->SetGender("");
}
SinhVien::SinhVien(string Id,string Birthday,string Gender){
this->SetId(Id);
this->SetBirthday(Birthday);
this->SetGender(Gender);
}

//setter
void SinhVien::SetId(string ID){
     static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < 5; ++i) {
        ID+= alphanum[rand() % (sizeof(alphanum) - 1)];
    }
this->Id=ID;
}

void SinhVien::SetBirthday(string BIthday){
    this->Birthday=BIthday;}

void SinhVien::SetGender(string GEnder){
    this->Gender=GEnder;
    }

//





//nhap thong tin sinh vien
void SinhVien::Nhap(){
    string GEnder;
cout<<"nhap ID:"<<GetId();
cout<<"\nnhap ngay sinh:";
getline(cin,this->Birthday);
cout<<"nhap gioi tinh:";
SetId(GEnder);

}


//xuat thong tin sinh vien
void SinhVien::Xuat(){
cout<<"\nid:"<<this->Id;
cout<<"\nbirthday:"<<Birthday;
cout<<"\ngioitinh:";
getline(cin,this->Gender);
}
void SinhVien::XuatFile(ostream& os){
os<<"\nid:"<<this->Id;
os<<"\nbirthday:"<<Birthday;
os<<"\ngioitinh:"<<Gender<<endl;

}
void Menu(SinhVien ds[],int m){
int chon;

do{

system("cls");
cout<<"0.thoat\n\n";
cout<<"1.nhap danh sach\n\n";
cout<<"2.in danh sach ra man hinh\n\n";
cout<<"3.in danh sach ra file\n\n";
cout<<"moi ban chon menu:";
cin>>chon;
cin.ignore();
switch (chon)
{
case 0:
    break;
case 1:
system("cls");
cout<<"nhap so luong sinh vien muon nhap thong tin [3 40]:";
cin>>m;
cin.ignore();
while(m>40||m<3){
    system("cls");
    cout<<"nhap lai so luong sinh vien [3 40]:";
    cin>>m;
cin.ignore();
}
for(int i=0;i<m;i++){

SinhVien SV;
SV.Nhap();
ds[i]=SV;
}
break;
case 2:
cout<<"\n\n\t\t====thong tin sinh vien===========";

for(int i=0;i<m;i++){
cout<<"\n\nthong tin nhan vien thu "<<i+1;
ds[i].Xuat();
}
system("pause");
break;
case 3:
{
ofstream outfile;
outfile.open("danhsach.txt");
for(int i=0;i<m;i++){
    ds[i].XuatFile(outfile);
}
outfile.close();
break;
}
default:
break;
}}while (chon!=0);

}



int main(){


SinhVien Ds[50];
int m;

Menu(Ds,m);

    return 0;
}