#include <iostream>
using namespace std;

int main(){
struct mahasigma{
    string nama;
    string nim;
    string kelas;
    string prodi;
    string jurusan;
    float ipk;
};
    mahasigma rifqi;
    rifqi.nama="Muhammad Rifqi Fathoni";
    rifqi.nim="C030324042";
    rifqi.kelas="B";
    rifqi.prodi="Teknik Informatika";
    rifqi.jurusan="Elektro";
    rifqi.ipk=3.75;

    system("cls");
    cout<<"nama: "<<rifqi.nama<<"\n";
    cout<<"nim: "<<rifqi.nim<<"\n";
    cout<<"kelas: "<<rifqi.kelas<<"\n";
    cout<<"prodi: "<<rifqi.prodi<<"\n";
    cout<<"jurusan: "<<rifqi.jurusan<<"\n";
    cout<<"ipk: "<<rifqi.ipk<<"\n";
}