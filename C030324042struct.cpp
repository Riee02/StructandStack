#include <iostream>
using namespace std;


struct mahasigma{
    string nama;
    string nim;
    string kelas;
    string prodi;
    string jurusan;
    float ipk;
};
int main(){
    mahasigma rifqi;
    rifqi.nama="Muhammad Rifqi Fathoni";
    rifqi.nim="C030324042";
    rifqi.kelas="B";
    rifqi.prodi="Teknik Informatika";
    rifqi.jurusan="Elektro";
    rifqi.ipk=3.75;

    string *nama=&rifqi.nama;
    string *nim=&rifqi.nim;
    string *kelas=&rifqi.kelas;
    string *prodi=&rifqi.prodi;
    string *jurusan=&rifqi.jurusan;
    float *ipk=&rifqi.ipk;

    system("cls");
    cout<<"nama\t: "<<*nama<<"\n";
    cout<<"nim\t: "<<*nim<<"\n";
    cout<<"kelas\t: "<<*kelas<<"\n";
    cout<<"prodi\t: "<<*prodi<<"\n";
    cout<<"jurusan\t: "<<*jurusan<<"\n";
    cout<<"ipk\t: "<<*ipk<<"\n";
}
