#include <iostream>
using namespace std;

struct karyawan{
  string departemen;
  string id;
  string nama; 
};

class data{ 
  private :
    karyawan krywn[15];
    karyawan krn[15][15];

    int n, jad, k, l;

  public :
    void input(){
      cout<<"\t\t\t+-------------------------------------------------+"<<endl;
      cout<<"\t\t\t|\t\tData karyawan pelatihan softskill         |"<<endl;
      cout<<"\t\t\t+-------------------------------------------------+"<<endl;
      cout<<"\nMasukkan jumlah data : "; cin>>n;
      for(int i = 0; i < n; i++){
        cout<<"\nMasukkan Departemen : ";     
        cin>>krywn[i].departemen;
        cout<<"\nMasukkan id  : ";
	    cin>>krywn[i].id;
        cout<<"\nMasukkan Nama  : "; cin>>krywn[i].nama;
      };
      cout<<"\nSebelum di konversi : "<<endl;
      for (int i=0;i<n;i++){
        cout<<krywn[i].departemen<<" "<<krywn[i].id<<" "<<krywn[i].nama;
      }
       cout<<endl;
    }
  void proses(){
    for(int i = 0; i<n; i++){
      for(int k = 0; k<n; k++){
        for(int l = 0; l<n; l++){
          krn[k][l] = krywn[i];
          i++;
        }
      }
    }
    cout<<"\nSetelah di konversi : "<<endl;
    for(int k = 0; k<n; k++){
        for(int l = 0; l<n; l++){
          cout<<krn[k][l].departemen<<" ";
          cout<< krn[k][l].id <<" ";
          cout<<krn[k][l].nama <<" ";
          cout<<endl;
        }
      }
  }
};

int main() {
  data i;
  i.input();
  i.proses();

  return 0;
  }
