#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

using namespace std;

int totalbayar = 0;
int totalpajak = 0;
int totalharga = 0;
    
    void StrukPembayaran(int bayar, int pajak, int diskon, int pembayaran, int cash, int selisih){

        string nama;
        struct tm *Sys_T;

        time_t Tval;
        Tval = time(NULL);
        Sys_T = localtime(&Tval);
        
        cout << "\n\n  Atas nama siapa? (nama panggilan) : ";
        cin >> nama;
        system("cls");
        cout << "\n =================================================== ";
        cout << "\n|                  APOTEK LYFECARE                  |";
    	cout << "\n|           Jl Sehat Selalu blok LA No 57           |";
        cout << "\n|        Telukjambe Timur, Karawang, 42163          |";
        cout << "\n|                 Telp (021)80707521                |";
        cout << "\n|                                                   |";
        cout << "\n =================================================== ";
        cout << "\n  Tanggal    :  " << Sys_T->tm_mday << "-" << Sys_T->tm_mon+1 << "-" << 1900+Sys_T->tm_year;
        cout << "\n  Jam        :  " << Sys_T->tm_hour << ":" << Sys_T->tm_min << ":" << Sys_T->tm_sec;
        cout << "\n  Nama Tamu  :  " << nama;
        cout << "\n  Kasir      :  Kelompok 1";
        cout << "\n=====================================================";
    	cout << "\n\n\n                           SUB TOTAL  : Rp " << bayar << ",00";
        cout << "\n                           PAJAK      : Rp " << pajak << ",00";
        cout << "\n                           ==========================";
        cout << "\n                           DISKON     : Rp " << diskon << ",00";
        cout << "\n                           ==========================";
        cout << "\n                           TOTAL      : Rp " << pembayaran << ",00";
        cout << "\n                           ==========================";
        cout << "\n                           CASH       : Rp " << cash << ",00";
        cout << "\n                           KEMBALI    : Rp " << selisih << ",00";
        cout << "\n=====================================================";
        cout << "\n                    TERIMA KASIH                     ";
        cout << "\n                 SEMOGA LEKAS SEMBUH                 ";
        cout <<  "\n=====================================================";
        
        if(pembayaran > 750000){
        	cout << "\n\n\n  SELAMAT!!!";
			cout << "\n  KAMU MENDAPATKAN KUPON GRATIS";
            cout << "\n\n\n   ==================================================";
            cout << "\n ||                 |                                ||";
            cout << "\n||    KUPON GRATIS  |    EXP :                         ||";
            cout << "\n||     TIMBANGAN    |          H + 2                   ||";
            cout << "\n||                  |          SETELAH PEMBELIAN       ||";
            cout << "\n||      SEHARGA     |                                  ||";
            cout << "\n||    Rp 75,000,00  |     dibuktikan dengan struk      ||";
            cout << "\n||                  |    pembelian > Rp 750,000,00     ||";
            cout << "\n ||                                                   ||";
            cout << "\n   ==================================================";
		} else if(pembayaran > 500000){
			cout << "\n\n\n  SELAMAT!!!";
			cout << "\n  KAMU MENDAPATKAN KUPON GRATIS";
            cout << "\n\n\n   ==================================================";
            cout << "\n ||                 |                                ||";
            cout << "\n||    KUPON GRATIS  |    EXP :                         ||";
            cout << "\n||     TERMOMETER   |          H + 2                   ||";
            cout << "\n||                  |          SETELAH PEMBELIAN       ||";
            cout << "\n||      SEHARGA     |                                  ||";
            cout << "\n||    Rp 55,000,00  |     dibuktikan dengan struk      ||";
            cout << "\n||                  |    pembelian > Rp 500,000,00     ||";
            cout << "\n ||                                                   ||";
            cout << "\n   ==================================================";
        } else {
            cout << "\n\n\nMOHON MAAF, ANDA TIDAK MENDAPATKAN KUPON APAPUN";
    	}
    }
    
    void TotalSementara(int bayar, int pajak, int semua){

		int diskon, pembayaran, selisih, cash;
        char pil[2];

        TotalSementara:
        	
			totalbayar += bayar;
            totalpajak += pajak;
            totalharga += semua;
			
			cout << "\n\n\n||=========================================================================||";
            cout << "\n||                             TOTAL SEMENTARA                             ||";
            cout << "\n||=========================================================================||";
            cout << "\n    Total pembelian sementara Anda             = Rp " << totalbayar << ",00";
            cout << "\n    Pajak pembelian sementara Anda (10 Persen) = Rp " << totalpajak << ",00";
            cout << "\n    Total pembelian sementara Anda menjadi     = Rp " << totalharga << ",00";
            cout << "\n  =========================================================================";
            
            if(totalharga > 400000){
                diskon = 20000;
                pembayaran = totalharga - diskon;
                cout << "\n    Selamat! Anda mendapatkan diskon sebesar Rp " << diskon << ",00 karena telah";
                cout << "\n    membeli lebih dari Rp 400,000,00";
                cout << "\n\n    Total pembelian Anda menjadi         = Rp " << pembayaran << ",00";
                cout << "\n  =========================================================================";
			} else if(totalharga > 200000){
                diskon = 10000;
                pembayaran = totalharga - diskon;
                cout << "\n    Selamat! Anda mendapatkan diskon sebesar Rp " << diskon << ",00 karena telah";
                cout << "\n    membeli lebih dari Rp 200,000,00";
                cout << "\n\n    Total pembelian Anda menjadi         = Rp "<< pembayaran << ",00";
                cout << "\n  =========================================================================";
            } else {
                diskon = 0;
                pembayaran = totalharga;
            }
            
            cout << "\n\n\n  Apakah Anda ingin membeli lagi? (Y/T) :";
            cin >> pil;

             if (strcmp(pil,"y")==0||strcmp(pil,"Y")==0) {
                cout << "  =========================================================================  ";
                system("cls");
            	int main();
            } else if (strcmp(pil,"t")==0||strcmp(pil,"T")==0) {
                int a = 0;
                while (a < 1) {
                    cout << "\n  =========================================================================\n";
                    cout << "\n    TOTAL  =  Rp " << pembayaran << ",00";
                    cout << "\n    CASH   =  Rp ";
                    cin >> cash;
                    
                    selisih = cash - pembayaran;
                    
                    if (cash < pembayaran) {
                        cout << "\n\n  UANG ANDA KURANG";
                        cout << "\n\n  MASUKKAN NOMINAL MINIMAL " << pembayaran << " ATAU LEBIH";
                        system("cls");
                        continue;
                    } else if (cash >= pembayaran) {
                        break;
                    } else {
                        cout << "\n\n  Inputan salah, akan dikembalikan ke menu pembayaran";
                        system("cls");
                        continue;
                    }
                }
            } else {
                cout << "\n\n  Inputan salah, akan dikembalikan ke menu total sementara";
                system("cls");
                goto TotalSementara;
            }
        StrukPembayaran(bayar, pajak, diskon, pembayaran, cash, selisih);
    }
    
    void MacamMacamObat(){
    	
    	int pilihan, usia, batuk, pilek, demam, nyeri, sakit_perut, cacingan, sakit_kepala, anemia, jerawat;
        int panu, sakit_gigi, tenggorokan, lemas, masuk_angin;
        int jumlah, harga, total, pajak, semua;
        int bayar = 0; semua = 0;

        Keluhan:

            cout << "\n\n\n  =========================================================================";
            cout << "\n||                         DAFTAR KELUHAN PENYAKIT                         ||";
            cout << "\n||=========================================================================||";
            cout << "\n||  1.  ||   Batuk          ||  8.   ||   Anemia                           ||";
            cout << "\n||  2.  ||   Pilek          ||  9.   ||   Jerawat                          ||";
            cout << "\n||  3.  ||   Demam          ||  10.  ||   Panu, Kadas, Kurap               ||";
            cout << "\n||  4.  ||   Nyeri          ||  11.  ||   Sakit Gigi                       ||";
            cout << "\n||  5.  ||   Sakit Perut    ||  12.  ||   Radang Tenggorokan               ||";
            cout << "\n||  6.  ||   Cacingan       ||  13.  ||   Lemas                            ||";
            cout << "\n||  7.  ||   Sakit Kepala   ||  14.  ||   Mabuk Kendaraan & Masuk Angin    ||";
            cout << "\n  =========================================================================";
            cout << "\n\n  Ada keluhan apa? : ";
            cin >> pilihan;
            cout << "\n------------------------------------------------------------------------";

            system("cls");
            
            switch(pilihan){
            	case 1 :
                    cout << "\n  Sebutkan usia Anda : ";
        	        cin >> usia;

                    if(usia > 12){
                        BatukDewasa:

                            cout << "\n\n\n|=============================================================================|";
                            cout << "\n|                        REKOMENDASI OBAT BATUK DEWASA                        |";
                            cout << "\n|=============================================================================|";
                            cout << "\n|                                Batuk Kering                                 |";
                            cout << "\n|-----------------------------------------------------------------------------|";
                            cout << "\n| 1. |  Woods Expectorant                      |   Rp  22,000,00   |   60ml   |";
                            cout << "\n| 2. |  Siladex Antitussive                    |   Rp  17,000,00   |   60ml   |";
                            cout << "\n|-----------------------------------------------------------------------------|";
                            cout << "\n|                               Batuk Berdahak                                |";
                            cout << "\n|-----------------------------------------------------------------------------|";
                            cout << "\n| 3. |  Woods Antitussive                      |   Rp  22,000,00   |   60ml   |";
                            cout << "\n| 4. |  Siladex Mucolytic & Expectorant        |   Rp  17,000,00   |   60ml   |";
                            cout << "\n|-----------------------------------------------------------------------------|";
                            cout << "\n|                                  Batuk Flu                                  |";
                            cout << "\n|-----------------------------------------------------------------------------|";
                            cout << "\n| 5. |  Komix OBH                              |   Rp   2,000,00   |    7ml   |";
                            cout << "\n| 6. |  Siladex Cough & Cold                   |   Rp  23,000,00   |  100ml   |";
                            cout << "\n|=============================================================================|";
                            cout << "\n\n  Masukkan obat yang Anda inginkan : ";
                            cin >> batuk;
                            cout << "\n-------------------------------------------------------------------------------";
                            cout << "\n\n  Jumlah obat yang ingin dibeli : ";
                            cin >> jumlah;
                            cout << "\n-------------------------------------------------------------------------------";
                            
                            switch(batuk){
                                case 1 :
                                    harga = 22000;
                                    total = harga * jumlah;
                                    system("cls");
                                    cout << "\n\n\n -------------------------------------------------------";
                                    cout << "\n|      Harga " << jumlah << " Woods Expectorant adalah Rp " << total << ",00    |";
                                    cout << "\n --  ---------------------------------------------------";
                                    cout << "\n   |/";
                                    cout << "\n\n|=======================================================================================|";
                                    cout << "\n|                                   WOODS EXPECTORANT                                   |";
                                    cout << "\n|=======================================================================================|";
                                    cout << "\n| INDIKASI :                                                                            |";
                                    cout << "\n| Meredakan gejala Batuk produktif/berdahak, Bronkhitis atau Emfisema.                  |";
                                    cout << "\n|---------------------------------------------------------------------------------------|";
                                    cout << "\n| DOSIS :                                                                               |";
                                    cout << "\n| Dewasa (Usia > 12 tahun)                                                              |";
                                    cout << "\n| 3 kali sehari (sesudah makan)                   |   2 sendok takar   |   (10 ml)   |  |";
                                    cout << "\n| Anak-Anak (Usia <= 12 tahun)                                                          |";
                                    cout << "\n| 3 kali sehari (sesudah makan)                   |   1 sendok takar   |   ( 5 ml)   |  |";
                                    cout << "\n|=======================================================================================|";
                                    break;
                                case 2 :
                                    harga = 17000;
                                    total = harga * jumlah;
                                    system("cls");
                                    cout << "\n\n\n -------------------------------------------------------";
                                    cout << "\n|      Harga " << jumlah << " Siladex Antitussive adalah Rp " << total << ",00    |";
                                    cout << "\n --  ---------------------------------------------------";
                                    cout << "\n   |/";
                                    cout << "\n\n|=======================================================================================|";
                                    cout << "\n|                                  SILADEX ANTITUSSIVE                                  |";
                                    cout << "\n|=======================================================================================|";
                                    cout << "\n| INDIKASI :                                                                            |";
                                    cout << "\n| Meringankan batuk tidak berdahak atau batuk kering yang disertai alergi.              |";
                                    cout << "\n|---------------------------------------------------------------------------------------|";
                                    cout << "\n| DOSIS :                                                                               |";
                                    cout << "\n| Dewasa (Usia > 12 tahun)                                                              |";
                                    cout << "\n| 3 kali sehari (sebelum atau sesudah makan)   |   1   sendok takar   |   (5   ml)   |  |";
                                    cout << "\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |";
                                    cout << "\n| 3 kali sehari (sebelum atau sesudah makan)   |   0.5 sendok takar   |   (2.5 ml)   |  |";
                                    cout << "\n| Atau menurut petunjuk dokter.                                                         |";
                                    cout << "\n|=======================================================================================|";
                                    break;
                                case 3 :
                                    harga = 22000;
                                    total = harga * jumlah;
                                    system("cls");
                                    cout << "\n\n\n -------------------------------------------------------";
                                    cout << "\n|      Harga " << jumlah << " Woods Antitussive adalah Rp " << total << ",00    |";
                                    cout << "\n --  ---------------------------------------------------";
                                    cout << "\n   |/";
                                    cout << "\n\n|=======================================================================================|";
                                    cout << "\n|                                   WOODS ANTITUSSIVE                                   |";
                                    cout << "\n|=======================================================================================|";
                                    cout << "\n| INDIKASI :                                                                            |";
                                    cout << "\n| Gejala Batuk non-produktif/tidak berdahak yang disertai dengan Alergi.                |";
                                    cout << "\n|---------------------------------------------------------------------------------------|";
                                    cout << "\n| DOSIS :                                                                               |";
                                    cout << "\n| Dewasa (Usia > 12 tahun)                                                              |";
                                    cout << "\n| 3 kali sehari (sebelum atau sesudah makan)   |   1   sendok takar   |   (5   ml)   |  |";
                                    cout << "\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |";
                                    cout << "\n| 3 kali sehari (sebelum atau sesudah makan)   |   0.5 sendok takar   |   (2.5 ml)   |  |";
                                    cout << "\n| Atau menurut petunjuk dokter.                                                         |";
                                    cout << "\n|=======================================================================================|";
                                    break;
                                case 4 :
                                    harga = 17000;
                                    total = harga * jumlah;
                                    system("cls");
                                    cout << "\n\n\n --------------------------------------------------------------------";
                                    cout << "\n|      Harga " << jumlah << " Siladex Mucolytic & Expectorant adalah Rp " << total << ",00   |";
                                    cout << "\n --  ----------------------------------------------------------------";
                                    cout << "\n   |/";
                                    cout << "\n\n|=======================================================================================|";
                                    cout << "\n|                            SILADEX MUCOLYTIC & EXPECTORANT                            |";
                                    cout << "\n|=======================================================================================|";
                                    cout << "\n| INDIKASI :                                                                            |";
                                    cout << "\n| Untuk mengencerkan dahak dan mempermudah untuk mengeluarkan dahak.                    |";
                                    cout << "\n|---------------------------------------------------------------------------------------|";
                                    cout << "\n| DOSIS :                                                                               |";
                                    cout << "\n| Dewasa (Usia > 12 tahun)                                                              |";
                                    cout << "\n| 3 kali sehari (sesudah makan)                  |   1   sendok teh   |   (5   ml)   |  |";
                                    cout << "\n| Anak-Anak (Usia 5 - 12 tahun)                                                         |";
                                    cout << "\n| 3 kali sehari (sesudah makan)                  |   0.5 sendok teh   |   (2.5 ml)   |  |";
                                    cout << "\n| Atau menurut petunjuk dokter                                                          |";
                                    cout << "\n|=======================================================================================|";
                                    break;
                                case 5 :
                                    harga = 2000;
                                    total = harga * jumlah;
                                    system("cls");
                                    cout << "\n\n\n ---------------------------------------------";
                                    cout << "\n|      Harga " << jumlah << " Komix OBH adalah Rp " << total << ",00   |";
                                    cout << "\n --  -----------------------------------------";
                                    cout << "\n   |/";
                                    cout << "\n\n|=======================================================================================|";
                                    cout << "\n|                                       KOMIX OBH                                       |";
                                    cout << "\n|=======================================================================================|";
                                    cout << "\n| INDIKASI :                                                                            |";
                                    cout << "\n| Meredakan batuk berdahak dan pilek, serta melegakan panas dalam.                      |";
                                    cout << "\n|---------------------------------------------------------------------------------------|";
                                    cout << "\n| DOSIS :                                                                               |";
                                    cout << "\n| Dewasa (Usia > 12 tahun)                                                              |";
                                    cout << "\n| 3 kali sehari (sesudah makan)                         |   2 sachet   |   (14 ml)   |  |";
                                    cout << "\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |";
                                    cout << "\n| 3 kali sehari (sesudah makan)                         |   1 sachet   |   ( 7 ml)   |  |";
                                    cout << "\n| Atau menurut petunjuk dokter                                                          |";
                                    cout << "\n|=======================================================================================|";
                                    break;
                                case 6 :
                                    harga = 23000;
                                    total = harga * jumlah;
                                    system("cls");
                                    cout << "\n\n\n ---------------------------------------------------------";
                                    cout << "\n|     Harga " << jumlah << " Siladex Cough & Cold adalah Rp " << total << ",00    |";
                                    cout << "\n --  -----------------------------------------------------";
                                    cout << "\n   |/";
                                    cout << "\n\n|=======================================================================================|";
                                    cout << "\n|                                   SILADEX COUGH & COLD                                |";
                                    cout << "\n|=======================================================================================|";
                                    cout << "\n| INDIKASI :                                                                            |";
                                    cout << "\n| Untuk meredakan batuk tidak berdahak dan melegakan hidung tersumbat atau pilek        |";
                                    cout << "\n| yang menyertai flu.                                                                   |";
                                    cout << "\n|---------------------------------------------------------------------------------------|";
                                    cout << "\n| DOSIS :                                                                               |";
                                    cout << "\n| Dewasa (Usia > 12 tahun)                                                              |";
                                    cout << "\n| 3 kali sehari (sesudah makan)                   |   2 sendok takar   |   (10 ml)   |  |";
                                    cout << "\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |";
                                    cout << "\n| 3 kali sehari (sesudah makan)                   |   1 sendok takar   |   (5  ml)   |  |";
                                    cout << "\n| Atau menurut petunjuk dokter                                                          |";
                                    cout << "\n|=======================================================================================|";
                                    break;
                                default :
                                    cout << "\n\nInputan salah, akan dikembalikan ke menu rekomendasi obat batuk dewasa.";
                                	goto BatukDewasa;
                            }
                    }
                    else if(usia <= 12){
                        BatukAnak:

                            cout << "\n\n\n|=============================================================================|";
                            cout << "\n|                         REKOMENDASI OBAT BATUK ANAK                         |";
                            cout << "\n|=============================================================================|";
                            cout << "\n|                                Batuk Kering                                 |";
                            cout << "\n|-----------------------------------------------------------------------------|";
                            cout << "\n|1. |  Hufagripp BP                               |   Rp 17,000,00   |  60ml  |";
                            cout << "\n|2. |  Viks Formula 44 Anak                       |   Rp 22,000,00   |  54ml  |";
                            cout << "\n|-----------------------------------------------------------------------------|";
                            cout << "\n|                               Batuk Berdahak                                |";
                            cout << "\n|-----------------------------------------------------------------------------|";
                            cout << "\n|3. |  Triaminic Expectorant                      |   Rp 87,000,00   |  50ml  |";
                            cout << "\n|4. |  OB Herbal Junior                           |   Rp 18,000,00   |  60ml  |";
                            cout << "\n|-----------------------------------------------------------------------------|";
                            cout << "\n|                                  Batuk Flu                                  |";
                            cout << "\n|-----------------------------------------------------------------------------|";
                            cout << "\n|5. |  Hufagripp Flu & Batuk                      |   Rp 22,000,00   |  60ml  |";
                            cout << "\n|6. |  OBH Combi Anak                             |   Rp 17,000,00   |  60ml  |";
                            cout << "\n|=============================================================================|";
                            cout << "\n\n  Masukkan obat yang Anda inginkan :";
                            cin >> batuk;
                            cout << "\n-------------------------------------------------------------------------------";
                            cout << "\n\n  Jumlah obat yang ingin dibeli : ";
                            cin >> jumlah;
                            cout << "\n-------------------------------------------------------------------------------";

                            switch(batuk){
                                case 1 :
                                    harga = 17000;
                                    total = harga * jumlah;
                                    system("cls");
                                    cout << "\n\n\n -------------------------------------------------";
                                    cout << "\n|     Harga " << jumlah << " Hufagripp BP adalah Rp " << total << ",00    |";
                                    cout << "\n --  ---------------------------------------------";
                                    cout << "\n   |/";
                                    cout << "\n\n|=======================================================================================|";
                                    cout << "\n|                                      HUFAGRIPP BP                                     |";
                                    cout << "\n|=======================================================================================|";
                                    cout << "\n| INDIKASI :                                                                            |";
                                    cout << "\n| Meringankan pilek dan batuk tidak berdahak.                                           |";
                                    cout << "\n|---------------------------------------------------------------------------------------|";
                                    cout << "\n| DOSIS :                                                                               |";
                                    cout << "\n| Dewasa (Usia > 12 tahun)                                                              |";
                                    cout << "\n| 3 kali sehari (sesudah makan)                  |   2   sendok teh   |   (10  ml)   |  |";
                                    cout << "\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |";
                                    cout << "\n| 3 kali sehari (sesudah makan)                  |   1   sendok teh   |   (5   ml)   |  |";
                                    cout << "\n| Anak-Anak (Usia 2 - 6 tahun)                                                          |";
                                    cout << "\n| 3 kali sehari (sesudah makan)                  |   0.5 sendok teh   |   (2.5 ml)   |  |";
                                    cout << "\n| Anak-Anak (Usia < 2 tahun)                                                            |";
                                    cout << "\n| Menurut petunjuk dokter                                                               |";
                                    cout << "\n|=======================================================================================|";
                                    break;
                                case 2 :
                                    harga = 22000;
                                    total = harga * jumlah;
                                    system("cls");
                                    cout << "\n\n\n -------------------------------------------------------";
                                    cout << "\n|   Harga " << jumlah << " Viks Formula 44 Anak adalah Rp " << total << ",00    |";
                                    cout << "\n --  ---------------------------------------------------";
                                    cout << "\n   |/";
                                    cout << "\n\n|=======================================================================================|";
                                    cout << "\n|                                 VIKS FORMULA 44 ANAK                                  |";
                                    cout << "\n|=======================================================================================|";
                                    cout << "\n| INDIKASI :                                                                            |";
                                    cout << "\n| Untuk meringankan batuk.                                                              |";
                                    cout << "\n|---------------------------------------------------------------------------------------|";
                                    cout << "\n| DOSIS :                                                                               |";
                                    cout << "\n| Gunakan setiap 4 jam sesuai kebutuhan.                                                |";
                                    cout << "\n| Dewasa (Usia > 12 tahun)                                                              |";
                                    cout << "\n| Sebelum atau sesudah makan                      |   4 sendok takar   |   (20 ml)   |  |";
                                    cout << "\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |";
                                    cout << "\n| Sebelum atau sesudah makan                      |   2 sendok takar   |   (10 ml)   |  |";
                                    cout << "\n| Anak-Anak (Usia 2 - 6 tahun)                                                          |";
                                    cout << "\n| Sebelum atau sesudah makan                      |   1 sendok takar   |   (5  ml)   |  |";
                                    cout << "\n| Atau gunakan sesuai petunjuk dokter.                                                  |";
                                    cout << "\n|=======================================================================================|";
                                    break;
                                case 3 :
                                    harga = 87000;
                                    total = harga * jumlah;
                                    system("cls");
                                    cout << "\n\n\n --------------------------------------------------------";
                                    cout << "\n|   Harga " << jumlah << " Triaminic Expectorant adalah Rp " << total << ",00    |";
                                    cout << "\n --  ----------------------------------------------------";
                                    cout << "\n   |/";
                                    cout << "\n\n|=======================================================================================|";
                                    cout << "\n|                                 TRIAMINIC EXPECTORANT                                 |";
                                    cout << "\n|=======================================================================================|";
                                    cout << "\n| INDIKASI :                                                                            |";
                                    cout << "\n| Untuk meringankan batuk berdahak dan melegakan hidung tersumbat karena pilek.         |";
                                    cout << "\n|---------------------------------------------------------------------------------------|";
                                    cout << "\n| DOSIS :                                                                               |";
                                    cout << "\n| Dewasa (Usia > 12 tahun)                                                              |";
                                    cout << "\n| 3 kali sehari (sebelum atau sesudah makan)   |   2   sendok takar   |   (10  ml)   |  |";
                                    cout << "\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |";
                                    cout << "\n| 3 kali sehari (sebelum atau sesudah makan)   |   1   sendok takar   |   (5   ml)   |  |";
                                    cout << "\n| Anak-Anak (Usia 2 - 6 tahun)                                                          |";
                                    cout << "\n| 3 kali sehari (sebelum atau sesudah makan)   |   0.5 sendok takar   |   (2.5 ml)   |  |";
                                    cout << "\n|=======================================================================================|";
                                    break;
                                case 4 :
                                    harga = 18000;
                                    total = harga * jumlah;
                                    system("cls");
                                    cout << "\n\n\n ---------------------------------------------------";
                                    cout << "\n|   Harga " << jumlah << " OB Herbal Junior adalah Rp " << total << ",00    |";
                                    cout << "\n --  -----------------------------------------------";
                                    cout << "\n   |/";
                                    cout << "\n\n|=======================================================================================|";
                                    cout << "\n|                                   OB HERBAL JUNIOR                                    |";
                                    cout << "\n|=======================================================================================|";
                                    cout << "\n| INDIKASI :                                                                            |";
                                    cout << "\n| Untuk meringankan batuk dan melegakan tenggorokan.                                    |";
                                    cout << "\n|---------------------------------------------------------------------------------------|";
                                    cout << "\n| DOSIS :                                                                               |";
                                    cout << "\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |";
                                    cout << "\n| 3 kali sehari (sesudah makan)                    |   2 sendok takar   |   (10 ml)  |  |";
                                    cout << "\n|=======================================================================================|";
                                    break;
                                case 5 :
                                    harga = 22000;
                                    total = harga * jumlah;
                                    system("cls");
                                    cout << "\n\n\n --------------------------------------------------------";
                                    cout << "\n|   Harga " << jumlah << " Hufagripp Flu & Batuk adalah Rp" << total << ",00    |";
                                    cout << "\n --  ----------------------------------------------------";
                                    cout << "\n   |/";
                                    cout << "\n\n|=======================================================================================|";
                                    cout << "\n|                                 HUFAGRIPP FLU & BATUK                                 |";
                                    cout << "\n|=======================================================================================|";
                                    cout << "\n| INDIKASI :                                                                            |";
                                    cout << "\n| Untuk mengobati gejala influenza, seperti demam, sakit kepala, hidung tersumbat       |";
                                    cout << "\n| disertai bersin dan batuk berdahak.                                                   |";
                                    cout << "\n|---------------------------------------------------------------------------------------|";
                                    cout << "\n| DOSIS :                                                                               |";
                                    cout << "\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |";
                                    cout << "\n| 3 kali sehari (sesudah makan)                     |   2 sendok teh   |   (10 ml)   |  |";
                                    cout << "\n| Anak-Anak (Usia 2 - 6 tahun)                                                          |";
                                    cout << "\n| 3 kali sehari (sesudah makan)                     |   1 sendok teh   |   (5  ml)   |  |";
                                    cout << "\n|=======================================================================================|";
                                    break;
                                case 6 :
                                    harga = 17000;
                                    total = harga * jumlah;
                                    system("cls");
                                    cout << "\n\n\n -------------------------------------------------";
                                    cout << "\n|   Harga " << jumlah << " OBH Combi Anak adalah Rp " << total << ",00    |";
                                    cout << "\n --  ---------------------------------------------";
                                    cout << "\n   |/";
                                    cout << "\n\n|=======================================================================================|";
                                    cout << "\n|                                    OBH COMBI ANAK                                     |";
                                    cout << "\n|=======================================================================================|";
                                    cout << "\n| INDIKASI :                                                                            |";
                                    cout << "\n| Meredakan batuk yang disertai gejala-gejala flu pada anak seperti demam, sakit kepala,|";
                                    cout << "\n| hidung tersumbat dan bersin-bersin.                                                   |";
                                    cout << "\n|---------------------------------------------------------------------------------------|";
                                    cout << "\n| DOSIS :                                                                               |";
                                    cout << "\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |";
                                    cout << "\n| 3 kali sehari (sesudah makan)                   |   2 sendok takar   |   (10 ml)   |  |";
                                    cout << "\n| Anak-Anak (Usia 2 - 5 tahun)                                                          |";
                                    cout << "\n| 3 kali sehari (sesudah makan)                   |   1 sendok takar   |   (5  ml)   |  |";
                                    cout << "\n|=======================================================================================|";
                                    break;
                                default :
                                    cout << "\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat batuk anak.";
                                    system("cls");
                            		goto BatukAnak;
                            }
                    }
                    break;
                    
                case 2 :
                    cout<<"\n  Sebutkan usia Anda : ";
        	        cin>>usia;

                    if(usia > 12){
                    	PilekDewasa:

	                        cout<<"\n\n\n|==============================================================================|";
	                        cout<<"\n|                 REKOMENDASI OBAT PILEK DEWASA                                |";
	                        cout<<"\n|==============================================================================|";
	                        cout<<"\n|        Tablet :                                                              |";
	                        cout<<"\n|------------------------------------------------------------------------------|";
	                        cout<<"\n| 1.  |  Panadol Cold & Flu                  |   Rp  16,000,00   |   1 strip   |";
	                        cout<<"\n| 2.  |  Mixagrip Flu & Batuk                |   Rp   3,000,00   |   1 strip   |";
	                        cout<<"\n| 3.  |  Paramex Flu & Batuk PE              |   Rp   3,000,00   |   1 strip   |";
	                        cout<<"\n|------------------------------------------------------------------------------|";
	                        cout<<"\n|        Sirup :                                                               |";
	                        cout<<"\n|------------------------------------------------------------------------------|";
	                        cout<<"\n| 4.  |  Bodrex Flu & Batuk                  |   Rp  13,000,00   |     60ml    |";
	                        cout<<"\n| 5.  |  Tolak Angin Flu                     |   Rp   3,000,00   |      5ml    |";
	                        cout<<"\n| 6.  |  OB Combi Batuk Pilek                |   Rp  21,000,00   |    100ml    |";
	                        cout<<"\n|==============================================================================|";
	                        cout<<"\n\n  Masukkan obat yang Anda inginkan : ";
	                        cin>> pilek;
	                        cout<<"\n------------------------------------------------------------------------------";
	                        cout<<"\n\n  Jumlah obat yang ingin dibeli : ";
	                        cin>> jumlah;

	                        switch(pilek){
	                            case 1 :
	                                harga = 16000;
	                                total = harga * jumlah;
	                                system("cls");
	                                cout<<"\n\n\n -----------------------------------------------------";
	                                cout<<"\n|   Harga " << jumlah << " Panadol Cold & Flu adalah Rp " << total <<",00      |";
	                                cout<<"\n --  -------------------------------------------------";
	                                cout<<"\n   |/";
	                                cout<<"\n\n|=======================================================================================|";
	                                cout<<"\n|                                  PANADOL COLD & FLU                                   |";
	                                cout<<"\n|=======================================================================================|";
	                                cout<<"\n| INDIKASI :                                                                            |";
	                                cout<<"\n| Untuk meredakan gejala flu seperti demam, sakit kepala, hidung tersumbat, dan         |";
	                                cout<<"\n| batuk tidak berdahak.                                                                 |";
	                                cout<<"\n|---------------------------------------------------------------------------------------|";
	                                cout<<"\n| DOSIS :                                                                               |";
	                                cout<<"\n| Dewasa (Usia > 12 tahun)                                                              |";
	                                cout<<"\n| 3 kali sehari (sesudah makan)                                     |   1 kaplet   |    |";
	                                cout<<"\n|                                                                                       |";
	                                cout<<"\n| Jangan diberikan kepada anak-anak di usia < 12 tahun, kecuali atas petunjuk dokter    |";
	                                cout<<"\n|=======================================================================================|";
	                            	break;
	                            case 2 :
	                                harga = 3000;
	                                total = harga * jumlah;
	                                system("cls");
	                                cout<<"\n\n\n ------------------------------------------------------";
	                                cout<<"\n|   Harga " << jumlah <<" Mixagrip Flu & Batuk adalah Rp " << total << ",00      |";
	                                cout<<"\n --  --------------------------------------------------";
	                                cout<<"\n   |/";
	                                cout<<"\n\n|=======================================================================================|";
	                                cout<<"\n|                                 MIXAGRIP FLU & BATUK                                  |";
	                                cout<<"\n|=======================================================================================|";
	                                cout<<"\n| INDIKASI :                                                                            |";
	                                cout<<"\n| Untuk meredakan gejala flu seperti bersin-bersin, hidung berair, hidung tersumbat,    |";
	                                cout<<"\n| demam, dan sakit kepala yang disertai batuk.                                          |";
	                                cout<<"\n|---------------------------------------------------------------------------------------|";
	                                cout<<"\n| DOSIS :                                                                               |";
	                                cout<<"\n| Dewasa (Usia > 12 tahun)                                                              |";
	                                cout<<"\n| 3 kali sehari (sesudah makan)                                   |   1   kaplet   |    |";
	                                cout<<"\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |";
	                                cout<<"\n| 3 kali sehari (sesudah makan)                                   |   0.5 kaplet   |    |";
	                                cout<<"\n|=======================================================================================|";
	                            	break;
	                            case 3 :
	                                harga = 3000;
	                                total = harga * jumlah;
	                                system("cls");
	                                cout<<"\n\n\n --------------------------------------------------------";
	                                cout<<"\n|   Harga " << jumlah << " Paramex Flu & Batuk PE adalah Rp " << total <<",00    |";
	                                cout<<"\n --  ----------------------------------------------------";
	                                cout<<"\n   |/";
	                                cout<<"\n\n|=======================================================================================|";
	                                cout<<"\n|                               PARAMEX FLU & BATUK PE                                  |";
	                                cout<<"\n|=======================================================================================|";
	                                cout<<"\n| INDIKASI :                                                                            |";
	                                cout<<"\n| Meredakan gejala flu seperti demam, sakit kepala, hidung tersumbat, dan bersin-bersin |";
	                                cout<<"\n| yang disertai batuk kering.                                                           |";
	                                cout<<"\n|---------------------------------------------------------------------------------------|";
	                                cout<<"\n| DOSIS :                                                                               |";
	                                cout<<"\n| Dewasa (Usia > 12 tahun)                                                              |";
	                                cout<<"\n| 3 kali sehari (sesudah makan)                                   |   1   tablet   |    |";
	                                cout<<"\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |";
	                                cout<<"\n| 3 kali sehari (sesudah makan)                                   |   0.5 tablet   |    |";
	                                cout<<"\n|=======================================================================================|";
	                            	break;
	                            case 4 :
	                                harga = 13000;
	                                total = harga * jumlah;
	                                system("cls");
	                                cout<<"\n\n\n -----------------------------------------------------";
	                                cout<<"\n|   Harga " << jumlah << " Bodrex Flu & Batuk adalah Rp " << total <<",00     |";
	                                cout<<"\n --  -------------------------------------------------";
	                                cout<<"\n   |/";
	                                cout<<"\n\n|=======================================================================================|";
	                                cout<<"\n|                                  BODREX FLU & BATUK                                   |";
	                                cout<<"\n|=======================================================================================|";
	                                cout<<"\n| INDIKASI :                                                                            |";
	                                cout<<"\n| Meredakan gejala-gejala flu seperti demam, sakit kepala, hidung tersumbat, dan        |";
	                                cout<<"\n| bersin-bersin yang disertai batuk kering.                                             |";
	                                cout<<"\n|---------------------------------------------------------------------------------------|";
	                                cout<<"\n| DOSIS :                                                                               |";
	                                cout<<"\n| Dewasa (Usia > 12 tahun)                                                              |";
	                                cout<<"\n| 3 kali sehari (sesudah makan)                                   |   1   kaplet   |    |";
	                                cout<<"\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |";
	                                cout<<"\n| 3 kali sehari (sesudah makan)                                   |   0.5 kaplet   |    |";
	                                cout<<"\n|=======================================================================================|";
	                            	break;
	                            case 5 :
	                                harga = 3000;
	                                total = harga * jumlah;
	                                system("cls");
	                                cout<<"\n\n\n -------------------------------------------------";
	                                cout<<"\n|   Harga " << jumlah << " Tolak Angin Flu adalah Rp " << total << ",00      |";
	                                cout<<"\n --  ---------------------------------------------";
	                                cout<<"\n   |/";
	                                cout<<"\n\n|=======================================================================================|";
	                                cout<<"\n|                                    TOLAK ANGIN FLU                                    |";
	                                cout<<"\n|=======================================================================================|";
	                                cout<<"\n| INDIKASI :                                                                            |";
	                                cout<<"\n| Membantu meringankan gejala flu, membantu meringankan masuk angin, serta membantu     |";
	                                cout<<"\n| memelihara daya tahan tubuh.                                                          |";
	                                cout<<"\n|---------------------------------------------------------------------------------------|";
	                                cout<<"\n| DOSIS :                                                                               |";
	                                cout<<"\n| Dewasa (Usia > 12 tahun)                                                              |";
	                                cout<<"\n| 3 kali sehari (sesudah makan)                                     |   1 sachet   |    |";
	                                cout<<"\n|---------------------------------------------------------------------------------------|";
	                                cout<<"\n| ATURAN PAKAI :                                                                        |";
	                                cout<<"\n| Obat dapat langsung diminum atau dapat dicampur dengan setengah gelas air hangat.     |";
	                                cout<<"\n|=======================================================================================|";
	                            	break;
	                            case 6 :
	                                harga = 21000;
	                                total = harga * jumlah;
	                                system("cls");
	                                cout<<"\n\n\n -------------------------------------------------------";
	                                cout<<"\n|   Harga " << jumlah << " OB Combi Batuk Pilek adalah Rp " << total << ",00      |";
	                                cout<<"\n --  ---------------------------------------------------";
	                                cout<<"\n   |/";
	                                cout<<"\n\n|=======================================================================================|";
	                                cout<<"\n|                                 OB COMBI BATUK PILEK                                  |";
	                                cout<<"\n|=======================================================================================|";
	                                cout<<"\n| INDIKASI :                                                                            |";
	                                cout<<"\n| Untuk meredakan batuk yang disertai gejala-gejala flu seperti demam, sakit kepala,    |";
	                                cout<<"\n| hidung tersumbat, dan bersin-bersin.                                                  |";
	                                cout<<"\n|---------------------------------------------------------------------------------------|";
	                                cout<<"\n| DOSIS :                                                                               |";
	                                cout<<"\n| Dewasa (Usia > 12 tahun)                                                              |";
	                                cout<<"\n| 3 kali sehari (sesudah makan)                   |   3 sendok takar   |   (15 ml)   |  |";
	                                cout<<"\n|=======================================================================================|";
	                            	break;
	                            default :
	                                cout<<"\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat pilek dewasa.";
	                                system("cls");
	                            	goto PilekDewasa;
                        	}
                    }
                    else if(usia <= 12){
                    	PilekAnak:

	                        cout<<"\n\n\n|=============================================================================|";
	                        cout<<"\n|                        REKOMENDASI OBAT PILEK ANAK                          |";
	                        cout<<"\n|=============================================================================|";
	                        cout<<"\n|       Sirup :                                                               |";
	                        cout<<"\n|-----------------------------------------------------------------------------|";
	                        cout<<"\n| 1. |  Hufagripp Pilek                        |   Rp  18,000,00   |   60ml   |";
	                        cout<<"\n| 2. |  Bodrexin Pilek Alergi PE               |   Rp  12,000,00   |   56ml   |";
	                        cout<<"\n| 3. |  Triaminic Pilek                        |   Rp  86,000,00   |   60ml   |";
	                        cout<<"\n| 4. |  OBH Combi Batuk Flu Anak               |   Rp  17,000,00   |   60ml   |";
	                        cout<<"\n|=============================================================================|";
	                        cout<<"\n\n  Masukkan obat yang Anda inginkan : ";
	                        cin>> pilek;
	                        cout<<"\n------------------------------------------------------------------------------";
	                        cout<<"\n\n  Jumlah obat yang ingin dibeli : ";
	                        cin>> jumlah;

	                        switch(pilek){
	                            case 1 :
	                                harga = 18000;
	                                total = harga * jumlah;
	                                system("cls");
	                                cout<<"\n\n\n --------------------------------------------------";
	                                cout<<"\n|   Harga " << jumlah << " Hufagripp Pilek adalah Rp " << total << ",00     |";
	                                cout<<"\n --  ----------------------------------------------";
	                                cout<<"\n   |/";
	                                cout<<"\n\n|=======================================================================================|";
	                                cout<<"\n|                                    HUFAGRIPP PILEK                                    |";
	                                cout<<"\n|=======================================================================================|";
	                                cout<<"\n| INDIKASI :                                                                            |";
	                                cout<<"\n| Untuk meringankan bersin-bersin dan hidung tersumbat karena pilek.                    |";
	                                cout<<"\n|---------------------------------------------------------------------------------------|";
	                                cout<<"\n| DOSIS :                                                                               |";
	                                cout<<"\n| Dewasa (Usia > 12 tahun)                                                              |";
	                                cout<<"\n| 3 kali sehari (sesudah makan)               |   2   sendok takar   |   (10   ml)   |  |";
	                                cout<<"\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |";
	                                cout<<"\n| 3 kali sehari (sesudah makan)               |   1   sendok takar   |   ( 5   ml)   |  |";
	                                cout<<"\n| Anak-Anak (Usia 2 - 6 tahun)                                                          |";
	                                cout<<"\n| 3 kali sehari (sesudah makan)               |   0.5 sendok takar   |   ( 2.5 ml)   |  |";
	                                cout<<"\n| Anak-Anak (Usia < 2 tahun)                                                            |";
	                                cout<<"\n| Menurut petunjuk dokter                                                               |";
	                                cout<<"\n|=======================================================================================|";
	                            	break;
	                            case 2 :
	                                harga = 12000;
	                                total = harga * jumlah;
	                                system("cls");
	                                cout<<"\n\n\n -----------------------------------------------------------";
	                                cout<<"\n|   Harga " << jumlah << " Bodrexin Pilek Alergi PE adalah Rp " << total << ",00    |";
	                                cout<<"\n --  -------------------------------------------------------";
	                                cout<<"\n   |/";
	                                cout<<"\n|=======================================================================================|";
	                                cout<<"\n|                               BODREXIN PILEK ALERGI PE                                |";
	                                cout<<"\n|=======================================================================================|";
	                                cout<<"\n| INDIKASI :                                                                            |";
	                                cout<<"\n| Meredakan rinitis alergi, bersin-bersin, dan hidung tersumbat.                        |";
	                                cout<<"\n|---------------------------------------------------------------------------------------|";
	                                cout<<"\n| DOSIS :                                                                               |";
	                                cout<<"\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |";
	                                cout<<"\n| 3 kali sehari (berikan bersama makanan)         |   2 sendok takar   |   (10 ml)   |  |";
	                                cout<<"\n| Anak-Anak (Usia 2 - 5 tahun)                                                          |";
	                                cout<<"\n| 3 kali sehari (berikan bersama makanan)         |   1 sendok takar   |   (5  ml)   |  |";
	                                cout<<"\n|=======================================================================================|";
	                            	break;
	                            case 3 :
	                                harga = 86000;
	                                total = harga * jumlah;
	                                system("cls");
	                                cout<<"\n\n\n --------------------------------------------------";
	                                cout<<"\n|   Harga " << jumlah << " Triaminic Pilek adalah Rp " << total << ",00    |";
	                                cout<<"\n --  ----------------------------------------------";
	                                cout<<"\n   |/";
	                                cout<<"\n|=======================================================================================|";
	                                cout<<"\n|                                    TRIAMINIC PILEK                                    |";
	                                cout<<"\n|=======================================================================================|";
	                                cout<<"\n| INDIKASI :                                                                            |";
	                                cout<<"\n| Meredakan bersin-bersin dan hidung tersumbat yang disebabkan oleh pilek.              |";
	                                cout<<"\n|---------------------------------------------------------------------------------------|";
	                                cout<<"\n| DOSIS :                                                                               |";
	                                cout<<"\n| Dewasa (Usia > 12 tahun)                                                              |";
	                                cout<<"\n| 3 kali sehari (sebelum atau sesudah makan)      |   2 sendok takar   |   (10 ml)   |  |";
	                                cout<<"\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |";
	                                cout<<"\n| 3 kali sehari (sebelum atau sesudah makan)      |   1 sendok takar   |   (5  ml)   |  |";
	                                cout<<"\n| Anak-Anak (Usia < 6 tahun)                                                            |";
	                                cout<<"\n| Atas petunjuk dokter                                                                  |";
	                                cout<<"\n|=======================================================================================|";
	                            	break;
	                            case 4 :
	                                harga = 17000;
	                                total = harga * jumlah;
	                                system("cls");
	                                cout<<"\n\n\n ---------------------------------------------------------";
	                                cout<<"\n|   Harga " << jumlah << " OBH Combi Batuk Flu Anak adalah Rp " << total << ",00    |";
	                                cout<<"\n --  ------------------------------------------------------";
	                                cout<<"\n   |/";
	                                cout<<"\n\n|=======================================================================================|";
	                                cout<<"\n|                               OBH COMBI BATUK FLU ANAK                                |";
	                                cout<<"\n|=======================================================================================|";
	                                cout<<"\n| INDIKASI :                                                                            |";
	                                cout<<"\n| Meredakan betuk yang disertai gejala-gejala flu pada anak seperti demam, sakit kepala,|";
	                                cout<<"\n| hidung tersumbat, dan bersin-bersin.                                                  |";
	                                cout<<"\n|---------------------------------------------------------------------------------------|";
	                                cout<<"\n| DOSIS :                                                                               |";
	                                cout<<"\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |";
	                                cout<<"\n| 3 kali sehari (sesudah makan)                   |   2 sendok takar   |   (10 ml)   |  |";
	                                cout<<"\n| Anak-Anak (Usia 2 - 6 tahun)                                                          |";
	                                cout<<"\n| 3 kali sehari (sesudah makan)                   |   1 sendok takar   |   (5  ml)   |  |";
	                                cout<<"\n|=======================================================================================|";
	                            	break;
	                            default :
                                   	cout<<"\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat pilek anak.";
                                  	system("cls");
                                	goto PilekAnak;
	                        }
                    }
                	break;

                case 3 :
                    cout<<"\n  Sebutkan usia Anda : ";
        	        cin>>usia;

                    if(usia > 12){
                    	DemamDewasa:

	                        cout<<"\n\n\n|======================================================================|";
	                        cout<<"\n|                    REKOMENDASI OBAT DEMAM DEWASA                     |";
	                        cout<<"\n|======================================================================|";
	                        cout<<"\n|       Tablet :                                                       |";
	                        cout<<"\n|----------------------------------------------------------------------|";
	                        cout<<"\n| 1. |  Sanmol Tablet              |   Rp  2,000,00    |    4 tablet   |";
	                        cout<<"\n| 2. |  Panadol Paracetamol        |   Rp 12,000,00    |   10 tablet   |";
	                        cout<<"\n| 3. |  Bodrex Tablet              |   Rp  9,000,00    |   20 tablet   |";
	                        cout<<"\n| 4. |  Biogesic Paracetamol       |   Rp  2,000,00    |    4 tablet   |";
	                        cout<<"\n|======================================================================|";
	                        cout<<"\n\n  Masukkan obat yang Anda inginkan : ";
	                        cin>> demam;
	                        cout<<"\n------------------------------------------------------------------------";
	                        cout<<"\n\n  Jumlah obat yang ingin dibeli : ";
	                        cin>> jumlah;

	                        switch(demam){
	                            case 1 :
	                                harga = 2000;
	                                total = harga * jumlah;
	                                system("cls");
	                                cout<<"\n\n\n -----------------------------------------------";
	                                cout<<"\n|   Harga " << jumlah << " Sanmol Tablet adalah Rp " << total << ",00    |";
	                                cout<<"\n --  -------------------------------------------";
	                                cout<<"\n   |/";
	                                cout<<"\n\n|=======================================================================================|";
	                                cout<<"\n|                                      SANMOL TABLET                                    |";
	                                cout<<"\n|=======================================================================================|";
	                                cout<<"\n| INDIKASI :                                                                            |";
	                                cout<<"\n| Untuk meringankan rasa sakit pada keadaan sakit kepala, sakit gigi, dan menurunkan    |";
	                                cout<<"\n| demam.                                                                                |";
	                                cout<<"\n|---------------------------------------------------------------------------------------|";
	                                cout<<"\n| DOSIS :                                                                               |";
	                                cout<<"\n| Dewasa (Usia > 12 tahun)                                                              |";
	                                cout<<"\n| 3 - 4 kali sehari (sebelum atau sesudah makan)              |      1 kaplet      |    |";
	                                cout<<"\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |";
	                                cout<<"\n| 3 - 4 kali sehari (sebelum atau sesudah makan)              |   0.5 - 1 kaplet   |    |";
	                                cout<<"\n|=======================================================================================|";
	                            	break;
	                            case 2 :
	                                harga = 12000;
	                                total = harga * jumlah;
	                                system("cls");
	                                cout<<"\n\n\n ------------------------------------------------------";
	                                cout<<"\n|   Harga " << jumlah << " Panadol Paracetamol adalah Rp " << total << ",00    |";
	                                cout<<"\n --  --------------------------------------------------";
	                                cout<<"\n   |/";
	                                cout<<"\n\n|=======================================================================================|";
	                                cout<<"\n|                                 PANADOL PARACETAMOL                                   |";
	                                cout<<"\n|=======================================================================================|";
	                                cout<<"\n| INDIKASI :                                                                            |";
	                                cout<<"\n| Untuk meredakan nyeri ringan hingga sedang seperti sakit kepala, sakit gigi, sakit    |";
	                                cout<<"\n| pada otot, serta menurunkan demam.                                                    |";
	                                cout<<"\n|---------------------------------------------------------------------------------------|";
	                                cout<<"\n| DOSIS :                                                                               |";
	                                cout<<"\n| Dewasa (Usia > 12 tahun)                                                              |";
	                                cout<<"\n| 3 - 4 kali sehari (sebelum atau sesudah makan)              |   1   - 2 kaplet   |    |";
	                                cout<<"\n| Anak-Anak (Usia 6 - 11 tahun)                                                         |";
	                                cout<<"\n| 3 - 4 kali sehari (sebelum atau sesudah makan)              |   0.5 - 1 kaplet   |    |";
	                                cout<<"\n|=======================================================================================|";
	                                cout<<"\n| ATURAN PAKAI :                                                                        |";
	                                cout<<"\n| Minimum interval penggunaan dosis adalah 4 jam                                        |";
	                                cout<<"\n| Jangan melebihi dosis yang dianjurkan, atau menurut aturan dokter                     |";
	                                cout<<"\n|=======================================================================================|";
	                            	break;
	                            case 3 :
	                                harga = 9000;
	                                total = harga * jumlah;
	                                system("cls");
	                                cout<<"\n\n\n --------------------------------------------------";
	                                cout<<"\n|   Harga " << jumlah << " Bodrex Tablet adalah Rp " << total << ",00    |";
	                                cout<<"\n --  ----------------------------------------------";
	                                cout<<"\n   |/";
	                                cout<<"\n\n|=======================================================================================|";
	                                cout<<"\n|                               BODREX TABLET                                           |";
	                                cout<<"\n|=======================================================================================|";
	                                cout<<"\n| INDIKASI :                                                                            |";
	                                cout<<"\n| Meringankan sakit kepala, sakit gigi, dan menurunkan demam.                           |";
	                                cout<<"\n|---------------------------------------------------------------------------------------|";
	                                cout<<"\n| DOSIS :                                                                               |";
	                                cout<<"\n| Dewasa (Usia > 12 tahun)                                                              |";
	                                cout<<"\n| 3 - 4 kali sehari (sesudah makan)                           |      1 kaplet      |    |";
	                                cout<<"\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |";
	                                cout<<"\n| 3 - 4 kali sehari (sesudah makan)                           |   0.5 - 1 kaplet   |    |";
	                                cout<<"\n| Atau sesuai petunjuk dokter                                                           |";
	                                cout<<"\n|=======================================================================================|";
	                            	break;
	                            case 4 :
	                                harga = 2000;
	                                total = harga * jumlah;
	                                system("cls");
	                                cout<<"\n\n\n ------------------------------------------------------";
	                                cout<<"\n|   Harga " << jumlah << " Biogesic Paracetamol adalah Rp " << total << ",00    |";
	                                cout<<"\n --  --------------------------------------------------";
	                                cout<<"\n   |/";
	                                cout<<"\n\n|=======================================================================================|";
	                                cout<<"\n|                                 BIOGESIC PARACETAMOL                                  |";
	                                cout<<"\n|=======================================================================================|";
	                                cout<<"\n| INDIKASI :                                                                            |";
	                                cout<<"\n| Meringankan rasa sakit pada sakit kepala, sakit gigi, dan menurunkan demam.           |";
	                                cout<<"\n|---------------------------------------------------------------------------------------|";
	                                cout<<"\n| DOSIS :                                                                               |";
	                                cout<<"\n| Dewasa (Usia > 12 tahun)                                                              |";
	                                cout<<"\n| 3 - 4 kali sehari (sebelum atau sesudah makan)              |    1 - 3 kaplet    |    |";
	                                cout<<"\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |";
	                                cout<<"\n| 3 - 4 kali sehari (sebelum atau sesudah makan)              |   0.5 - 1 kaplet   |    |";
	                                cout<<"\n| Atau sesuai petunjuk dokter                                                           |";
	                                cout<<"\n|=======================================================================================|";
	                            	break;
	                            default :
	                                cout<<"\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat demam dewasa.";
	                                system("cls");
	                            	goto PilekDewasa;
	                        }
	            	}
                    else if(usia <= 12){
                    	DemamAnak:

	                        cout<<"\n\n\n|================================================================================|";
	                        cout<<"\n|                          REKOMENDASI OBAT DEMAM ANAK                           |";
	                        cout<<"\n|================================================================================|";
	                        cout<<"\n|       Sirup :                                                                  |";
	                        cout<<"\n|--------------------------------------------------------------------------------|";
	                        cout<<"\n| 1. |  Hufagripp TMP                              |   Rp  20,000,00   |   60ml  |";
	                        cout<<"\n| 2. |  Proris Ibuprofen                           |   Rp  25,000,00   |   60ml  |";
	                        cout<<"\n| 3. |  Tempra Paracetamol                         |   Rp  48,000,00   |   60ml  |";
	                        cout<<"\n|--------------------------------------------------------------------------------|";
	                        cout<<"\n|       Plester Kompres :                                                        |";
	                        cout<<"\n|--------------------------------------------------------------------------------|";
	                        cout<<"\n| 4. |  Pure Kids Fever Free                       |   Rp   5,000,00   |  1 pcs  |";
	                        cout<<"\n| 5. |  Kool Fever Baby                            |   Rp   5,000,00   |  1 pcs  |";
	                        cout<<"\n| 6. |  Bye Bye Fever Anak                         |   Rp   7,000,00   |  1 pcs  |";
	                        cout<<"\n|================================================================================|";
	                        cout<<"\n\n  Masukkan obat yang Anda inginkan : ";
	                        cin>> demam;
	                        cout<<"\n----------------------------------------------------------------------------------";
	                        cout<<"\n\n  Jumlah obat yang ingin dibeli : ";
	                        cin>> jumlah;

	                        switch(demam){
	                            case 1 :
	                                harga = 20000;
	                                total = harga * jumlah;
	                                system("cls");
	                                cout<<"\n\n\n ------------------------------------------------";
	                                cout<<"\n|   Harga " << jumlah << " Hufagripp TMP adalah Rp " << total << ",00    |";
	                                cout<<"\n --  --------------------------------------------";
	                                cout<<"\n   |/";
	                                cout<<"\n\n|=======================================================================================|";
	                                cout<<"\n|                                        HUFAGRIPP TMP                                  |";
	                                cout<<"\n|=======================================================================================|";
	                                cout<<"\n| INDIKASI :                                                                            |";
	                                cout<<"\n| Untuk menurunkan panas (demam), meringankan nyeri ringan sampai sedang, antara lain   |";
	                                cout<<"\n| sakit gigi, sakit kepala.                                                             |";
	                                cout<<"\n|---------------------------------------------------------------------------------------|";
	                                cout<<"\n| DOSIS :                                                                               |";
	                                cout<<"\n| Dewasa (Usia > 12 tahun)                                                              |";
	                                cout<<"\n| 3 - 4 kali sehari (sesudah makan)           |   2   sendok takar   |   (10   ml)   |  |";
	                                cout<<"\n| Anak-Anak (Usia 8 - 12 tahun)                                                         |";
	                                cout<<"\n| 3 - 4 kali sehari (sesudah makan)           |   2   sendok takar   |   (10   ml)   |  |";
	                                cout<<"\n| Anak-Anak (Usia 3 - 7 tahun)                                                          |";
	                                cout<<"\n| 3 - 4 kali sehari (sesudah makan)           |   1   sendok takar   |   ( 5   ml)   |  |";
	                                cout<<"\n| Anak-Anak (Usia 1 - 2 tahun)                                                          |";
	                                cout<<"\n| 3 - 4 kali sehari (sesudah makan)           |   0.5 sendok takar   |   ( 2.5 ml)   |  |";
	                                cout<<"\n|=======================================================================================|";
	                            	break;
	                            case 2 :
	                                harga = 25000;
	                                total = harga * jumlah;
	                                system("cls");
	                                cout<<"\n\n\n ---------------------------------------------------";
	                                cout<<"\n|   Harga " << jumlah << " Proris Ibuprofen adalah Rp " << total << ",00    |";
	                                cout<<"\n --  -----------------------------------------------";
	                                cout<<"\n   |/";
	                                cout<<"\n\n|=======================================================================================|";
	                                cout<<"\n|                                 PRORIS IBUPROFEN                                      |";
	                                cout<<"\n|=======================================================================================|";
	                                cout<<"\n| INDIKASI :                                                                            |";
	                                cout<<"\n| Nyeri ringan sampai sedang antara lain nyeri pada penyakit gigi, nyeri pasca bedah,   |";
	                                cout<<"\n| sakit kepala, gejala artritis reumatoid, gejala osteoartritis, gejala juvenile        |";
	                                cout<<"\n| artritis reumatoid, menurunkan demam pada anak.                                       |";
	                                cout<<"\n|---------------------------------------------------------------------------------------|";
	                                cout<<"\n| DOSIS :                                                                               |";
	                                cout<<"\n| Dewasa (Usia > 12 tahun)                                                              |";
	                                cout<<"\n| 3 - 4 kali sehari (sesudah makan)           |   1    sendok takar   |   (200 mg)   |  |";
	                                cout<<"\n| Anak-Anak (Usia 8 - 12 tahun)                                                         |";
	                                cout<<"\n| 3 - 4 kali sehari (sesudah makan)           |   1    sendok takar   |   (200 mg)   |  |";
	                                cout<<"\n| Anak-Anak (Usia 3 - 7 tahun)                                                          |";
	                                cout<<"\n| 3 - 4 kali sehari (sesudah makan)           |   0.5  sendok takar   |   (100 mg)   |  |";
	                                cout<<"\n| Anak-Anak (Usia 1 - 2 tahun)                                                          |";
	                                cout<<"\n| 3 - 4 kali sehari (sesudah makan)           |   0.25 sendok takar   |   ( 50 mg)   |  |";
	                                cout<<"\n|=======================================================================================|";
	                            	break;
	                            case 3 :
	                                harga = 48000;
	                                total = harga * jumlah;
	                                system("cls");
	                                cout<<"\n\n\n -----------------------------------------------------";
	                                cout<<"\n|   Harga " << jumlah << " Tempra Paracetamol adalah Rp " << total << ",00    |";
	                                cout<<"\n --  -------------------------------------------------";
	                                cout<<"\n   |/";
	                                cout<<"\n\n|=======================================================================================|";
	                                cout<<"\n|                                  TEMPRA PARACETAMOL                                   |";
	                                cout<<"\n|=======================================================================================|";
	                                cout<<"\n| INDIKASI :                                                                            |";
	                                cout<<"\n| Untuk meredakan sakit kepala, sakit gigi, sakit pada otot, nyeri yang mengganggu, dan |";
	                                cout<<"\n| menurunkan demam yang menyertai flu/influenza serta demam sesudah vaksinasi.          |";
	                                cout<<"\n|---------------------------------------------------------------------------------------|";
	                                cout<<"\n| DOSIS :                                                                               |";
	                                cout<<"\n| Anak-Anak (Usia 6 - 8 tahun)                                                          |";
	                                cout<<"\n| Setiap 4 jam, tetapi tidak lebih dari 5x sehari |  2   sendok takar  |  (10   ml)  |  |";
	                                cout<<"\n| Anak-Anak (Usia 4 - 5 tahun)                                                          |";
	                                cout<<"\n| Setiap 4 jam, tetapi tidak lebih dari 5x sehari |  1.5 sendok takar  |  ( 7.5 ml)  |  |";
	                                cout<<"\n| Anak-Anak (Usia 2 - 3 tahun)                                                          |";
	                                cout<<"\n| Setiap 4 jam, tetapi tidak lebih dari 5x sehari |  1   sendok takar  |  ( 5   ml)  |  |";
	                                cout<<"\n|---------------------------------------------------------------------------------------|";
	                                cout<<"\n| ATURAN PAKAI :                                                                        |";
	                                cout<<"\n| Dikonsumsi sebelum atau sesudah makan                                                 |";
	                                cout<<"\n|=======================================================================================|";
	                            	break;
	                            case 4 :
	                                harga = 5000;
	                                total = harga * jumlah;
	                                system("cls");
	                                cout<<"\n\n\n ------------------------------------------------------";
	                                cout<<"\n|   Harga " << jumlah << " Pure Kids Fever Free adalah Rp " << total << ",00    |";
	                                cout<<"\n --  --------------------------------------------------";
	                                cout<<"\n   |/";
	                                cout<<"\n\n|=======================================================================================|";
	                                cout<<"\n|                                 PURE KIDS FEVER FREE                                  |";
	                                cout<<"\n|=======================================================================================|";
	                                cout<<"\n| INDIKASI :                                                                            |";
	                                cout<<"\n| Plester kompres untuk membantu menurunkan suhu tubuh anak saat terjadi demam.         |";
	                                cout<<"\n|---------------------------------------------------------------------------------------|";
	                                cout<<"\n| DOSIS :                                                                               |";
	                                cout<<"\n| Sesuai kebutuhan, dapat bertahan selama 8 jam dengan efek dingin.                     |";
	                                cout<<"\n|---------------------------------------------------------------------------------------|";
	                                cout<<"\n| ATURAN PAKAI :                                                                        |";
	                                cout<<"\n| Sobek atau potong bagian atas kemasan dan keluarkan lembaran patch. Buka lapisan      |";
	                                cout<<"\n| pelindung transparan pada lembaran cooling patch. Bersihkan dan keringkan area yang   |";
	                                cout<<"\n| akan ditempelkan. Tempelkan pada bagian tubuh yang sudah dibersihkan.                 |";
	                                cout<<"\n|=======================================================================================|";
	                            	break;
	                            case 5 :
	                                harga = 5000;
	                                total = harga * jumlah;
	                                system("cls");
	                                cout<<"\n\n\n -------------------------------------------------";
	                                cout<<"\n|   Harga " << jumlah << " Kool Fever Baby adalah Rp " << total << ",00    |";
	                                cout<<"\n --  ---------------------------------------------";
	                                cout<<"\n   |/";
	                                cout<<"\n\n|=======================================================================================|";
	                                cout<<"\n|                                    KOOL FEVER BABY                                    |";
	                                cout<<"\n|=======================================================================================|";
	                                cout<<"\n| INDIKASI :                                                                            |";
	                                cout<<"\n| Plester kompres yang digunakan untuk membantu menurunkan demam, sakit kepala, dan     |";
	                                cout<<"\n| sakit gigi pada bayi.                                                                 |";
	                                cout<<"\n|---------------------------------------------------------------------------------------|";
	                                cout<<"\n| DOSIS :                                                                               |";
	                                cout<<"\n| Sesuai kebutuhan, dapat bertahan selama 6 jam dengan sensasi dingin.                  |";
	                                cout<<"\n|---------------------------------------------------------------------------------------|";
	                                cout<<"\n| ATURAN PAKAI :                                                                        |";
	                                cout<<"\n| Lepaskan lapisan transparan dan tempelkan permukaan yang mengandung gel pada kulit    |";
	                                cout<<"\n| yang kering dan bersih tanpa mengenai rambut. Bila berkeringat, gunakan setelah       |";
	                                cout<<"\n| membersihkan keringat dengan baik. Agar lebih efektif dan higienis, gunakan Kool Fever|";
	                                cout<<"\n| untuk satu kali penggunaan saja.                                                      |";
	                                cout<<"\n|=======================================================================================|";
	                            	break;
	                            case 6 :
	                                harga = 7000;
	                                total = harga * jumlah;
	                                system("cls");
	                                cout<<"\n\n\n ----------------------------------------------------";
	                                cout<<"\n|   Harga " << jumlah << " Bye Bye Fever Anak adalah Rp " << total << ",00    |";
	                                cout<<"\n --  ------------------------------------------------";
	                                cout<<"\n   |/";
	                                cout<<"\n\n|=======================================================================================|";
	                                cout<<"\n|                                  BYE BYE FEVER ANAK                                   |";
	                                cout<<"\n|=======================================================================================|";
	                                cout<<"\n| INDIKASI :                                                                            |";
	                                cout<<"\n| Plester kompres yang digunakan pada anak untuk meringankan efek tidak nyaman karena   |";
	                                cout<<"\n| demam, sakit gigi, sakit kepala.                                                      |";
	                                cout<<"\n|---------------------------------------------------------------------------------------|";
	                                cout<<"\n| DOSIS :                                                                               |";
	                                cout<<"\n| Setiap 10 jam, bila perlu.                                                            |";
	                                cout<<"\n|---------------------------------------------------------------------------------------|";
	                                cout<<"\n| ATURAN PAKAI :                                                                        |";
	                                cout<<"\n| Lepaskan lapisan transparan dan tempelkan permukaan yang melekat pada daerah dahi/    |";
	                                cout<<"\n| pipi/punggung/bagian yang nyeri. Patch diganti setiap 10 jam.                         |";
	                                cout<<"\n|=======================================================================================|";
	                            	break;
	                            default :
	                                cout<<"\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat demam anak.";
	                                system("cls");
	                            	goto DemamAnak;
	                        }
                    }
                break;

                case 4 :
                    Nyeri:

                        cout<<"\n\n\n\nRekomendasi obat di bawah ini sudah termasuk untuk mengobati nyeri otot,";
                        cout<<"\nnyeri sendi, nyeri pinggung, hingga pegal linu.\n";
                        cout<<"\n\n\n|================================================================================|";
                        cout<<"\n|                             REKOMENDASI OBAT NYERI                             |";
                        cout<<"\n|================================================================================|";
                        cout<<"\n|       Tablet:                                                                  |";
                        cout<<"\n|--------------------------------------------------------------------------------|";
                        cout<<"\n| 1. |  Neo Rheumacyl                         |  Rp  10,000,00   |   20 tablet   |";
                        cout<<"\n| 2. |  Neurobion Forte                       |  Rp  45,000,00   |   10 tablet   |";
                        cout<<"\n| 3. |  Viostin DS                            |  Rp  75,000,00   |   10 tablet   |";
                        cout<<"\n|--------------------------------------------------------------------------------|";
                        cout<<"\n|       Koyo :                                                                   |";
                        cout<<"\n|--------------------------------------------------------------------------------|";
                        cout<<"\n| 4. |  Salonpas Koyo                         |  Rp   7,000,00   |    1 sachet   |";
                        cout<<"\n| 5. |  Hansaplast Koyo Hangat                |  Rp   9,000,00   |    1 sachet   |";
                        cout<<"\n| 6. |  Counterpain Patch                     |  Rp  55,000,00   |     4 pcs     |";
                        cout<<"\n|--------------------------------------------------------------------------------|";
                        cout<<"\n|       Krim :                                                                   |";
                        cout<<"\n|--------------------------------------------------------------------------------|";
                        cout<<"\n| 7. |  Hot in Cream                          |  Rp  23,000,00   |    60 gram    |";
                        cout<<"\n| 8. |  Voltaren                              |  Rp  57,000,00   |    10 gram    |";
                        cout<<"\n| 9. |  Counterpain Cream                     |  Rp  45,000,00   |    30 gram    |";
                        cout<<"\n|================================================================================|";
                        cout<<"\n\n  Masukkan obat yang Anda inginkan : ";
                        cin>> nyeri;
                        cout<<"\n----------------------------------------------------------------------------------";
                        cout<<"\n\n  Jumlah obat yang ingin dibeli : ";
                        cin>> jumlah;
                        cout<<"\n----------------------------------------------------------------------------------";

	                    switch(nyeri){
	                        case 1 :
	                            harga = 10000;
	                            total = harga * jumlah;
	                            cout<<"\n\n\n --------------------------------------------------";
	                            cout<<"\n|     Harga " << jumlah << " Neo Rheumacyl adalah Rp " << total << ",00    |";
	                            cout<<"\n --  ----------------------------------------------";
	                            cout<<"\n   |/";
	                            cout<<"\n\n|========================================================================================|";
	                            cout<<"\n|                                      NEO RHEUMACYL                                     |";
	                            cout<<"\n|========================================================================================|";
	                            cout<<"\n| INDIKASI :                                                                             |";
	                            cout<<"\n| Obat untuk meredakan nyeri otot, nyeri sendi, dan pegal linu.                          |";
	                            cout<<"\n|----------------------------------------------------------------------------------------|";
	                            cout<<"\n| DOSIS:                                                                                 |";
	                            cout<<"\n| Dewasa (Usia > 12 tahun)                                                               |";
	                            cout<<"\n| 3-4 kali sehari (sesudah makan)                                    |   1 tablet   |    |";
	                            cout<<"\n|========================================================================================|";
	                            break;
	                        case 2 :
	                            harga = 45000;
	                            total = harga * jumlah;
	                            cout<<"\n\n\n ---------------------------------------------------";
	                            cout<<"\n|     Harga " << jumlah << " Neorobion Forte adalah Rp " << total << ",00   |";
	                            cout<<"\n --  -----------------------------------------------";
	                            cout<<"\n   |/";
	                            cout<<"\n\n|========================================================================================|";
	                            cout<<"\n|                                      NEUROBION FORTE                                   |";
	                            cout<<"\n|========================================================================================|";
	                            cout<<"\n| INDIKASI :                                                                             |";
	                            cout<<"\n| Obat untuk mengatasoi defisiensi vitamin B dan menjaga sistem sar.                     |";
	                            cout<<"\n|----------------------------------------------------------------------------------------|";
	                            cout<<"\n| DOSIS:                                                                                 |";
	                            cout<<"\n| Dewasa (Usia > 12 tahun)                                                               |";
	                            cout<<"\n| 1 kali sehari (sesudah makan)                                      |   1 tablet   |    |";
	                            cout<<"\n|========================================================================================|";
	                            break;
	                        case 3 :
	                            harga = 75000;
	                            total = harga * jumlah;
	                            cout<<"\n\n\n -----------------------------------------------";
	                            cout<<"\n|     Harga " << jumlah << " Viostin DS adalah Rp " << total << ",00    |";
	                            cout<<"\n --  -------------------------------------------";
	                            cout<<"\n   |/";
	                            cout<<"\n\n|========================================================================================|";
	                            cout<<"\n|                                       VIOSTIN DS                                       |";
	                            cout<<"\n|========================================================================================|";
	                            cout<<"\n| INDIKASI :                                                                             |";
	                            cout<<"\n| Obat untuk mengatasi kaku dan nyeri sendi, mengurangi dan menghambat peradangan sendi. |";
	                            cout<<"\n|----------------------------------------------------------------------------------------|";
	                            cout<<"\n| DOSIS:                                                                                 |";
	                            cout<<"\n| Dewasa (Usia > 12 tahun)                                                               |";
	                            cout<<"\n| 1 kali sehari (sesudah makan)                                       |  1 tablet   |    |";
	                            cout<<"\n|========================================================================================|";
	                            break;
	                        case 4 :
	                            harga = 7000;
	                            total = harga * jumlah;
	                            cout<<"\n\n\n -------------------------------------------------";
	                            cout<<"\n|     Harga " << jumlah << " Salonpas Koyo adalah Rp " << total << ",00    |";
	                            cout<<"\n --  ---------------------------------------------";
	                            cout<<"\n   |/";
	                            cout<<"\n\n|========================================================================================|";
	                            cout<<"\n|                                      SALONPAS KOYO                                     |";
	                            cout<<"\n|========================================================================================|";
	                            cout<<"\n| INDIKASI :                                                                             |";
	                            cout<<"\n| Obat untuk meredakan rasa nyeri otot, sakit otot leher, pegal.                         |";
	                            cout<<"\n|----------------------------------------------------------------------------------------|";
	                            cout<<"\n| DOSIS:                                                                                 |";
	                            cout<<"\n| Dewasa (Usia > 12 tahun)                                                               |";
	                            cout<<"\n| Tempel di area yang sakit                         |   diganti 2-3 kali per hari   |    |";
	                            cout<<"\n|========================================================================================|";
	                            break;
	                        case 5 :
	                            harga = 9000;
	                            total = harga * jumlah;
	                            cout<<"\n\n\n ----------------------------------------------------------";
	                            cout<<"\n|     Harga " << jumlah << " Hansaplast Koyo Hangat adalah Rp " << total << ",00    |";
	                            cout<<"\n --  ------------------------------------------------------";
	                            cout<<"\n   |/";
	                            cout<<"\n\n|========================================================================================|";
	                            cout<<"\n|                                 HANSAPLAST KOYO HANGAT                                 |";
	                            cout<<"\n|========================================================================================|";
	                            cout<<"\n| INDIKASI :                                                                             |";
	                            cout<<"\n| Obat untuk meredakan rasa nyeri otot, sakit otot leher, pegal.                         |";
	                            cout<<"\n|----------------------------------------------------------------------------------------|";
	                            cout<<"\n| DOSIS:                                                                                 |";
	                            cout<<"\n| Dewasa (Usia > 12 tahun)                                                               |";
	                            cout<<"\n| Tempel di area yang sakit                         |   diganti 2-3 kali per hari   |    |";
	                            cout<<"\n|========================================================================================|";
	                            break;
	                        case 6 :
	                            harga = 55000;
	                            total = harga * jumlah;
	                            cout<<"\n\n\n ------------------------------------------------------";
	                            cout<<"\n|     Harga " << jumlah << " Counterpain Patch adalah Rp " << total << ",00    |";
	                            cout<<"\n --  --------------------------------------------------";
	                            cout<<"\n   |/";
	                            cout<<"\n\n|========================================================================================|";
	                            cout<<"\n|                                    COUNTERPAIN PATCH                                   |";
	                            cout<<"\n|========================================================================================|";
	                            cout<<"\n| INDIKASI :                                                                             |";
	                            cout<<"\n| Sebagai pereda nyeri otot dan nyeri sendi pada bagian-bagian tubuh.                    |";
	                            cout<<"\n|----------------------------------------------------------------------------------------|";
	                            cout<<"\n| DOSIS:                                                                                 |";
	                            cout<<"\n| Dewasa (Usia > 12 tahun)                                                               |";
	                            cout<<"\n| Tempel di area yang sakit                         |   diganti 2-3 kali per hari   |    |";
	                            cout<<"\n|========================================================================================|";
	                            break;
	                        case 7 :
	                            harga = 23000;
	                            total = harga * jumlah;
	                            cout<<"\n\n\n -------------------------------------------------";
	                            cout<<"\n|     Harga " << jumlah << " Hot In Cream adalah Rp " << total << ",00    |";
	                            cout<<"\n --  ---------------------------------------------";
	                            cout<<"\n   |/";
	                            cout<<"\n\n|========================================================================================|";
	                            cout<<"\n|                                      HOT IN CREAM                                      |";
	                            cout<<"\n|========================================================================================|";
	                            cout<<"\n| INDIKASI :                                                                             |";
	                            cout<<"\n| Untuk membantu meringankan pegal-pegal, nyeri sendi, nyeri otot, masuk angin.          |";
	                            cout<<"\n|----------------------------------------------------------------------------------------|";
	                            cout<<"\n| DOSIS:                                                                                 |";
	                            cout<<"\n| Dewasa (Usia > 12 tahun)                                                               |";
	                            cout<<"\n| Hanya untuk penggunaan luar                                                            |";
	                            cout<<"\n|========================================================================================|";
	                            break;
	                        case 8 :
	                            harga = 57000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n ---------------------------------------------";
	                            cout << "\n|     Harga " << jumlah << " Voltaren adalah Rp " << total << ",00     |";
	                            cout << "\n --  -----------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|========================================================================================|";
	                            cout << "\n|                                        VOLTAREN                                        |";
	                            cout << "\n|========================================================================================|";
	                            cout << "\n| INDIKASI :                                                                             |";
	                            cout << "\n| Untuk membantu meringankan pegal-pegal, nyeri sendi, nyeri otot, masuk angin.          |";
	                            cout << "\n|----------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS:                                                                                 |";
	                            cout << "\n| Dewasa (Usia > 12 tahun)                                                               |";
	                            cout << "\n| Hanya untuk penggunaan luar                                                            |";
	                            cout << "\n|========================================================================================|";
	                            break;
	                        case 9 :
	                            harga = 45000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n ------------------------------------------------------";
								cout << "\n|     Harga " << jumlah << " Counterpain Cream adalah Rp " << total << ",00     |";
	                            cout << "\n --  --------------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|========================================================================================|";
	                            cout << "\n|                                   COUNTERPAIN CREAM                                    |";
	                            cout << "\n|========================================================================================|";
	                            cout << "\n| INDIKASI :                                                                             |";
	                            cout << "\n| Digunakan untuk meredakan nyeri otot dan nyeri sendi ringan akibat arthritis.          |";
	                            cout << "\n|----------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS:                                                                                 |";
	                            cout << "\n| Dewasa (Usia > 12 tahun)                                                               |";
	                            cout << "\n| Hanya untuk penggunaan luar                                                            |";
	                            cout << "\n|========================================================================================|";
	                            break;
	                        default :
	                            cout << "\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat nyeri.";
	                            system("cls");
	                        	goto Nyeri;
                    	}
                break;

                case 5 :
                    SakitPerut:

                        cout << "\n\n\n|================================================================================|";
                        cout << "\n|                             REKOMENDASI OBAT MAAG                              |";
                        cout << "\n|================================================================================|";
                        cout << "\n| 1. |  Promag                               |   Rp   8,000,00   |   12 tablet   |";
                        cout << "\n| 2. |  Polysilane                           |   Rp  26,000,00   |   100  ml     |";
                        cout << "\n|================================================================================|";
                        cout << "\n|                           REKOMENDASI OBAT SEMBELIT                            |";
                        cout << "\n|================================================================================|";
                        cout << "\n| 3. |  Dulcolax                             |   Rp  21,000,00   |   10 tablet   |";
                        cout << "\n| 4. |  Microlax                             |   Rp  25,000,00   |     5  ml     |";
                        cout << "\n| 5. |  Vegeta scrubber                      |   Rp  14,000,00   |     6  pcs    |";
                        cout << "\n|================================================================================|";
                        cout << "\n|                             REKOMENDASI OBAT DIARE                             |";
                        cout << "\n|================================================================================|";
                        cout << "\n| 6. |  Neo entrostop                        |   Rp   8,000,00   |   12 tablet   |";
                        cout << "\n| 7. |  Diapet                               |   Rp   6,000,00   |    4 tablet   |";
                        cout << "\n|================================================================================|";
                        cout << "\n|                          REKOMENDASI OBAT NYERI HAID                           |";
                        cout << "\n|================================================================================|";
                        cout << "\n| 8. |  Femimax                              |   Rp   3,000,00   |    4 tablet   |";
                        cout << "\n| 9. |  Panadol Menstrual                    |   Rp  55,000,00   |   10 tablet   |";
                        cout << "\n|================================================================================|";
                        cout << "\n\n  Masukkan obat yang Anda inginkan : ";
                        cin >> sakit_perut;
                        cout << "\n----------------------------------------------------------------------------------";
                        cout << "\n\n  Jumlah obat yang ingin dibeli : ";
                        cin >> jumlah;

	                    switch(sakit_perut){
	                        case 1 :
	                            harga = 8000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n ------------------------------------------";
								cout << "\n|     Harga " << jumlah << " Promag adalah Rp " << total << ",00     |";
	                            cout << "\n --  --------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|========================================================================================|";
	                            cout << "\n|                                   PROMAG                                               |";
	                            cout << "\n|========================================================================================|";
	                            cout << "\n| INDIKASI :                                                                             |";
	                            cout << "\n| Ditujukan untuk masalah lambung, terutama asam lambung.                                |";
	                            cout << "\n|----------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS:                                                                                 |";
	                            cout << "\n| Dewasa (Usia > 12 tahun)                                                               |";
	                            cout << "\n| 3-4 kali sehari (sesudah makan)                              |   1   - 2 tablet   |    |";
	                            cout << "\n| Anak-Anak (Usia 6 - 12 tahun)                                                          |";
	                            cout << "\n| 3 - 4 kali sehari (sesudah makan)                            |   0.5 - 1 tablet   |    |";
	                            cout << "\n|========================================================================================|";
	                            break;
	                        case 2 :
	                            harga = 26000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n -----------------------------------------------";
                                cout << "\n|     Harga " << jumlah << " Polysilane adalah Rp " << total << ",00     |";
	                            cout << "\n --  -------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|========================================================================================|";
	                            cout << "\n|                                   POLYSILANE                                           |";
	                            cout << "\n|========================================================================================|";
	                            cout << "\n| INDIKASI :                                                                             |";
	                            cout << "\n| Ditujukan untuk masalah lambung, terutama asam lambung.                                |";
	                            cout << "\n|----------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS:                                                                                 |";
	                            cout << "\n| Dewasa (Usia > 12 tahun)                                                               |";
	                            cout << "\n| 3 - 4 kali sehari (sesudah makan)                             |  1   - 2 tablet   |    |";
	                            cout << "\n| Anak-Anak (Usia 6 - 12 tahun)                                                          |";
	                            cout << "\n| 3 - 4 kali sehari (sesudah makan)                             |  0.5 - 1 tablet   |    |";
	                            cout << "\n|========================================================================================|";
	                            break;
	                        case 3 :
	                            harga = 21000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n --------------------------------------------------------------------------";
                                cout << "\n|     Harga " << jumlah << " Dulcolax adalah Rp " << total << ",00     |";
	                            cout << "\n --  -----------------------------------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|========================================================================================|";
	                            cout << "\n|                                    DULCOLAX                                            |";
	                            cout << "\n|========================================================================================|";
	                            cout << "\n| INDIKASI :                                                                             |";
	                            cout << "\n| Obat untuk mengatasi sembelit atau susah buang air besar.                              |";
	                            cout << "\n|----------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS:                                                                                 |";
	                            cout << "\n| Dewasa (Usia > 10 tahun)                                                               |";
	                            cout << "\n| 1 kali sehari (sesudah makan)                                  |   1 - 2 tablet   |    |";
	                            cout << "\n| Anak-Anak (Usia 6-10 tahun)                                                            |";
	                            cout << "\n| 1 kali sehari (sesudah makan)                                  |   1     tablet   |    |";
	                            cout << "\n|========================================================================================|";
	                            break;
	                        case 4 :
	                            harga = 25000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n ---------------------------------------------";
                                cout << "\n|     Harga " << jumlah << " Microlax adalah Rp " << total << ",00     |";
	                            cout << "\n --  -----------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|========================================================================================|";
	                            cout << "\n|                                     MICROLAX                                           |";
	                            cout << "\n|========================================================================================|";
	                            cout << "\n| INDIKASI :                                                                             |";
	                            cout << "\n| Obat untuk mengatasi sembelit atau susah buang air besar.                              |";
	                            cout << "\n|----------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS:                                                                                 |";
	                            cout << "\n| Usia > 3 tahun                                                                         |";
	                            cout << "\n| 1 tabung                                                                               |";
	                            cout << "\n| Usia < 3 tahun                                                                         |";
	                            cout << "\n| 0.5 tabung                                                                             |";
	                            cout << "\n|========================================================================================|";
	                            break;
	                        case 5 :
	                            harga = 14000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n ----------------------------------------------------";
                                cout << "\n|     Harga " << jumlah << " Vegeta Scrubber adalah Rp " << total << ",00     |"; 
	                            cout << "\n --  ------------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|========================================================================================|";
	                            cout << "\n|                                     VEGETA SCRUBBER                                    |";
	                            cout << "\n|========================================================================================|";
	                            cout << "\n| INDIKASI :                                                                             |";
	                            cout << "\n| Membantu memenuhi kebutuhan serat.                                                     |";
	                            cout << "\n|----------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS:                                                                                 |";
	                            cout << "\n| Dewasa (Usia > 12 tahun)                                                               |";
	                            cout << "\n| 1-2 kali sehari                                                    |   1 sachet   |    |";
	                            cout << "\n|========================================================================================|";
	                            break;
	                        case 6 :
	                            harga = 8000;
	                            total = harga * jumlah;
	                            cout <<"\n\n\n -------------------------------------------------";
                                cout << "\n|     Harga " << jumlah << " Neo Entrostop adalah Rp " << total << ",00     |";
	                            cout << "\n --  ---------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|========================================================================================|";
	                            cout << "\n|                                     NEO ENTROSTOP                                      |";
	                            cout << "\n|========================================================================================|";
	                            cout << "\n| INDIKASI :                                                                             |";
	                            cout << "\n| Bermanfaat untuk mengatasi diare.                                                      |";
	                            cout << "\n|----------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS:                                                                                 |";
	                            cout << "\n| Dewasa (Usia > 12 tahun)                                                               |";
	                            cout << "\n| 3 - 4 kali sehari (sesudah makan)                      |   max 12 tablet sehari   |    |";
	                            cout << "\n| Anak-Anak (Usia 6 - 12 tahun)                                                          |";
	                            cout << "\n| 3 kali sehari (sesudah makan)                          |   max  6 tablet sehari   |    |";
	                            cout << "\n|========================================================================================|";
	                            break;
	                        case 7 :
	                            harga = 6000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n ------------------------------------------------------------------------";
                                cout << "\n|     Harga " << jumlah << " Diapet adalah Rp " << total << ",00     |";
	                            cout << "\n --  --------------------------------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|========================================================================================|";
	                            cout << "\n|                                        DIAPET                                          |";
	                            cout << "\n|========================================================================================|";
	                            cout << "\n| INDIKASI :                                                                             |";
	                            cout << "\n| Obat yang digunakan untuk mengobati mencret atau diare.                                |";
	                            cout << "\n|----------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS:                                                                                 |";
	                            cout << "\n| Dewasa (Usia > 12 tahun)                                                               |";
	                            cout << "\n| 2 - 3 kali sehari (sesudah makan)                                  |   2 tablet   |    |";
	                            cout << "\n|========================================================================================|";
	                            break;
	                        case 8 :
	                            harga = 3000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n -------------------------------------------------------------------------";
                                cout << "\n|     Harga " << jumlah << " Feminax adalah Rp " << total << ",00     |";
	                            cout << "\n --  ----------------------------------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n\n|========================================================================================|";
	                            cout << "\n|                                        FEMINAX                                         |";
	                            cout << "\n|========================================================================================|";
	                            cout << "\n| INDIKASI :                                                                             |";
	                            cout << "\n| Untuk meredakan nyeri haid (dismenore) dan kram perut.                                 |";
	                            cout << "\n|----------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS:                                                                                 |";
	                            cout << "\n| Dewasa (Usia > 12 tahun)                                                               |";
	                            cout << "\n| 2 - 3 kali sehari (sesudah makan)                                  |   2 tablet   |    |";
	                            cout << "\n| Anak-Anak (Usia 6 - 12 tahun)                                                          |";
	                            cout << "\n| 3 kali sehari (sesudah makan)                                      |   1 tablet   |    |";
	                            cout << "\n|========================================================================================|";
	                            break;
	                        case 9 :
	                            harga = 55000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n ------------------------------------------------------";
                                cout << "\n|     Harga " << jumlah << " Panadol Menstrual adalah Rp " << total << ",00     |";
	                            cout << "\n --  --------------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n\n|========================================================================================|";
	                            cout << "\n|                                 PANADOL MENSTRUAL                                      |";
	                            cout << "\n|========================================================================================|";
	                            cout << "\n| INDIKASI :                                                                             |";
	                            cout << "\n| Untuk meredakan nyeri haid (dismenore) dan kram perut.                                 |";
	                            cout << "\n|----------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS:                                                                                 |";
	                            cout << "\n| Dewasa (Usia > 12 tahun)                                                               |";
	                            cout << "\n| 3 kali sehari (sesudah makan)                                      |   2 tablet   |    |";
	                            cout << "\n| Anak-Anak (Usia 6 - 12 tahun)                                                          |";
	                            cout << "\n| 3 kali sehari (sesudah makan)                                      |   1 tablet   |    |";
	                            cout << "\n|========================================================================================|";
	                            break;
	                        default :
	                            cout << "\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat sakit perut.";
	                            system("cls");
	                        	goto SakitPerut;
	                    }
                break;

                case 6 :
                    Cacingan:

                        cout << "\n\n\n|================================================================================|";
                        cout << "\n|                            REKOMENDASI OBAT CACINGAN                           |";
                        cout << "\n|================================================================================|";
                        cout << "\n|       Tablet:                                                                  |";
                        cout << "\n|--------------------------------------------------------------------------------|";
                        cout << "\n| 1. |  Vermox                                |   Rp  21,000,00   |   1 tablet   |";
                        cout << "\n| 2. |  Vermoran                              |   Rp   9,000,00   |   2 tablet   |";
                        cout << "\n| 3. |  Combantrin                            |   Rp  18,000,00   |   2 tablet   |";
                        cout << "\n| 4. |  Konvermex                             |   Rp  13,000,00   |   2 tablet   |";
                        cout << "\n|--------------------------------------------------------------------------------|";
                        cout << "\n|       Sirup :                                                                  |";
                        cout << "\n|--------------------------------------------------------------------------------|";
                        cout << "\n| 5. |  Combantrin                            |   Rp  20,000,00   |     10ml     |";
                    	cout << "\n| 6. |  Konvermex                             |   Rp  15,000,00   |     10ml     |";
                        cout << "\n|================================================================================|";
                        cout << "\n\n  Masukkan obat yang Anda inginkan : ";
                        cin >> cacingan;
                        cout << "\n----------------------------------------------------------------------------------";
                        cout << "\n\n  Jumlah obat yang ingin dibeli : ";
                        cin >> jumlah;

	                    switch(cacingan){
	                        case 1 :
	                            harga = 21000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n --------------------------------------------------------------------------";
                                cout << "\n|     Harga " << jumlah << " Vermox adalah Rp " << total << ",00     |";
	                            cout << "\n --  ----------------------------------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|========================================================================================|";
	                            cout << "\n|                                        VERMOX                                          |";
	                            cout << "\n|========================================================================================|";
	                            cout << "\n| INDIKASI :                                                                             |";
	                            cout << "\n| Obat yang digunakan untuk mengatasi penyakit cacingan.                                 |";
	                            cout << "\n|----------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS:                                                                                 |";
	                            cout << "\n| Dewasa (Usia > 12 tahun)                                                               |";
	                            cout << "\n| 3 kali sehari (sesudah makan)                                         |   100 mg   |   |";
	                            cout << "\n|========================================================================================|";
	                            break;
	                        case 2 :
	                            harga = 9000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n ----------------------------------------------------------------------------";
                                cout << "\n|     Harga " << jumlah << " Vermoran adalah Rp " << total << ",00     |";
	                            cout << "\n --  -------------------------------------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n\n|========================================================================================|";
	                            cout << "\n|                                        VERMORAN                                        |";
	                            cout << "\n|========================================================================================|";
	                            cout << "\n| INDIKASI :                                                                             |";
	                            cout << "\n| Obat yang digunakan untuk mengatasi penyakit cacingan.                                 |";
	                            cout << "\n|----------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS:                                                                                 |";
	                            cout << "\n| Dewasa (Usia > 12 tahun)                                                               |";
	                            cout << "\n| 2 kali sehari (sesudah makan)                                        |   100 mg   |    |";
	                            cout << "\n|========================================================================================|";
	                            break;
	                        case 3 :
	                            harga = 18000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n -----------------------------------------------";
                                cout << "\n|     Harga " << jumlah << " Combantrin adalah Rp " << total << ",00     |";
	                            cout << "\n --  ------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n\n|========================================================================================|";
	                            cout << "\n|                                        COMBANTRIN                                      |";
	                            cout << "\n|========================================================================================|";
	                            cout << "\n| INDIKASI :                                                                             |";
	                            cout << "\n| Obat yang digunakan untuk mengatasi penyakit cacingan.                                 |";
	                            cout << "\n|----------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS:                                                                                 |";
	                            cout << "\n| Usia 6-12 tahun                                                                        |";
	                            cout << "\n| per 6 bulan                                     |  1-2 tablet                          |";
	                            cout << "\n| Usia diatas 12 tahun                                                                   |";
	                            cout << "\n| per 6 bulan                                     |  2-3 tablet                          |";
	                            cout << "\n|========================================================================================|";
	                        	break;
	                        case 4 :
	                            harga = 13000;
	                            total = harga * jumlah;
	                        	cout << "\n\n\n -----------------------------------------------";
                                cout << "\n|     Harga " << jumlah << " Konvermex adalah Rp " << total << ",00     |";
	                            cout << "\n --  ------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n\n|========================================================================================|";
	                            cout << "\n|                                        KONVERMEX                                       |";
	                            cout << "\n|========================================================================================|";
	                            cout << "\n| INDIKASI :                                                                             |";
	                            cout << "\n| Obat yang digunakan untuk mengatasi penyakit cacingan.                                 |";
	                            cout << "\n|----------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS:                                                                                 |";
	                            cout << "\n| Usia 6-12 tahun                                                                        |";
	                            cout << "\n| 2-3 tablet                                          |  125 mg                          |";
	                            cout << "\n| Usia diatas 12 tahun                                                                   |";
	                            cout << "\n| 3-4 tablet                                          |  125 mg                          |";
	                            cout << "\n|========================================================================================|";
	                            break;
	                        case 5 :
	                            harga = 20000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n -----------------------------------------------";
                                cout << "\n|     Harga " << jumlah << " Combantrin adalah Rp " << total << ",00     |";
	                            cout << "\n --  -------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n\n|========================================================================================|";
	                            cout << "\n|                                        COMBANTRIN                                      |";
	                            cout << "\n|========================================================================================|";
	                            cout << "\n| INDIKASI :                                                                             |";
	                            cout << "\n| Obat yang digunakan untuk mengatasi penyakit cacingan.                                 |";
	                            cout << "\n|----------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS:                                                                                 |";
	                            cout << "\n| Usia 6-12 tahun                                                                        |";
	                            cout << "\n| per 6 bulan                                    |  1-2 sendok takar                     |";
	                            cout << "\n| Usia diatas 12 tahun                                                                   |";
	                            cout << "\n| per 6 bulan                                    |  3-4 sendok takar                     |";
	                            cout << "\n|========================================================================================|";
	                            break;
	                        case 6 :
	                            harga = 15000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n -----------------------------------------------";
                                cout << "\n|     Harga " << jumlah << " Konvermex adalah Rp " << total << ",00     |";
	                            cout << "\n --  -------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n\n|========================================================================================|";
	                            cout << "\n|                                        KONVERMEX                                       |";
	                            cout << "\n|========================================================================================|";
	                            cout << "\n| INDIKASI :                                                                             |";
	                            cout << "\n| Obat yang digunakan untuk mengatasi penyakit cacingan.                                 |";
	                            cout << "\n|----------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS:                                                                                 |";
	                            cout << "\n| Usia 6-12 tahun                                                                        |";
	                            cout << "\n| per 6 bulan                                      |  7,5-10 mg                          |";
	                            cout << "\n| Usia diatas 12 tahun                                                                   |";
	                            cout << "\n| per 6 bulan                                      |  10 mg                              |";
	                            cout << "\n|========================================================================================|";
	                            break;
	                        default :
	                            cout << "\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat cacingan.";
	                            system("cls");
	                        	goto Cacingan;
	                    }
                break;
	            
	            case 7 :
                    SakitKepala:

                        cout << "\n\n\nRekomendasi obat di bawah ini sudah termasuk untuk mengobati migrain, vertigo,";
                        cout << "\nsakit kepala sebelah, dan sejenisnya.\n";
                        cout << "\n\n\n|=============================================================================|";
                        cout << "\n|                        REKOMENDASI OBAT SAKIT KEPALA                        |";
                        cout << "\n|=============================================================================|";
                        cout << "\n|       Tablet :                                                              |";
                        cout << "\n|-----------------------------------------------------------------------------|";
                        cout << "\n| 1. |  Panadol Extra                          |   Rp 13,000,00   |  1 strip  |";
                        cout << "\n| 2. |  Oskadon                                |   Rp  2,000,00   |  1 strip  |";
                        cout << "\n| 3. |  Poldanmig                              |   Rp  3,000,00   |  1 strip  |";
                        cout << "\n|-----------------------------------------------------------------------------|";
                        cout << "\n|       Minyak :                                                              |";
                        cout << "\n|-----------------------------------------------------------------------------|";
                        cout << "\n| 4. |  Minyak Angin Polar Bear                |   Rp 42,000,00   |    40ml   |";
                        cout << "\n| 5. |  Tolak Angin Care                       |   Rp 13,000,00   |    10ml   |";
                        cout << "\n| 6. |  Fresh Care                             |   Rp 13,000,00   |    10ml   |";
                        cout << "\n|=============================================================================|";
                        cout << "\n\n  Masukkan obat yang Anda inginkan : ";
                        cin >> sakit_kepala;
                        cout << "\n-------------------------------------------------------------------------------";
                        cout << "\n\n  Jumlah obat yang ingin dibeli : ";
                        cin >> jumlah;
                        cout << "\n-------------------------------------------------------------------------------";

	                    switch(sakit_kepala){
	                        case 1 :
	                            harga = 13000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n ----------------------------------------------------------------------------------";
	                            cout << "\n|     Harga " << jumlah << " Panadol Extra adalah Rp " << total << ",00     |";
	                            cout << "\n --  -------------------------------------------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|===============================================================================|";
	                            cout << "\n|                                 PANADOL EXTRA                                 |";
	                            cout << "\n|===============================================================================|";
	                            cout << "\n| INDIKASI :                                                                    |";
	                            cout << "\n| Meringankan sakit kepala, migrain, demam, pusing.                             |";
	                            cout << "\n|-------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                       |";
	                            cout << "\n| 3-4 x sehari (setelah makan)                      |      1-2 kaplet      |    |";
	                            cout << "\n| Maksimal : 8 kaplet/24 jam                        |   Tidak Untuk Anak   |    |";
	                            cout << "\n|===============================================================================|";
	                            break;
	                        case 2 :
	                            harga = 2000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n -------------------------------------------";
	                            cout << "\n|     Harga " << jumlah << " Oskadon adalah Rp " << total << ",00     |";
	                            cout << "\n --  ---------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|================================================================================|";
	                            cout << "\n|                                OSKADON                                         |";
	                            cout << "\n|================================================================================|";
	                            cout << "\n| INDIKASI :                                                                     |";
	                            cout << "\n| Sakit kepala, migrain, nyeri otot dan nyeri sendi, nyeri saraf, sakit gigi     |";
	                            cout << "\n| dan demam yang berhubungan dengan flu dan masuk angin.                         |";
	                            cout << "\n|--------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                        |";
	                            cout << "\n| Dewasa (Usia > 12 tahun)                                                       |";
	                            cout << "\n| 3-4 kali sehari (sebelum makan)                      |     1-2 tablet     |    |";
	                            cout << "\n| Anak-Anak (Usia <= 12 tahun)                                                   |";
	                            cout << "\n| 3-4 kali sehari (sebelum makan)                      |   0.5 - 1 tablet   |    |";
	                            cout << "\n|================================================================================|";
	                            break;
	                        case 3 :
	                            harga = 3000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n ---------------------------------------------------------------------------";
                                cout << "\n|     Harga " << jumlah << " Poldanmig adalah Rp " << total << ",00     |";
	                            cout << "\n --  ------------------------------------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|================================================================================|";
	                            cout << "\n|                                   POLDANMIG                                    |";
	                            cout << "\n|================================================================================|";
	                            cout << "\n| INDIKASI :                                                                     |";
	                            cout << "\n| Meringankan sakit kepala, migrain, demam, pusing.                              |";
	                            cout << "\n|--------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                        |";
	                            cout << "\n| 3-4 kali sehari (sebelum makan)                    |      1-2 tablet      |    |";
	                            cout << "\n| Maksimal : 8 kaplet/24 jam                         |   Tidak Untuk Anak   |    |";
	                            cout << "\n|================================================================================|";
	                            break;
	                        case 4 :
	                            harga = 42000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n ------------------------------------------------------------------------------------------";
                                cout << "\n|     Harga " << jumlah << " Minyak Angin Polar Bear adalah Rp " << total << ",00     |";
	                            cout << "\n --  -----------------------------------------------------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|==================================================================================|";
	                            cout << "\n|                             MINYAK ANGIN POLAR BEAR                              |";
	                            cout << "\n|==================================================================================|";
	                            cout << "\n| INDIKASI :                                                                       |";
	                            cout << "\n| Meredakan sakit kepala, mual, sakit pinggang, untuk gigitan nyamuk, serangga dan |";
	                            cout << "\n| luka bakar ringan, melegakan hidung tersumbat dan sesak nafas serta meredakan    |";
	                            cout << "\n| gejala flu, masuk angin dan sakit perut.                                         |";
	                            cout << "\n|----------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                          |";
	                            cout << "\n| Sesuai kebutuhan. Oleskan pada bagian tubuh yang sakit atau membutuhkan.         |";
	                            cout << "\n|==================================================================================|";
	                            break;
	                        case 5 :
	                            harga = 13000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n -----------------------------------------------------";
	                            cout << "\n|     Harga " << jumlah << " Tolak Angin Care adalah Rp " << total << ",00     |";
	                            cout << "\n --  -------------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|==================================================================================|";
	                            cout << "\n|                                 TOLAK ANGIN CARE                                 |";
	                            cout << "\n|==================================================================================|";
	                            cout << "\n| INDIKASI :                                                                       |";
	                            cout << "\n| Memberi sensasi menyegarkan, untuk meringankan masuk angin, sakit kepala, perut  |";
	                            cout << "\n| kembung, gejala flu, mabuk perjalanan, gatal karena gigitan serangga dan minyak  |";
	                            cout << "\n| angin aromaterapi.                                                               |";
	                            cout << "\n|----------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                          |";
	                            cout << "\n| Secukupnya. Gosokkan pada bagian yang memerlukan.                                |";
	                            cout << "\n|==================================================================================|";
	                            break;
	                        case 6 :
	                            harga = 13000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n -----------------------------------------------";
                                cout << "\n|     Harga " << jumlah << " Fresh Care adalah Rp " << total << ",00     |";
	                            cout << "\n --  -------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|==================================================================================|";
	                            cout << "\n|                                    FRESH CARE                                    |";
	                            cout << "\n|==================================================================================|";
	                            cout << "\n| INDIKASI :                                                                       |";
	                            cout << "\n| Meringankan sakit kepala, meredakan perut kembung, masuk angin, mabuk perjalanan,|";
	                            cout << "\n| meredakan gejala flu                                                             |";
	                            cout << "\n|----------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                          |";
	                            cout << "\n| Secukupnya. Oleskan pada bagian yang sakit.                                      |";
	                            cout << "\n|==================================================================================|";
	                            break;
	                        default :
	                            cout << "\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat sakit kepala.";
	                            system("cls");
	                        	goto SakitKepala;
                    	}
                break;

                case 8:
                    Anemia:

                        cout << "\n\n\n|=============================================================================|";
                        cout << "\n|                           REKOMENDASI OBAT ANEMIA                           |";
                        cout << "\n|=============================================================================|";
                        cout << "\n| 1. |  Sangobion                           |   Rp 17, 000,00   |  10 kapsul  |";
                        cout << "\n| 2. |  Sangobion Vita-tonik                |   Rp 32, 000,00   |    250ml    |";
                        cout << "\n| 3. |  Sakatonik liver syrup               |   Rp 29, 000,00   |    310ml    |";
                        cout << "\n| 4. |  Feroglobin sirup                    |   Rp 53, 000,00   |    100ml    |";
                        cout << "\n|=============================================================================|";
                        cout << "\n\n  Masukkan obat yang Anda inginkan : ";
                        cin >> anemia;
                        cout << "\n-----------------------------------------------------------------------------------";
                        cout << "\n\n  Jumlah obat yang ingin dibeli :  ";
                        cin >> jumlah;
                        cout << "\n-----------------------------------------------------------------------------------";

	                    switch(anemia){
	                        case 1 :
	                            harga = 17000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n ---------------------------------------------------------------------------";
	                            cout << "\n|     Harga " << jumlah << " Sangobion adalah Rp " << total << ",00     |";
	                            cout << "\n --  -------------------------------------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|====================================================================================|";
	                            cout << "\n|                                           SANGOBION                                |";
	                            cout << "\n|====================================================================================|";
	                            cout << "\n| INDIKASI :                                                                         |";
	                            cout << "\n| Anemia karena kekurangan zat besi dan mineral lain yang membantu pembentukan darah.|";
	                            cout << "\n|------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                            |";
	                            cout << "\n| 1 kapsul sehari (setelah makan)                                                    |";
	                            cout << "\n|====================================================================================|";
	                            break;
	                        case 2 :
	                            harga = 32000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n ---------------------------------------------------------";
	                            cout << "\n|     Harga " << jumlah << " Sangobion Vita-tonik adalah Rp " << total << ",00     |";
	                            cout << "\n --  -----------------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|====================================================================================|";
	                            cout << "\n|                                SANGOBION VITA-TONIK                                |";
	                            cout << "\n|====================================================================================|";
	                            cout << "\n| INDIKASI :                                                                         |";
	                            cout << "\n| Sebagai penambah darah dan membantu memperbaiki stamina tubuh                      |";
	                            cout << "\n|------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                            |";
	                            cout << "\n| 1 kali sehari (setelah makan)                |   2 sendok makan   |   (30 ml)   |  |";
	                            cout << "\n|====================================================================================|";
	                            break;
	                        case 3 :
	                            harga = 29000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n ----------------------------------------------------------------------------------------------";
	                            cout << "\n|     Harga " << jumlah << " Sakatonik Liver Syrup adalah Rp " << total << ",00     |";
	                            cout << "\n --  ------------------------------------------------------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|====================================================================================|";
	                            cout << "\n|                               SAKATONIK LIVER SYRUP                                |";
	                            cout << "\n|====================================================================================|";
	                            cout << "\n| INDIKASI :                                                                         |";
	                            cout << "\n| Menambah darah, menambah nafsu makan, memenuhi kebutuhan tubuh akan vitamin dan    |";
	                            cout << "\n| mineral.                                                                           |";
	                            cout << "\n|------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                            |";
	                            cout << "\n| 1 kali sehari (setelah makan)                 |   1 sendok takar   |   (5 ml)   |  |";
	                            cout << "\n|====================================================================================|";
	                            break;
	                        case 4 :
	                            harga = 53000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n -----------------------------------------------------";
	                            cout << "\n|     Harga " << jumlah << " Feroglobin Sirup adalah Rp " << total << ",00     |";
	                            cout << "\n --  -------------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|====================================================================================|";
	                            cout << "\n|                                   FEROGLOBIN SIRUP                                 |";
	                            cout << "\n|====================================================================================|";
	                            cout << "\n| INDIKASI :                                                                         |";
	                            cout << "\n| Suplemen Vit & Mineral untuk defisiensi Fe & An. Anemia defisiensi Fe, aktivitas   |";
	                            cout << "\n| fisik yang berat, sering terkena infeksi & sakit, masa haid, masa penyembuhan      |";
	                            cout << "\n|------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                            |";
	                            cout << "\n| Dewasa (Usia > 12 tahun)                                                           |";
	                            cout << "\n| 2 kali sehari (setelah makan)                          |   1   sendok takar   |    |";
	                            cout << "\n| Anak-Anak (Usia 7-12 tahun)                                                        |";
	                            cout << "\n| 1-2 kali sehari (setelah makan)                        |   1   sendok takar   |    |";
	                            cout << "\n| Anak-Anak (Usia 3-6 tahun)                                                         |";
	                            cout << "\n| 2 kali sehari  (setelah makan)                         |   0.5 sendok takar   |    |";
	                            cout << "\n|====================================================================================|";
	                            break;
	                        default :
	                            cout << "\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat anemia.";
	                            system("cls");
	                        	goto Anemia;
	                    }
                break;

                case 9 :
                    Jerawat:

                        cout << "\n\n\n|====================================================================================|";
                        cout << "\n|                              REKOMENDASI OBAT JERAWAT                              |";
                        cout << "\n|====================================================================================|";
                        cout << "\n| 1. |  Acnes Sealing Jell                            |   Rp 29,000,00   |  18 gram  |";
                        cout << "\n| 2. |  Verile Acne Gel                               |   Rp 18,000,00   |  10 gram  |";
                        cout << "\n| 3. |  Emina Ms.Pimple Acne Gel                      |   Rp 28,000,00   |   15 ml   |";
                        cout << "\n| 4. |  Acnol For Acne Gel                            |   Rp 16,000,00   |   10 ml   |";
                        cout << "\n|====================================================================================|";
                        cout << "\n\n  Masukkan obat yang Anda inginkan : ";
                        cin >> jerawat;
                        cout << "\n--------------------------------------------------------------------------------------";
                        cout << "\n\n  Jumlah obat yang ingin dibeli : ";
                        cin >> jumlah;
                        cout << "\n--------------------------------------------------------------------------------------";

	                    switch(jerawat){
	                        case 1 :
	                            harga = 29000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n -----------------------------------------------------------------------------------";
	                            cout << "\n|     Harga " << jumlah << " Acnes Sealing Jell adalah Rp " << total << ",00     |";
	                            cout << "\n --  ---------------------------------------------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|====================================================================================|";
	                            cout << "\n|                                 ACNES SEALING JELL                                 |";
	                            cout << "\n|====================================================================================|";
	                            cout << "\n| INDIKASI :                                                                         |";
	                            cout << "\n| Melawan bakteri penyebab jerawat, mengurangi peradangan (kemerahan) pada kulit     |";
	                            cout << "\n| wajah akibat jerawat, mengecilkan volume jerawat serta mencegah penyumbatan        |";
	                            cout << "\n| pori-pori, mengandung vitamin E dan B6 sehingga melembutkan kulit wajah dan        |";
	                            cout << "\n| menutrisi kulit.                                                                   |";
	                            cout << "\n|------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                            |";
	                            cout << "\n| 2 kali sehari                                      |   untuk jerawat ringan   |    |";
	                            cout << "\n| 3 - 4 kali sehari                                  |   untuk jerawat berat    |    |";
	                            cout << "\n| Keluarkan acnes sealing jell secukupnya pada jari, oleskan tipis pada jerawat      |";
	                            cout << "\n|====================================================================================|";
	                            break;
	                       case 2 :
	                            harga = 18000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n ---------------------------------------------------------------------------------";
	                            cout << "\n|     Harga " << jumlah << " Verile Acne Gel adalah Rp " << total << ",00     |";
	                            cout << "\n --  ------------------------------------------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|====================================================================================|";
	                            cout << "\n|                                   VERILE ACNE GEL                                  |";
	                            cout << "\n|====================================================================================|";
	                            cout << "\n| INDIKASI :                                                                         |";
	                            cout << "\n| Untuk kulit berminyak dan berjerawat                                               |";
	                            cout << "\n|------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                            |";
	                            cout << "\n| 3 kali sehari                                                                      |";
	                            cout << "\n| Dioleskan di wajah pada pagi, siang dan malam hari untuk mengeringkan dan merawat  |";
	                            cout << "\n| kulit yang berjerawat                                                              |";
	                            cout << "\n|====================================================================================|";
	                            break;
	                        case 3 :
	                            harga = 28000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n --------------------------------------------------------------";
	                            cout << "\n|     Harga " << jumlah << " Emina Ms. Pimple Acne Gel adalah Rp " << total << ",00        |";
	                            cout << "\n --  ----------------------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|====================================================================================|";
	                            cout << "\n|                              EMINA MS. PIMPLE ACNE GEL                             |";
	                            cout << "\n|====================================================================================|";
	                            cout << "\n| INDIKASI :                                                                         |";
	                            cout << "\n| Melawan penyebab timbulnya jerawat, mengurangi tekstur kasar akibat jerawat dan    |";
	                            cout << "\n| kemerahan pada kulit, membuat kulit tampak lebih halus dan mengurangi noda bekas   |";
	                            cout << "\n| jerawat                                                                            |";
	                            cout << "\n|------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                            |";
	                            cout << "\n| 1 - 3 kali sehari. Aplikasikan pada area yang berjerawat                           |";
	                            cout << "\n|====================================================================================|";
	                            break;
	                       case 4 :
	                            harga = 16000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n --------------------------------------------------------------";
	                            cout << "\n|     Harga " << jumlah << " Acnol For Acne Gel adalah Rp " << total << ",00              |";
	                            cout << "\n --  ----------------------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|====================================================================================|";
	                            cout << "\n|                                 ACNOL FOR ACNE GEL                                 |";
	                            cout << "\n|====================================================================================|";
	                            cout << "\n| INDIKASI :                                                                         |";
	                            cout << "\n| Anti Acne                                                                          |";
	                            cout << "\n|------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                            |";
	                            cout << "\n| Sesuai Kebutuhan. Bersihkan wajah terlebih dahulu, kemudian ambil gel secukupnya,  |";
	                            cout << "\n| lalu oleskan pada bagian yang berjerawat.                                          |";
	                            cout << "\n|====================================================================================|";
	                            break;
	                       	default :
	                            cout << "\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat jerawat.";
	                            system("cls");
	                        	goto Jerawat;
	                    }
                break;
	                            
	            case 10 :
                    Panu:

                        cout << "\n\n\n|======================================================================================|";
                        cout << "\n|                         REKOMENDASI OBAT PANU, KADAS, KURAP                          |";
                        cout << "\n|======================================================================================|";
                        cout << "\n| 1. |  Salep 88                                         |   Rp 14,000,00   |  6 gram  |";
                        cout << "\n| 2. |  Kalpanax Salep                                   |   Rp 15,000,00   |  5 gram  |";
                        cout << "\n| 3. |  Fungiderm                                        |   Rp 15,000,00   |  5 gram  |";
                        cout << "\n| 4. |  Pi Kang Shuang                                   |   Rp 13,000,00   |  5 gram  |";
                        cout << "\n|======================================================================================|";
                        cout << "\n\n  Masukkan obat yang Anda inginkan : ";
                        cin >> panu;
                        cout << "\n----------------------------------------------------------------------------------------";
                        cout << "\n\n  Jumlah obat yang ingin dibeli :  ";
                        cin >> jumlah;
                        cout << "\n----------------------------------------------------------------------------------------";

	                    switch(panu){
	                        case 1 :
	                            harga = 14000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n --------------------------------------";
	                            cout << "\n|     Harga " << jumlah << " Salep 88 Rp " << total << ",00          |";
	                            cout << "\n --  ---------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|====================================================================================|";
	                            cout << "\n|                                      SALEP 88                                      |";
	                            cout << "\n|====================================================================================|";;
	                            cout << "\n| INDIKASI :                                                                         |";
	                            cout << "\n| Untuk mengobati penyakit kulit seperti panu, kadas, kudis dan kutu air             |";
	                            cout << "\n| DOSIS :                                                                            |";
	                            cout << "\n| Dioleskan 3 kali sehari secukupnya pada bagian yang luka dan gatal                 |";
	                            cout << "\n|====================================================================================|";
	                            break;
	                        case 2 :
	                            harga = 15000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n ---------------------------------------------------";
	                            cout << "\n|     Harga " << jumlah << " Kalpanax Salep adalah Rp " << total << ",00       |";
	                            cout << "\n --  -----------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|====================================================================================|";
	                            cout << "\n|                                   KALPANAX SALEP                                   |";
	                            cout << "\n|====================================================================================|";
	                            cout << "\n| INDIKASI :                                                                         |";
	                            cout << "\n| Gatal jamur dan penyakit jamur kulit                                               |";
	                            cout << "\n|------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                            |";
	                            cout << "\n| Dioleskan 2 kali sehari. Dioles tipis pada bagian kulit yang terinfeksi            |";
	                            cout << "\n|====================================================================================|";
	                            break;
	                        case 3 :
	                            harga = 15000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n ----------------------------------------------";
	                            cout << "\n|     Harga " << jumlah << " Fungiderm adalah Rp " << total << ",00        |";
	                            cout << "\n --  -----------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|====================================================================================|";
	                            cout << "\n|                                    FUNGIDERM                                       |";
	                            cout << "\n|====================================================================================|";
	                            cout << "\n| INDIKASI :                                                                         |";
	                            cout << "\n| Untuk infeksi jamur pada kulit / kuku                                              |";
	                            cout << "\n|------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                            |";
	                            cout << "\n| 2 - 3 kali sehari selama 10 - 14 hari secara teratur dan tidak berhenti            |";
	                            cout << "\n| Oleskan krim secukupnya pada bagian yang sakit                                     |";
	                            cout << "\n|====================================================================================|";
	                            break;
	                        case 4 :
	                            harga = 13000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n ---------------------------------------------------";
	                            cout << "\n|     Harga " << jumlah << " Pi Kang Shuang adalah Rp " << total << ",00        |";
	                            cout << "\n --  -----------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|====================================================================================|";
	                            cout << "\n|                                   PI KANG SHUANG                                   |";
	                            cout << "\n|====================================================================================|";
	                            cout << "\n| INDIKASI :                                                                         |";
	                            cout << "\n| Inflamasi (peradangan) dari dermatosis yang responsif terhadap kortikosteroid yang |";
	                            cout << "\n| disertai infeksi jamur dan bakteri.                                                |";
	                            cout << "\n|------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                            |";
	                            cout << "\n| 2 - 3 kali sehari. Oleskan pada bagian yang sakit                                  |";
	                            cout << "\n|====================================================================================|";
	                            break;
	                        default :
	                            cout << "\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat panu, kadas, kurap.";
	                            system("cls");
	                        	goto Panu;
	                    }
                break;
                
                case 11 :
                    SakitGigi:

	                    cout << "\n\n\n|======================================================================================|";
	                    cout << "\n|                             REKOMENDASI OBAT SAKIT GIGI                              |";
	                    cout << "\n|======================================================================================|";
	                    cout << "\n|        Obat Kumur :                                                                  |";
	                    cout << "\n|--------------------------------------------------------------------------------------|";
	                    cout << "\n| 1.  |  Betadine Mouthwash & gargle                    |   Rp  36,000,00   |   190ml  |";
	                    cout << "\n| 2.  |  Dentova Pro Mouthwash                          |   Rp  21,000,00   |   220ml  |";
	                    cout << "\n|--------------------------------------------------------------------------------------|";
	                    cout << "\n|        Obat Tetes :                                                                  |";
	                    cout << "\n|--------------------------------------------------------------------------------------|";
	                    cout << "\n| 3.  |  Dentasol                                       |   Rp   8,000,00   |    10ml  |";
	                    cout << "\n| 4.  |  Hersagi                                        |   Rp  25,000,00   |    12ml  |";
	                    cout << "\n|======================================================================================|";
	                    cout << "\n\n  Masukkan obat yang Anda inginkan : ";
	                    cin >> sakit_gigi;
	                    cout << "\n----------------------------------------------------------------------------------------";
	                    cout << "\n\n  Jumlah obat yang ingin dibeli : ";
	                    cin >> jumlah;
	                    cout << "\n----------------------------------------------------------------------------------------";
	
	                    switch(sakit_gigi){
	                        case 1 :
	                            harga=36000;
	                            total=harga * jumlah;
	                            cout << "\n\n\n --------------------------------------------------------------";
	                            cout << "\n|   Harga " << jumlah << " Betadine Mouthwash & Gargle adalah Rp " << total << ",00        |";
	                            cout << "\n --  ---------------------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|====================================================================================|";
	                            cout << "\n|                            BETADINE MOUTHWASH & GARGLE                             |";
	                            cout << "\n|====================================================================================|";
	                            cout << "\n| INDIKASI :                                                                         |";
	                            cout << "\n| Obat kumur antiseptik untuk rongga mulut seperti gusi bengkak, sakit tenggorokan,  |";
	                            cout << "\n| sariawan, bau mulut dan napas tak segar.                                           |";
	                            cout << "\n|------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                            |";
	                            cout << "\n| 3 - 5 kali sehari                  |   kumur selama 30-60 detik   |   (15 ml)   |  |";
	                            cout << "\n|====================================================================================|";
	                            break;
	                        case 2 :
	                            harga=21000;
	                            total=harga * jumlah;
	                            cout << "\n\n\n -------------------------------------------------------";
	                            cout << "\n|  Harga " << jumlah << " Dentova Pro Mouthwash adalah Rp " << total << ",00        |";
	                            cout << "\n --  --------------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|====================================================================================|";
	                            cout << "\n|                               DENTOVA PRO MOUTHWASH                                |";
	                            cout << "\n|====================================================================================|";
	                            cout << "\n| INDIKASI :                                                                         |";
	                            cout << "\n| Obat sakit gigi dengan antiseptik yang siap berantas bakteri atau kuman di dalam   |";
	                            cout << "\n| mulut.                                                                             |";
	                            cout << "\n|------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                            |";
	                            cout << "\n| 2 kali sehari                        |   kumur selama 60 detik   |   (10 ml)   |   |";
	                            cout << "\n|====================================================================================|";
	                            break;
	                        case 3 :
	                            harga=8000;
	                            total=harga * jumlah;
	                            cout << "\n\n\n ------------------------------------------";
	                            cout << "\n|    Harga " << jumlah << " Dentasol adalah Rp " << total << ",00   |";
	                            cout << "\n  --  ------------------------------------";
	                            cout << "\n    |/";
	                            cout << "\n\n|====================================================================================|";
	                            cout << "\n|                                      DENTASOL                                      |";
	                            cout << "\n|====================================================================================|";
	                            cout << "\n| INDIKASI :                                                                         |";
	                            cout << "\n| Dentasol merupakan obat gigi yang dapat digunakan untuk mengatasi radang gusi,     |";
	                            cout << "\n| sariawan,sakit gigi, sakit dari rangsangan tumbuh gigi.                            |";
	                            cout << "\n|------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                            |";
	                            cout << "\n| 2 kali sehari                        |   kumur selama 60 detik   |   (10 ml)   |   |";
	                            cout << "\n|====================================================================================|";
	                            break;
	                        case 4 :
	                            harga=25000;
	                            total=harga * jumlah;
	                            cout << "\n\n\n -----------------------------------------";
	                            cout << "\n|  Harga " << jumlah << " Hersagi adalah Rp " << total << ",00        |";
	                            cout << "\n --  ------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|====================================================================================|";
	                            cout << "\n|                                       HERSAGI                                      |";
	                            cout << "\n|====================================================================================|";
	                            cout << "\n| INDIKASI :                                                                         |";
	                            cout << "\n| Hersagi secara tradisional digunakan untuk membantu meredakan nyeri yang disebabkan|";
	                            cout << "\n| oleh gigi berlubang dan membantu menyegarkan mulut.                                |";
	                            cout << "\n|------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                            |";
	                            cout << "\n| 3 - 5 kali sehari                                             |   2-3 tetes   |    |";
	                            cout << "\n|====================================================================================|";
	                            break;
	                        default :
	                            cout<< "\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat sakit gigi.";
	                            system ("cls");
	                        	goto SakitGigi;
	                    }
	            break;

                case 12 :
                    RadangTenggorokan:

	                    cout << "\n\n\n|=====================================================================================|";
	                    cout << "\n|                     REKOMENDASI OBAT RADANG TENGGOROKAN                             |";
	                    cout << "\n|=====================================================================================|";
	                    cout << "\n| 1. |  Strepsils                                   |   Rp 10,000,00   |   8 tablet   |";
	                    cout << "\n| 2. |  Adem Sari                                   |   Rp  2,000,00   |   1 Sachet   |";
	                    cout << "\n| 3. |  Larutan Cap Kaki Tiga (kaleng)              |   Rp  6,000,00   |     320ml    |";
	                    cout << "\n| 4. |  Larutan Cap Kaki Tiga (botol)               |   Rp  6,000,00   |     500ml    |";
	                    cout << "\n|=====================================================================================|";
	                    cout << "\n\n  Masukkan obat yang Anda inginkan : ";
	                    cin >> tenggorokan;
	                    cout << "\n----------------------------------------------------------------------------------------";
	                    cout << "\n\n  Jumlah obat yang ingin dibeli : ";
	                    cin >> jumlah;
	                    cout << "\n----------------------------------------------------------------------------------------";
	
	                    switch(tenggorokan){
	                        case 1 :
	                            harga = 10000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n ----------------------------------------------";
	                            cout << "\n|     Harga " << jumlah<< " Strepsils adalah Rp " << total << ",00        |";
	                            cout << "\n --  ------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|====================================================================================|";
	                            cout << "\n|                                     STREPSILS                                      |";
	                            cout << "\n|====================================================================================|";
	                            cout << "\n| INDIKASI :                                                                         |";
	                            cout << "\n| Strepsils bermanfaat untuk meredakan sakit tenggorokan akibat infeksi.             |";
	                            cout << "\n| Strepsil tersedia dalam bentuk tablet isap dengan beberapa varian rasa.            |";
	                            cout << "\n|------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                            |";
	                            cout << "\n| Usia 6 tahun - Dewasa                         |   tiap 1-2 jam   |   1 tablet   |  |";
	                            cout << "\n|====================================================================================|";
	                            break;
	                        case 2 :
	                            harga = 2000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n ---------------------------------------------";
	                            cout << "\n|     Harga " << jumlah << " Adem Sari adalah Rp " << total << ",00       |";
	                            cout << "\n --  -----------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|====================================================================================|";
	                            cout << "\n|                                    ADEM SARI                                       |";
	                            cout << "\n|====================================================================================|";
	                            cout << "\n| INDIKASI :                                                                         |";
	                            cout << "\n| Merupakan minuman penyejuk yang mengandung ekstrak Citrus Aurantifolia dan ekstrak |";
	                            cout << "\n| Alyxia stellata. Dilengkapi juga dengan kandungan vitamin C. Digunakan untuk       |";
	                            cout << "\n| membantu meredakan gejala panas dalam, seperti tenggorokan kering, sariawan, dan   |";
	                            cout << "\n| bibir pecah-pecah.                                                                 |";
	                            cout << "\n|------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                            |";
	                            cout << "\n| Dewasa (Usia > 12 tahun)                                                           |";
	                            cout << "\n| 2 - 3 kali sehari(sebelum atau sesudah makan) |   1   sachet   |   200 ml air   |  |";
	                            cout << "\n|------------------------------------------------------------------------------------|";
	                            cout << "\n| Anak-anak (Usia <= 12 tahun)                                                       |";
	                            cout << "\n| 2 - 3 kali sehari(sebelum atau sesudah makan) |   0.5 sachet   |   200 ml air   |  |";
	                            cout << "\n|====================================================================================|";
	                            break;
	                        case 3 :
	                            harga = 6000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n ------------------------------------------------------------------";
	                            cout << "\n|     Harga " << jumlah << " Larutan Cap Kaki Tiga (kaleng) adalah Rp " << total << ",00       |";
	                            cout << "\n --  --------------------------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|====================================================================================|";
	                            cout << "\n|                           LARUTAN CAP KAKI TIGA (KALENG)                           |";
	                            cout << "\n|====================================================================================|";
	                            cout << "\n| INDIKASI :                                                                         |";
	                            cout << "\n| merupakan minuman penyegar dengan rasa yang bermanfaat untuk membantu meredakan    |";
	                            cout << "\n| panas dalam, sariawan, tenggorokan kering, dan untuk membantu menyegarkan tubuh.   |";
	                            cout << "\n|------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                            |";
	                            cout << "\n| Dewasa (Usia > 12 tahun)                                                           |";
	                            cout << "\n| 3 kali sehari (sebelum atau sesudah makan)            |   0.5  - 1   kaleng   |    |";
	                            cout << "\n|------------------------------------------------------------------------------------|";
	                            cout << "\n| Anak-anak (Usia <= 12 tahun)                                                       |";
	                            cout << "\n| 2 - 3 kali sehari (sebelum atau sesudah makan)        |   0.25 - 0.5 kaleng   |    |";
	                            cout << "\n|====================================================================================|";
	                            break;
	                        case 4 :
	                            harga = 6000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n -----------------------------------------------------------------";
	                            cout << "\n|     Harga " << jumlah << " Larutan Cap Kaki Tiga (botol) adalah Rp" << total << ",00       |";
	                            cout << "\n --  -------------------------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|====================================================================================|";
	                            cout << "\n|                            LARUTAN CAP KAKI TIGA (BOTOL)                           |";
	                            cout << "\n|====================================================================================|";
	                            cout << "\n| INDIKASI :                                                                         |";
	                            cout << "\n| larutan penyegar yang bermanfaat untuk membantu meredakan panas dalam yang disertai|";
	                            cout << "\n| tenggorokan kering, sariawan dan untuk membantu menyegarkan badan.                 |";
	                            cout << "\n|------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                            |";
	                            cout << "\n| Dewasa (Usia > 12 tahun)                                                           |";
	                            cout << "\n| 3 kali sehari (sebelum/sesudah makan)                  |   0.5  - 1   botol   |    |";
	                            cout << "\n|------------------------------------------------------------------------------------|";
	                            cout << "\n| Anak-anak (Usia <= 12 tahun)                                                       |";
	                            cout << "\n| 2 - 3 kali sehari (sebelum/sesudah makan)              |   0.25 - 0.5 botol   |    |";
	                            cout << "\n|====================================================================================|";
	                            break;
	                        default :
	                            cout << "\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat radang tenggorokan.";
	                            system ("cls");
	                        	goto RadangTenggorokan;
	                    }
                break;

                case 13 :
                    Lemas:

	                    cout << "\n\n\n|=====================================================================================|";
	                    cout << "\n|                           REKOMENDASI OBAT LEMAS                                    |";
	                    cout << "\n|=====================================================================================|";
	                    cout << "\n| 1. |  Vitabiotics Ultra Vitamin D                 |   Rp  30,000,00   |   1 strip   |";
	                    cout << "\n| 2. |  Sangobion                                   |   Rp  17,000,00   |   1 strip   |";
	                    cout << "\n| 3. |  Stimuno                                     |   Rp  19,000,00   |   1 strip   |";
	                    cout << "\n| 4. |  Vitalong C Cap                              |   Rp   5,000,00   |   1 strip   |";
	                    cout << "\n|-------------------------------------------------------------------------------------|";
	                    cout << "\n\n  Masukkan obat yang Anda inginkan : ";
	                    cin >> lemas;
	                    cout << "\n----------------------------------------------------------------------------------------";
	                    cout << "\n\n  Jumlah obat yang ingin dibeli : ";
	                    cin >> jumlah;
	                    cout << "\n----------------------------------------------------------------------------------------";
	
	                    switch(lemas){
	                        case 1 :
	                            harga = 30000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n ------------------------------------------------------------------";
	                            cout << "\n|     Harga " << jumlah << " Larutan Cap Kaki Tiga (botol) adalah Rp " << total << " ,00       |";
	                            cout << "\n --  --------------------------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|========================================================================================|";
	                            cout << "\n|                            VITABIOTICS ULTRA VITAMIN D                                 |";
	                            cout << "\n|========================================================================================|";
	                            cout << "\n| INDIKASI :                                                                             |";
	                            cout << "\n| Suplementasi Vitamin D3 untuk membantu menjaga kesehatan dan kekuatan tulang.          |";
	                            cout << "\n|----------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                                |";
	                            cout << "\n| 1 kali sehari (sesudah makan)                                      |   1 tablet   |    |";
	                            cout << "\n|========================================================================================|";
	                        	break;
	                        case 2 :
	                            harga = 17000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n ----------------------------------------------";
	                            cout << "\n|     Harga " << jumlah << " Sangobion adalah Rp " << total << ",00       |";
	                            cout << "\n --  ------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|=========================================================================================|";
	                            cout << "\n                                         SANGOBION                                        |";
	                            cout << "\n|=========================================================================================|";
	                            cout << "\n| INDIKASI :                                                                              |";
	                            cout << "\n| SANGOBION adalah vitamin dan zat besi penambah darah dengan kandungan Ferrous gluconate,|";
	                            cout << "\n| manganese sulfate, copper Sulfate, vitamin C, folic acid, vitamin B12.                  |";
	                            cout << "\n|-----------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                                 |";
	                            cout << "\n| 1 kali sehari (sesudah makan)                                       |   1 kapsul   |    |";
	                            cout << "\n|=========================================================================================|";
	                        	break;
	                        case 3 :
	                            harga = 19000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n --------------------------------------------";
	                            cout << "\n|     Harga " << jumlah << " Stimuno adalah Rp " << total << ",00       |";
	                            cout << "\n --  ----------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|======================================================================================|";
	                            cout << "\n|                                    STIMUNO                                           |";
	                            cout << "\n|======================================================================================|";
	                            cout << "\n| INDIKASI :                                                                           |";
	                            cout << "\n| Membantu merangsang tubuh memproduksi lebih banyak antibodi dan mengaktifkan sistem  |";
	                            cout << "\n| kekebalan tubuh agar daya tahan tubuh bekerja optimal.                               |";
	                            cout << "\n|--------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                              |";
	                            cout << "\n| 3 kali sehari (sesudah makan)                                    |   1 tablet   |    |";
	                            cout << "\n|======================================================================================|";
	                        	break;
	                        case 4 :
	                            harga = 5000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n --------------------------------------------------";
	                            cout << "\n|     Harga " << jumlah << " Vitalong C Cap adalah Rp " << total << ",00       |";
	                            cout << "\n --  ----------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|======================================================================================|";
	                            cout << "\n|                              VITALONG C CAP                                          |";
	                            cout << "\n|======================================================================================|";
	                            cout << "\n| INDIKASI :                                                                           |";
	                            cout << "\n| Suplemen ini mengandung Vitamin C 500 mg yang berfungsi untuk memenuhi kebutuhan     |";
	                            cout << "\n| Vitamin C dan membantu memelihara daya tahan tubuh.                                  |";
	                            cout << "\n|--------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                              |";
	                            cout << "\n| 1 kali sehari (sesudah makan)                                    |   1 kapsul   |    |";
	                            cout << "\n|======================================================================================|";
	                        	break;
	                        default :
	                            cout << "\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat lemas.";
	                            system ("cls");
	                        	goto Lemas;
	                    }
                break;

                case 14 :
                    MasukAngin:

	                    cout << "\n\n\n|=====================================================================================|";
	                    cout << "\n|               REKOMENDASI OBAT MABUK KENDARAAN & MASUK ANGIN                        |";
	                    cout << "\n|=====================================================================================|";
	                    cout << "\n| 1. |  Antimo strip                              |   Rp   5,000,00   |   10 tablet   |";
	                    cout << "\n| 2. |  Antimo anak                               |   Rp   1,000,00   |       5ml     |";
	                    cout << "\n| 3. |  Tolak Angin                               |   Rp   3,000,00   |      15ml     |";
	                    cout << "\n| 4. |  Antangin                                  |   Rp   3,000,00   |    4 tablet   |";
	                    cout << "\n|=====================================================================================|";
	                    cout << "\n\n  Masukkan obat yang Anda inginkan : ";
	                    cin >> masuk_angin;
	                    cout << "\n----------------------------------------------------------------------------------------";
	                    cout << "\n\n  Jumlah obat yang ingin dibeli : ";
	                    cin >> jumlah;
	                    cout << "\n----------------------------------------------------------------------------------------";
	
	                    switch(masuk_angin){
	                        case 1 :
	                            harga = 5000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n ----------------------------------------------------";
	                            cout << "\n|     Harga " << jumlah << " Antimo Strip adalah Rp " << total << ",00           |";
	                            cout << "\n --  ------------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|======================================================================================|";
	                            cout << "\n|                                        ANTIMO                                        |";
	                            cout << "\n|======================================================================================|";
	                            cout << "\n| INDIKASI :                                                                           |";
	                            cout << "\n| Antimo merupakan obat yang digunakan untuk mengatasi rasa mual dan muntahakibat mabuk|";
	                            cout << "\n| perjalanan (motion sickness) maupun kondisi vertigo.                                 |";
	                            cout << "\n|--------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                              |";
	                            cout << "\n| Dewasa (Usia > 12 tahun)                                                             |";
	                            cout << "\n| 30 menit sebelum berpergian(sesudah makan)           |   1   tablet   |   50 mg   |  |";
	                            cout << "\n|--------------------------------------------------------------------------------------|";
	                            cout << "\n| Anak-anak (Usia <= 12 tahun)                                                         |";
	                            cout << "\n| 30 menit sebelum berpergian(sesudah makan)           |   0.5 tablet   |   25 mg   |  |";
	                            cout << "\n|======================================================================================|";
	                        	break;
	                        case 2 :
	                            harga = 1000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n --------------------------------------------------";
	                            cout << "\n|     Harga " << jumlah << " Antimo Anak adalah Rp " << total << ",00         |";
	                            cout << "\n --  ----------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|======================================================================================|";
	                            cout << "\n|                                     ANTIMO ANAK                                      |";
	                            cout << "\n|======================================================================================|";
	                            cout << "\n| INDIKASI :                                                                           |";
	                            cout << "\n| Antimo sirup merupakan anti mual atau muntah yang dikemas dalam bentuk sachet, dengan|";
	                            cout << "\n| rasa yang disukai anak-anak dan praktis dibawa kemana-mana.                          |";
	                            cout << "\n|--------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                              |";
	                            cout << "\n| 30 menit sebelum berpergian(sesudah makan)          |   1-2 sachet   |    5 ml    |  |";
	                            cout << "\n|======================================================================================|";
	                        	break;
	                        case 3 :
	                            harga = 3000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n --------------------------------------------------";
	                            cout << "\n|     Harga " << jumlah << " Tolak Angin adalah Rp " << total << ",00          |";
	                            cout << "\n --  ----------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|============================================================================================|";
	                            cout << "\n|                                         TOLAK ANGIN                                        |";
	                            cout << "\n|============================================================================================|";
	                            cout << "\n| INDIKASI :                                                                                 |";
	                            cout << "\n| Herbal untuk membantu meringankan gejala masuk angin, seperti: pusing, meriang,            |";
	                            cout << "\n| kembung, sakit perut, tengorokan kering, mual dan muntah, serta membantu memelihara        |";
	                            cout << "\n| atau menjaga daya tahan tubuh. Tolak angin cair juga dapat diminum saat perjalanan         |";
	                            cout << "\n| jauh,kecapaian dan kurang tidur.                                                           |";
	                            cout << "\n|--------------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                                    |";
	                            cout << "\n| 2 kali perhari(sesudah makan)              | menjaga daya tahan tubuh      | 1-2 sachet |  |";
	                            cout << "\n| 2 - 4 kali perhari(sesudah makan)          | masuk angin dan diare         | 3-4 sachet |  |";
	                            cout << "\n| 1 - 3 kali perhari(sesudah makan)          | mabuk perjalanan              | 1-3 sachet |  |";
	                            cout << "\n| 30 menit sebelum berpergian(sesudah makan) | sebelum melakukan perjalanan  | 1   sachet |  |";
	                            cout << "\n|============================================================================================|";
	                        	break;
	                        case 4 :
	                            harga = 3000;
	                            total = harga * jumlah;
	                            cout << "\n\n\n --------------------------------------------------";
	                            cout << "\n|     Harga " << jumlah << " Antangin adalah Rp " << total << ",00             |";
	                            cout << "\n --  ----------------------------------------------";
	                            cout << "\n   |/";
	                            cout << "\n\n|======================================================================================|";
	                            cout << "\n|                                   ANTANGIN                                           |";
	                            cout << "\n|======================================================================================|";
	                            cout << "\n| INDIKASI :                                                                           |";
	                            cout << "\n| merupakan sirup herbal masuk angin dengan kandungan utama Jahe, Royal Jelly dan      |";
	                            cout << "\n| Ginseng. Antangin digunakan untuk membantu meredakan masuk angin, meriang, rasa mual,|";
	                            cout << "\n| perut kembung, capek dan pusing serta melegakan tenggorokan.                         |";
	                            cout << "\n|--------------------------------------------------------------------------------------|";
	                            cout << "\n| DOSIS :                                                                              |";
	                            cout << "\n| Dewasa (Usia > 12 tahun)                                                             |";
	                            cout << "\n| 3 kali sehari (sesudah makan)                      |   1   sachet   |   15   ml   |  |";
	                            cout << "\n|--------------------------------------------------------------------------------------|";
	                            cout << "\n| Anak-anak (Usia <= 12 tahun)                                                         |";
	                            cout << "\n| 3 x sehari (sesudah makan)                         |   0.5 sachet   |    7,5 ml   |  |";
	                            cout << "\n|======================================================================================|";
	                        	break;
	                        default :
	                            cout << "\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat mabuk kendaraan & masuk angin.";
	                            system ("cls");
	                        	goto MasukAngin;
	                    }
                break;

                default :
                    cout << "\n\n  Inputan salah, akan dikembalikan ke menu daftar keluhan penyakit.";
                    system("cls");
                	goto Keluhan;
            }
            
        bayar = bayar + (harga * jumlah);
        pajak = bayar * 0.1;
        semua = pajak + bayar;
        
		TotalSementara(bayar, pajak, semua);
    }
    

    void AlatKesehatan(){
    	int jumlah, AlatKesehatan, total, harga, pajak, semua;
          int bayar = 0; semua = 0;

        AlatKesehatan:

            cout << "\n\n\n|===================================================================================|";
            cout << "\n|                                   ALAT KESEHATAN                                  |";
            cout << "\n|===================================================================================|";
            cout << "\n| 1. |  Inhealer                                 |   Rp 125,000,00   |              |";
            cout << "\n| 2. |  Alat tes gula Darah                      |   Rp 139,000,00   |              |";
            cout << "\n| 3. |  Tensi meter digital                      |   Rp 165,000,00   |              |";
            cout << "\n| 4. |  Tabung Oksigen                           |   Rp 650,000,00   |              |";
            cout << "\n| 5. |  Termometer                               |   Rp  55,000,00   |              |";
            cout << "\n| 6. |  Timbangan Badan                          |   Rp  75,000,00   |              |";
            cout << "\n| 7. |  Kursi roda                               |   Rp 900,000,00   |              |";
            cout << "\n|-----------------------------------------------------------------------------------|";
            cout << "\n|                                   Perawatan Luka                                  |";
            cout << "\n|-----------------------------------------------------------------------------------|";
            cout << "\n| 8. |  Betadine sol                             |   Rp  17,000,00   |   15  ml     |";
            cout << "\n| 9. |  Rivanol one med                          |   Rp   4,000,00   |   100 ml     |";
            cout << "\n| 10.|  Dermatix ultra gel                       |   Rp 139,000,00   |   5   gram   |";
            cout << "\n| 11.|  Hansaplast antiseptik pembersih luka     |   Rp  27,000,00   |   40  ml     |";
            cout << "\n| 12.|  Hansaplast kain elastis 2637             |   Rp  30,000,00   |   20  lembar |";
            cout << "\n| 13.|  Hansaplast kain rol                      |   Rp  47,000,00   |   500 cm     |";
            cout << "\n| 14.|  Hansaplast kasa rol elastis              |   Rp  23,000,00   |   4m x 6cm   |";
            cout << "\n| 15.|  Hansaplast kasa steril 7,5 x 7,5cm       |   Rp  29,000,00   |   10 pcs     |";
            cout << "\n| 16.|  Kapas pembalut luka                      |   Rp   7,000,00   |   100 gram   |";
            cout << "\n| 17.|  Kain kasa husada 16 x 16cm               |   Rp  15,000,00   |   16  lembar |";
            cout << "\n====================================================================================|";
            cout << "\n\n  Masukkan Alat Kesehatan yang Anda inginkan : ";
            cin >> AlatKesehatan;
            cout << "\n-------------------------------------------------------------------------------------";
            cout << "\n\n  Jumlah Alat Kesehatan yang ingin dibeli : ";
            cin >> jumlah;

            switch(AlatKesehatan){
            	case 1 :
                    harga = 125000;
                    total = harga * jumlah;
                    cout << "\n\n\n ----------------------------------------------";
                    cout << "\n|     Harga " << jumlah << " Inhealer adalah Rp " << total << ",00    |";
                    cout << "\n --  ------------------------------------------";
                    cout << "\n   |/";
                  	break;
                case 2 :
                    harga = 139000;
                    total = harga * jumlah;
                    cout << "\n\n\n ---------------------------------------------------";
                    cout << "\n|     Harga " << jumlah << " Alat tes gula adalah Rp " << total << ",00    |";
                    cout << "\n --  -----------------------------------------------";
                    cout << "\n   |/";
                  	break;
                case 3 :
                    harga = 165000;
                    total = harga * jumlah;
                    cout << "\n\n\n ---------------------------------------------------------";
                    cout << "\n|     Harga " << jumlah << " Tensi meter digital adalah Rp " << total << ",00    |", jumlah, total;
                    cout << "\n --  -----------------------------------------------------";
                    cout << "\n   |/";
                	break;
                case 4 :
                	harga = 650000;
                    total = harga * jumlah;
                    cout << "\n\n\n ----------------------------------------------------";
                    cout << "\n|     Harga " << jumlah << " Tabung Oksigen adalah Rp " << total << ",00    |";
                    cout << "\n --  ------------------------------------------------";
                    cout << "\n   |/";
                  	break;
                case 5 :
                    harga = 55000;
                    total = harga * jumlah;
                    cout << "\n\n\n -----------------------------------------------";
                    cout << "\n|     Harga " << jumlah << " Termometer adalah Rp " << total << ",00    |";
                    cout << "\n --  -------------------------------------------";
                    cout << "\n   |/";
                  	break;
                case 6 :
                    harga = 75000;
                    total = harga * jumlah;
                    cout << "\n\n\n ----------------------------------------------------";
                    cout << "\n|     Harga " << jumlah << " Timbangan Badan adalah Rp " << total << ",00    |";
                    cout << "\n --  ------------------------------------------------";
                    cout << "\n   |/";
                  	break;
                case 7 :
                    harga = 900000;
                    total = harga * jumlah;
                    cout << "\n\n\n ------------------------------------------------";
                    cout << "\n|     Harga " << jumlah << " Kursi Roda adalah Rp " << total << ",00    |";
                    cout << "\n --  --------------------------------------------";
                    cout << "\n   |/";
                  	break;
                case 8 :
                    harga = 17000;
                    total = harga * jumlah;
                    cout << "\n\n\n -------------------------------------------------";
                    cout << "\n|     Harga " << jumlah << " Betadine sol adalah Rp " << total << ",00    |";
                    cout << "\n --  ---------------------------------------------";
                    cout << "\n   |/";
                  	break;
                case 9 :
                    harga = 4000;
                    total = harga * jumlah;
                    cout << "\n\n\n ---------------------------------------------------";
                    cout << "\n|     Harga " << jumlah << " Rivanol one med adalah Rp " << total << ",00    |";
                    cout << "\n --  -----------------------------------------------";
                    cout << "\n   |/";
                  	break;
                case 10 :
                    harga = 139000;
                    total = harga * jumlah;
                    cout << "\n\n\n --------------------------------------------------------";
                    cout << "\n|     Harga " << jumlah << " Dermatix ultra gel adalah Rp " << total << ",00    |";
                    cout << "\n --  ----------------------------------------------------";
                    cout << "\n   |/";
                  	break;
                case 11 :
                    harga = 27000;
                    total = harga * jumlah;
                    cout << "\n\n\n -------------------------------------------------------------------------";
                    cout << "\n|     Harga " << jumlah << " Hansaplast antiseptik pembersih luka adalah Rp " << total << ",00    |";
                    cout << "\n --  ---------------------------------------------------------------------";
                    cout << "\n   |/";
                  	break;
                case 12 :
                    harga = 30000;
                    total = harga * jumlah;
                    cout << "\n\n\n -----------------------------------------------------------------";
                    cout << "\n|     Harga " << jumlah << " Hansaplast kain elastis 2637 adalah Rp " << total << ",00    |";
                    cout << "\n --  -------------------------------------------------------------";
                    cout << "\n   |/";
                  	break;
                case 13 :
                    harga = 47000;
                    total = harga * jumlah;
                    cout << "\n\n\n --------------------------------------------------------";
                    cout << "\n|     Harga " << jumlah << " Hansaplast kain rol adalah Rp " << total << ",00    |";
                    cout << "\n --  ----------------------------------------------------";
                    cout << "\n   |/";
                  	break;
                case 14 :
                    harga = 23000;
                    total = harga * jumlah;
                    cout << "\n\n\n ----------------------------------------------------------------";
                    cout << "\n|     Harga " << jumlah << " Hansaplast kasa rol elastis adalah Rp " << total << ",00    |";
                    cout << "\n --  ------------------------------------------------------------";
                    cout << "\n   |/";
                  	break;
                case 15 :
                    harga = 29000;
                    total = harga * jumlah;
                    cout << "\n\n\n ------------------------------------------------------------------------";
                    cout << "\n|     Harga " << jumlah << " Hansaplast kasa steril 7,5 x 7,5 cm adalah Rp " << total << ",00    |";
                    cout << "\n --  --------------------------------------------------------------------";
                    cout << "\n   |/";
                  	break;
                case 16 :
                    harga = 7000;
                    total = harga * jumlah;
                    cout << "\n\n\n -------------------------------------------------------";
                    cout << "\n|     Harga " << jumlah << " Kapas pembalut luka adalah Rp " << total << ",00    |";
                    cout << "\n --  ---------------------------------------------------";
                    cout << "\n   |/";
                  	break;
                case 17 :
                    harga = 15000;
                    total = harga * jumlah;
                    cout << "\n\n\n ----------------------------------------------------------------";
                    cout << "\n|     Harga " << jumlah << " Kain kasa husada 16 x 16 cm adalah Rp " << total << ",00    |";
                    cout << "\n --  ------------------------------------------------------------";
                    cout << "\n   |/";
               	   break;
                default :
                    cout << "\n\n  Inputan salah, akan dikembalikan ke menu alat kesehatan.";
                	goto AlatKesehatan;
            }
        
		bayar = bayar + (harga * jumlah);
        pajak = bayar * 0.1;
        semua = pajak + bayar;
        
		TotalSementara(bayar, pajak, semua);    
    }


int main(void) {

    int opsi;

    main:

        system("cls");
		cout << "\n\n =============================================================================";
        cout << "\n|                                APOTEK LYFECARE                              |";
        cout << "\n|=============================================================================|";
        cout << "\n| Selamat datang di layanan online Apotek LyfeCare!                           |";
        cout << "\n| Disini kami melayani :                                                      |";
        cout << "\n|-----------------------------------------------------------------------------|";
        cout << "\n|  1. |  Obat-Obatan                                                          |";
        cout << "\n|  2. |  Alat Kesehatan                                                       |";
        cout << "\n =============================================================================";
        cout << "\n\n  Apa yang Anda inginkan : ";
        cin >> opsi;

        switch(opsi){
            case 1 :
                MacamMacamObat();
                break;
            case 2 :
                AlatKesehatan();
                break;
            default :
                cout << "\n\n  Inputan salah, akan dikembalikan ke menu utama.";
                system("cls");
            	goto main;
        }
    
    return 0;
}    
