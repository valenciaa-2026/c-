#include <iostream>
using namespace std;
int main() {
    string nama;
    string sekolah;
    string ulang;
    do{
    cout<<"masukkan nama: " <<endl;
    cin>>nama;
    cout<<"masukkan nama sekolah: " <<endl;
    cin>>sekolah;
    cout<<"namamu adalah: ";
    cout<<nama <<endl;
    cout<<"sekolahmu di: ";
    cout<<sekolah <<endl;
        cout<<"apakah anda mau mengulang? tekan y atau Y";
        cin>>ulang;
    }
    while (ulang=="y"|| ulang=="Y");
    system("pause");
    return 0;
}
