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

void outputData(const mahasigma* mhs) {
    cout<<"Nama\t: "<< mhs->nama<<endl;
    cout<<"NIM\t: "<< mhs->nim<<endl;
    cout<<"Kelas\t: "<< mhs->kelas<<endl;
    cout<<"Prodi\t: "<< mhs->prodi<<endl;
    cout<<"Jurusan\t: "<< mhs->jurusan<<endl;
    cout<<"IPK\t: "<< mhs->ipk<<endl;
}


int main() {
    mahasigma rifqi;
    rifqi.nama="Muhammad Rifqi Fathoni";
    rifqi.nim="C030324042";
    rifqi.kelas="B";
    rifqi.prodi="Teknik Informatika";
    rifqi.jurusan="Elektro";
    rifqi.ipk=3.75;

    outputData(&rifqi);
    return 0;
}
