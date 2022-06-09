#include <iostream>
using namespace std;
class Studi{
private:
string a[3][3];
string buku[9];
string hasil;
string cari;

public:
  void input(){
    for(int i=0; i<3; i++){
      cout << " Masukkan Kode Buku :  "<<i+1<<": ";
      cin >> a[i][0];
    }
    cout<<endl;
    for(int i=0; i<3; i++){
      cout << " Masukkan Jenis Buku : "<<i+1<<": ";
      cin >> a[i][1];
    }
    cout<<endl;
    for (int i=0; i<3; i++){
      cout << " Masukkan Judul Buku : "<<i+1<<": ";
      cin >> a[i][2];
    }
    cout<<endl;
  }

  void proses(){
    
    cout << "=======================================================\n";
    cout << "KODE BUKU\t\t\tJENIS BUKU\t\t\tJUDUL BUKU\n";
    cout << "========================================================\n";
    for(int i=0; i<3; i++){
      for(int j=0; j<3; j++){
      cout << a[i][j] << "\t\t\t\t";
    }
      cout<<endl;
    }
    cout <<"\n==========================================\n";
    
    cout<<"Masukkan buku yang ingin dicari  : ";cin>>cari;
    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        if(cari == a[i][1]){
          cout<<a[i][j]<<endl;
        }
      }
    }
  }
  void output(){

    cout<< "\n===================hasil pencarian buku===================" ;
    cout<<"\nKODE BUKU   : " <<buku;
    cout<<"\nJENIS BUKU  : " <<cari;
    cout<<"\nJUDUL BUKU  : " <<hasil;
  cout<<"\n============================================\n";
  }
};
int main(){
  Studi studi;
  studi.input();
  studi.proses();
  studi.output();
  return 0;
}
