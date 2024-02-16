#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
char nama[20];
int nilai_UTS, nilai_UAS;

cout<<"Menentukan lulus tidaknya mahasiswa\n";
cout<<"-----------------------------------\n"<<endl<<endl;
cout<<"Masukkan data anda dengan benar"<<endl<<endl;

cout<<"Nama				: "; gets(nama);
cout<<"Nilai UTS			: ";cin>>nilai_UTS;
cout<<"Nilai UAS			: ";cin>>nilai_UAS;

if(nilai_UTS>=60)
{
    if(nilai_UAS>=70)
       {cout<<"\n-----Anda Lulus-----"<<endl;}
   else
       cout<<"\nAnda Tidak Lulus dan harus mengikuti ujian susulan, "<< nama <<endl;
}
else if(nilai_UTS<60)
{
    if(nilai_UAS<60)
       {cout<<"\n\nAnda tidak boleh mengikuti ujian susulan"<<endl;
	    cout<<"Selamat mengulang di semester selanjutnya, "<< nama <<endl;
		}
}
       
system("PAUSE");
return 0;
} 
