#include<iostream>
using namespace std;

void garis(int b){
    for(int a=0; a<b; a++){
        cout<<"=";
    }
    cout<<endl;
}

int main(){
    string db, po;
    float jarak;
    int pilih, pilih2, ongkir=0, ongkir2=0, diskon, total2, harga, pcs;
    int pcs_agp=0, pcs_ag=0, pcs_ab=0, pcs_cg=0, pcs_ug=0; 
    int harga_agp=0, harga_ag=0, harga_ab=0, harga_cg=0, harga_ug=0;
    int total=0, agp=21000, ag=17000, ab=25000, cg=20000, ug=19000;
    
    pilih:
    system("cls");
    cout<<"Daftar menu"<<endl;
    cout<<"1. Ayam Geprek\n2. Ayam Goreng\n3. Ayam Bakar"<<endl;
    cout<<"4. Cumi Goreng\n5. Udang Goreng\n6. Pengiriman (pilih ini jika mau checkout)"<<endl;
    cout<<"Silakan pilih : ";
    cin>>pilih;
    
    switch (pilih){
        case 1:
            cout<<"Pcs : ";
            cin>>pcs;
            harga=pcs*agp;
            pcs_agp+=pcs;
            harga_agp+=harga;
            total+=harga_agp;
            goto pilih;
            break;
        case 2:
            cout<<"Pcs : ";
            cin>>pcs;
            harga=pcs*ag;
            pcs_ag+=pcs;
            harga_ag+=harga;
            total+=harga_ag;
            goto pilih;
            break;
        case 3:
            cout<<"Pcs : ";
            cin>>pcs;
            harga=pcs*ab;
            pcs_ab+=pcs;
            harga_ab+=harga;
            total+=harga_ab;
            goto pilih;
            break;
        case 4:
            cout<<"Pcs : ";
            cin>>pcs;
            harga=pcs*cg;
            pcs_cg+=pcs;
            harga_cg+=harga;
            total+=harga_cg;
            goto pilih;
            break;
        case 5:
            cout<<"Pcs : ";
            cin>>pcs;
            harga=pcs*ug;
            pcs_ug+=pcs;
            harga_ug+=harga;
            total+=harga_ug;
            goto pilih;
            break;
        case 6:
            system("cls");
            cout<<"1. Delivery\n2. Ambil sendiri"<<endl;
            cout<<"Silakan pilih : ";
            cin>>pilih;

            total2=total;
            
            switch(pilih){
                case 1:
                    cout<<"Silakan cek maps untuk menegetahui jarak rumah anda ke restoran kami"<<endl;
                    cout<<"Masukkan jarak di sini (Km) : ";
                    cin>>jarak;
                    if(jarak<3){
                        ongkir=15000;
                        ongkir2=ongkir;
                        if(total>25000 && total<50000){
                            ongkir-=3000;
                            po="3000";
                            goto struk;
                        }else if(total>50000 && total<150000){
                            ongkir-=5000;
                            diskon=total*0.15;
                            total-=diskon;
                            db="15%";
                            po="5000";
                            goto struk;
                        }else{
                            ongkir-=8000;
                            diskon=total*0.35;
                            total-=diskon;
                            db="35%";
                            po="8000";
                            goto struk;
                        }
                    }else{
                        ongkir=25000;
                        ongkir2=ongkir;
                        if(total>25000 && total<50000){
                            ongkir-=3000;
                            po="3000";
                            goto struk;
                        }else if(total>50000 && total<150000){
                            ongkir-=5000;
                            diskon=total*0.15;
                            total-=diskon;
                            db="15%";
                            po="5000";
                            goto struk;
                        }else{
                            ongkir-=8000;
                            diskon=total*0.35;
                            total-=diskon;
                            db="35%";
                            po="8000";
                            goto struk;
                        }
                    }
                    break;
                case 2:
                    if(total>50000 && total<150000){                       
                        diskon=total*0.15;
                        total-=diskon;
                        db="15%";
                        po="0";
                        goto struk;
                    }else{  
                        diskon=total*0.35;
                        total-=diskon;
                        db="35%";
                        po="0";
                        goto struk;
                        }                   
                    break;
            }
            break;
        default:
            cout<<"Menu tidak tersedia"<<endl;
            goto pilih;
    }

    struk:
    system("cls");
    garis(30);
    cout<<"Ayam Geprek\tx"<<pcs_agp<<"\tRp. "<<harga_agp<<endl;
    cout<<"Ayam Goreng\tx"<<pcs_ag<<"\tRp. "<<harga_ag<<endl;
    cout<<"Ayam Bayar\tx"<<pcs_ab<<"\tRp. "<<harga_ab<<endl;
    cout<<"Cumi Goreng\tx"<<pcs_cg<<"\tRp. "<<harga_cg<<endl;
    cout<<"Udang Goreng\tx"<<pcs_ug<<"\tRp. "<<harga_ug<<endl;
    garis(30);
    cout<<"Ongkir\t\t\tRp. "<<ongkir2<<endl;
    cout<<"Potongan Ongkir\t\tRp. "<<po<<endl;
    cout<<"Total Belanja\t\tRp. "<<total2<<endl;
    cout<<"Diskon Belanja\t\tRp. "<<db<<endl;
    garis(30);
    cout<<"Total Semuanya\t\tRp. "<<total+ongkir<<endl;
    garis(30);

    return 0;
}