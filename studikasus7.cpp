#include<iostream>
#include<iomanip>
using namespace std;

class nim{
	public:
		void input(){
			cout<<"========================================="<<endl;
			cout<<"          STUDI KASUS ALPRO 7            "<<endl;
			cout<<"========================================="<<endl;
			cout<<"Masukkan Data Mahasiswa : ";
			cin>>n;
			for(int i=0; i<n; i++){
				cout<<"---------------------------------------"<<endl;
				cout<<"Masukkan NIM  "<<i+1<< " : ";
				cin>>id[i];
				cout<<"Masukkan Nama "<<i+1<<" : ";
				cin>>nama[i];
			}
			cout<<"=================================================="<<endl;
		}

		void proses (){
			//fitur sorting
			int n, i, temp;
			for (i=0; i<n; i++){
		        for (int j=i+1; j<n; j++){
		            if (id[i] < id[j]){
		                temp = id[i];
		                id[i] = id[j];
		                id[j] = temp;
            		}
        		}
    		}
	    for (i=0; i<n; i++){
	        cout << id[i] << ", ";
	    }
	}
				
			
	
		void output(){
			cout<<endl;
			cout<<"====================================================="<<endl;
			cout<<"|	NIM	|	 NAMA 	| "<<endl;
			cout<<"====================================================="<<endl;
			for(int i=0; i<n; i++){
				cout<<"	|  ";
				cout<<setiosflags (ios::left)<<setw(20)<<id[i]<<"	";
				cout<<setiosflags(ios::left)<<setw(20)<<nama[i]<<"		"<<endl;
			}
			
			cout<<"======================================================"<<endl;
			cout<<"Masukkan NIM yang ingin dicari : ";
			cin>>cari;
			
			//fitur searching
			int k=0;
			for (int i=0; i<n; i++){
				if(id[i] == cari){
					cout<<"=============================================="<<endl;
					cout<<"|	NIM	|	NAMA	|"<<endl;
					cout<<"=============================================="<<endl;
					cout<<setiosflags(ios::left)<<setw(8)<<id[i]<<"	 ";
					cout<<setiosflags(ios::left)<<setw(12)<<nama[i]<<"	 "<<endl;
					
					cout<<"=============================================="<<endl;
					k++;//k di increment
					break;
				}
			}
			if(k == 0){
				cout<<"NIM Yang Anda Cari TIDAK TERSEDIA!!!! ";
			}
		}
		
		private:
			int n, cari, temp;
			int id[99], stok[99];
			int tukarstok, tukarid;
			string nama[99];
			string tukarnama;
}; 
int main(){
	nim x;
	x.input();
	x.proses();
	x.output();
}

