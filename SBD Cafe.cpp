#include <iostream>
using namespace std;

int pilihan,i,j;
char verifikasimember, keinginan;
string IDpelanggan, PWDpelanggan, namanonmember, kerjanonmember, ID;
bool cek = false;

struct Member {
    string nama, id, password1, password2, pass, kerja, nokartu;
};
Member M[100];

struct MenuMinuman {
    string nama;
    int kategori;
    float harga;
};
MenuMinuman MM[7];

void EntryMember(){

M[0].nama="Muhammad Umar F.";       M[0].id="omar";         M[0].pass="umr012";     M[0].kerja="Pelajar SMA";   M[0].nokartu="P13415012";
M[1].nama="Afiyah Amaturrahman D."; M[1].id="ketchapp";     M[1].pass="kch035";     M[1].kerja="Pelajar SMA";   M[1].nokartu="P13415035";
M[2].nama="Dwita Assyifa Meihusna"; M[2].id="syifster";     M[2].pass="syf053";     M[2].kerja="Pelajar SMA";   M[2].nokartu="P13415053";
M[3].nama="Nindya Putri Fadillah";  M[3].id="nindi182";     M[3].pass="ndy066";     M[3].kerja="Pelajar SMA";   M[3].nokartu="P13415066";
M[4].nama="Stella Mulia";           M[4].id="stellmul";     M[4].pass="stl069";     M[4].kerja="Pelajar SMA";   M[4].nokartu="P13415069";
M[5].nama="Lintang Dewani P.";      M[5].id="lintangd";     M[5].pass="ltg079";     M[5].kerja="Mahasiswa";     M[5].nokartu="M13415079";
M[6].nama="Kiendl Valavani Setio";  M[6].id="kiendls";      M[6].pass="Mkdl093";    M[6].kerja="Mahasiswa";     M[6].nokartu="M13415093";
M[7].nama="Akhmad Fahri";           M[7].id="habibi";       M[7].pass="fhr103";     M[7].kerja="Mahasiswa";     M[7].nokartu="M13415103";
M[8].nama="Hana Widiapsari N.";     M[8].id="hanaaa";       M[8].pass="hna021";     M[8].kerja="Mahasiswa";     M[8].nokartu="M13415021";
M[9].nama="Naufal Muhammad";        M[9].id="neonaufal";    M[9].pass="nfl023";     M[9].kerja="Pegawai";       M[9].nokartu="-";
M[10].nama="Muhammad Raditya D.";   M[10].id="snorlaxdit";  M[10].pass="rdt028";    M[10].kerja="Pegawai";      M[10].nokartu="-";
M[11].nama="A. Syauqi Mirza";       M[11].id="asyauqi";     M[11].pass="mrz032";    M[11].kerja="Pegawai";      M[11].nokartu="-";
M[12].nama="Fawziah Ghina";         M[12].id="ghinanuna";   M[12].pass="ghn033";    M[12].kerja="Pegawai";      M[12].nokartu="-";
M[13].nama="Aryadilla Rivaldi P.";  M[13].id="aruyea";      M[13].pass="ary034";    M[13].kerja="Pegawai";      M[13].nokartu="-";

}

void Pesan () {
}
void Member (){
    cout << "Apakah Anda member?(Y/N)";
    cin >> verifikasimember;
    if (verifikasimember == 'y' || verifikasimember == 'Y')
    {
        do{
            cout << "Masukkan ID Anda : ";
            cin >> IDpelanggan;
            i=0;
            while ((i<100)&&(cek == false))
            {
                if (IDpelanggan == M[i].id)
                {
                cek = true;
                }
                else i++;
            }
            if (cek == false) cout << "ID yang dimasukkan salah";
        }while (cek == false);

        cek = false;

        do {
            cout << "Masukkan password Anda : ";
            cin >> PWDpelanggan;
            if (M[i].pass == PWDpelanggan)
            {
                Pesan(); cek = true;
            }
            else {cout << "Password tidak tepat" << endl;}
        } while ( cek == false );
    }

    else if (verifikasimember == 'n' || verifikasimember == 'N')
    {
        cout << "Apakah ingin menjadi member?(Y/N)";
        cin >> keinginan;
        if (keinginan == 'Y' || keinginan == 'y')
        {
            for(i=0; i<100; i++)
            {
                if (M[i].nama=="")
                {
                    cout << "Masukkan nama Anda : ";
                    cin >> M[i].nama;
                    cout << "Masukkan ID yang Anda inginkan : ";
                    cin >> M[i].id;
                    do
                    {
                        cout << "Masukkan ID yang Anda inginkan : ";
                        cin >> ID;
                        j=0;
                        cek=false;
                        while (j<100||cek==false)
                        {
                            if (ID == M[j].id)
                            {
                                cout << "ID tersebut sudah digunakan.";
                                cek=true;
                            }
                            else j++;
                        }
                    } while (cek==true);
                    M[i].id=ID;


                    do {
                        cout << "Masukkan password Anda : ";
                        cin >> M[i].password1;
                        cout << "Masukkan kembali password Anda : ";
                        cin >> M[i].password2;

                        if (M[i].password1 != M[i].password2)
                        {
                            cout << "Password Anda tidak cocok." <<endl;
                        }
                    } while (M[i].password1 != M[i].password2);

                    do{
                         cout << "Masukkan jenis pekerjaan Anda : 1. pelajar 2. mahasiswa 3. pegawai 4. lainnya";
                         cin >> M[i].kerja;

                        if ( M[i].kerja == "1" || "2")
                        {
                            cout << "Masukkan nomor kartu pelajar/mahasiswa Anda : ";
                            cin >> M[i].nokartu;
                        }
                        else if ( M[i].kerja != "1" || "2" || "3" || "4") {
                            cout << "Input yang dimasukan salah, silahkan input kembali" << endl;
                        }
                     } while ( M[i].kerja != "1" || "2" || "3" || "4");
                }
                else i++;
            }

        }
        if (keinginan == 'N' || keinginan == 'n')
        {
            cout << "Masukkan nama Anda : ";
            cin >> namanonmember;
            cout << "Masukkan pekerjaan Anda : ";
            cin >> kerjanonmember;
        }

    }
}

void EntryMenu(){
MM[0].nama = "Toraja";                  MM[0].kategori = 1; MM[0].harga = 14.000;
MM[1].nama = "Mandailing";              MM[1].kategori = 1; MM[1].harga = 14.000;
MM[2].nama = "Jawa";                    MM[2].kategori = 1; MM[2].harga = 13.000;
MM[3].nama = "Gayo";                    MM[3].kategori = 1; MM[3].harga = 15.000;
MM[4].nama = "Caffe Latte";             MM[4].kategori = 2; MM[4].harga = 20.000;
MM[5].nama = "Cappuccino Latte";        MM[5].kategori = 2; MM[5].harga = 20.000;
MM[6].nama = "Choco Hazelnut Latte";    MM[6].kategori = 2; MM[6].harga = 22.000;
}

void Manajemen (){
    cout << "mti";
}

int main (){
    EntryMember();
    EntryMenu();
    do {
        cout << "Selamat datang di SBD Cafe." << endl;
        cout << "Pilih menu berikut : " << endl;
        cout << "1. Menu Pelanggan" << endl;
        cout << "2. Menu Manajemen" << endl;
        cout << "3. Keluar" << endl;
        cout << "Masukkan piliihan Anda : ";
        cin >> pilihan;
        if (pilihan == 1){
            Member();
        }
        if (pilihan == 2){
            Manajemen();
        }
        if (pilihan == 3){
            return 0;
        }
    }   while (pilihan!=3);
}
