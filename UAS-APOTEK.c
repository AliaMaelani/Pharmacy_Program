#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int totalbayar = 0;
int totalpajak = 0;
int totalharga = 0;

    void StrukPembayaran(int bayar, int pajak, int diskon, int pembayaran, int cash, int selisih){

        char nama[30];
        struct tm *Sys_T;

        time_t Tval;
        Tval = time(NULL);
        Sys_T = localtime(&Tval);

        printf("\n\n  Atas nama siapa? (nama panggilan) : ");
        scanf("%s", nama);
        system("cls");
        printf("\n =================================================== ");
        printf("\n|                  APOTEK LYFECARE                  |");
        printf("\n|           Jl Sehat Selalu blok LA No 57           |");
        printf("\n|        Telukjambe Timur, Karawang, 42163          |");
        printf("\n|                 Telp (021)80707521                |");
        printf("\n|                                                   |");
        printf("\n =================================================== ");
        printf("\n  Tanggal    :  %d-%d-%d", Sys_T->tm_mday, Sys_T->tm_mon+1, 1900+Sys_T->tm_year);
        printf("\n  Jam        :  %d:%d:%d", Sys_T->tm_hour, Sys_T->tm_min, Sys_T->tm_sec);
        printf("\n  Nama Tamu  :  %s", nama);
        printf("\n  Kasir      :  Kelompok 1");
        printf("\n=====================================================");
        printf("\n\n\n                           SUB TOTAL  : Rp %d,00", bayar);
        printf("\n                           PAJAK      : Rp %d,00", pajak);
        printf("\n                           ==========================");
        printf("\n                           DISKON     : Rp %d,00", diskon);
        printf("\n                           ==========================");
        printf("\n                           TOTAL      : Rp %d,00", pembayaran);
        printf("\n                           ==========================");
        printf("\n                           CASH       : Rp %d,00", cash);
        printf("\n                           KEMBALI    : Rp %d,00", selisih);
        printf("\n=====================================================");
        printf("\n                    TERIMA KASIH                     ");
        printf("\n                 SEMOGA LEKAS SEMBUH                 ");
        printf("\n=====================================================");

		if(pembayaran > 750000){
			printf("\n\n\n  SELAMAT!!!");
			printf("\n  KAMU MENDAPATKAN KUPON GRATIS");
            printf("\n\n\n   ==================================================");
            printf("\n ||                 |                                ||");
            printf("\n||    KUPON GRATIS  |    EXP :                         ||");
            printf("\n||     TIMBANGAN    |          H + 2                   ||");
            printf("\n||                  |          SETELAH PEMBELIAN       ||");
            printf("\n||      SEHARGA     |                                  ||");
            printf("\n||    Rp 75,000,00  |     dibuktikan dengan struk      ||");
            printf("\n||                  |    pembelian > Rp 750,000,00     ||");
            printf("\n ||                                                   ||");
            printf("\n   ==================================================");
		} else if(pembayaran > 500000){
			printf("\n\n\n  SELAMAT!!!");
			printf("\n  KAMU MENDAPATKAN KUPON GRATIS");
            printf("\n\n\n   ==================================================");
            printf("\n ||                 |                                ||");
            printf("\n||    KUPON GRATIS  |    EXP :                         ||");
            printf("\n||     TERMOMETER   |          H + 2                   ||");
            printf("\n||                  |          SETELAH PEMBELIAN       ||");
            printf("\n||      SEHARGA     |                                  ||");
            printf("\n||    Rp 55,000,00  |     dibuktikan dengan struk      ||");
            printf("\n||                  |    pembelian > Rp 500,000,00     ||");
            printf("\n ||                                                   ||");
            printf("\n   ==================================================");
        } else {
            printf("\n\n\nMOHON MAAF, ANDA TIDAK MENDAPATKAN KUPON APAPUN");
    	}
    	exit(0);
    }

    void TotalSementara(int bayar, int pajak, int semua){

        int diskon, pembayaran, selisih, cash, total;
        char pil[2];

        TotalSementara:

            totalbayar += bayar;
            totalpajak += pajak;
            totalharga += semua;

            printf("\n\n\n||=========================================================================||");
            printf("\n||                             TOTAL SEMENTARA                             ||");
            printf("\n||=========================================================================||");
            printf("\n    Total pembelian sementara Anda             = Rp %d,00", totalbayar);
            printf("\n    Pajak pembelian sementara Anda (10 Persen) = Rp %d,00", totalpajak);
            printf("\n    Total pembelian sementara Anda menjadi     = Rp %d,00", totalharga);

            printf("\n  =========================================================================");

            if(totalharga > 400000){
                diskon = 20000;
                pembayaran = totalharga - diskon;
                printf("\n    Selamat! Anda mendapatkan diskon sebesar Rp %d,00 karena telah", diskon);
                printf("\n    membeli lebih dari Rp 400,000,00");
            	printf("\n    Total pembelian Anda menjadi               = Rp %d,00", pembayaran);
                printf("\n  =========================================================================");
			} else if(totalharga > 200000){
                diskon = 10000;
                pembayaran = totalharga - diskon;
                printf("\n    Selamat! Anda mendapatkan diskon sebesar Rp %d,00 karena telah", diskon);
                printf("\n    membeli lebih dari Rp 200,000,00");
                printf("\n\n    Total pembelian Anda menjadi         = Rp %d,00", pembayaran);
                printf("\n  =========================================================================  ");
            } else {
                diskon = 0;
                pembayaran = totalharga;
            }

            printf("\n\n\n  Apakah Anda ingin membeli lagi? (Y/T) :");
            scanf("%s", &pil);

            if (strcmp(pil,"y")==0||strcmp(pil,"Y")==0) {
                printf("  =========================================================================  ");
                system("cls");
            	main();
            } else if (strcmp(pil,"t")==0||strcmp(pil,"T")==0) {
                int a = 0;
                while (a < 1) {
                    printf("\n  =========================================================================\n");
                    printf("\n    TOTAL  =  Rp %i,00", pembayaran);
                    printf("\n    CASH   =  Rp ");
                    scanf("%d", &cash);

                    selisih = cash - pembayaran;

                    if (cash < pembayaran) {
                        printf("\n\n  UANG ANDA KURANG");
                        printf("\n\n  MASUKKAN NOMINAL MINIMAL %d ATAU LEBIH", pembayaran);
                        system("cls");
                        continue;
                    } else if (cash >= pembayaran) {
                        break;
                    } else {
                        printf("\n\n  Inputan salah, akan dikembalikan ke menu pembayaran");
                        system("cls");
                        continue;
                    }
                }
            } else {
                printf("\n\n  Inputan salah, akan dikembalikan ke menu total sementara");
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

            printf("\n\n\n  =========================================================================");
            printf("\n||                         DAFTAR KELUHAN PENYAKIT                         ||");
            printf("\n||=========================================================================||");
            printf("\n||  1.  ||   Batuk          ||  8.   ||   Anemia                           ||");
            printf("\n||  2.  ||   Pilek          ||  9.   ||   Jerawat                          ||");
            printf("\n||  3.  ||   Demam          ||  10.  ||   Panu, Kadas, Kurap               ||");
            printf("\n||  4.  ||   Nyeri          ||  11.  ||   Sakit Gigi                       ||");
            printf("\n||  5.  ||   Sakit Perut    ||  12.  ||   Radang Tenggorokan               ||");
            printf("\n||  6.  ||   Cacingan       ||  13.  ||   Lemas                            ||");
            printf("\n||  7.  ||   Sakit Kepala   ||  14.  ||   Mabuk Kendaraan & Masuk Angin    ||");
            printf("\n  =========================================================================");
            printf("\n\n  Ada keluhan apa? : ");
            scanf("%d", &pilihan);
            printf("\n------------------------------------------------------------------------");

            system("cls");

            switch(pilihan){
                case 1 :
                    printf("\n  Sebutkan usia Anda : ");
        	        scanf("%d", &usia);

                    if(usia > 12){
                        BatukDewasa:

                            printf("\n\n\n|=============================================================================|");
                            printf("\n|                        REKOMENDASI OBAT BATUK DEWASA                        |");
                            printf("\n|=============================================================================|");
                            printf("\n|                                Batuk Kering                                 |");
                            printf("\n|-----------------------------------------------------------------------------|");
                            printf("\n| 1. |  Woods Expectorant                      |   Rp  22,000,00   |   60ml   |");
                            printf("\n| 2. |  Siladex Antitussive                    |   Rp  17,000,00   |   60ml   |");
                            printf("\n|-----------------------------------------------------------------------------|");
                            printf("\n|                               Batuk Berdahak                                |");
                            printf("\n|-----------------------------------------------------------------------------|");
                            printf("\n| 3. |  Woods Antitussive                      |   Rp  22,000,00   |   60ml   |");
                            printf("\n| 4. |  Siladex Mucolytic & Expectorant        |   Rp  17,000,00   |   60ml   |");
                            printf("\n|-----------------------------------------------------------------------------|");
                            printf("\n|                                  Batuk Flu                                  |");
                            printf("\n|-----------------------------------------------------------------------------|");
                            printf("\n| 5. |  Komix OBH                              |   Rp   2,000,00   |    7ml   |");
                            printf("\n| 6. |  Siladex Cough & Cold                   |   Rp  23,000,00   |  100ml   |");
                            printf("\n|=============================================================================|");
                            printf("\n\n  Masukkan obat yang Anda inginkan : ");
                            scanf("%i", &batuk);
                            printf("\n-------------------------------------------------------------------------------");
                            printf("\n\n  Jumlah obat yang ingin dibeli : ");
                            scanf("%i", &jumlah);
                            printf("\n-------------------------------------------------------------------------------");

                            switch(batuk){
                                case 1 :
                                    harga = 22000;
                                    total = harga * jumlah;
                                    system("cls");
                                    printf("\n\n\n -------------------------------------------------------");
                                    printf("\n|      Harga %d Woods Expectorant adalah Rp %d,00    |", jumlah, total);
                                    printf("\n --  ---------------------------------------------------");
                                    printf("\n   |/");
                                    printf("\n\n|=======================================================================================|");
                                    printf("\n|                                   WOODS EXPECTORANT                                   |");
                                    printf("\n|=======================================================================================|");
                                    printf("\n| INDIKASI :                                                                            |");
                                    printf("\n| Meredakan gejala Batuk produktif/berdahak, Bronkhitis atau Emfisema.                  |");
                                    printf("\n|---------------------------------------------------------------------------------------|");
                                    printf("\n| DOSIS :                                                                               |");
                                    printf("\n| Dewasa (Usia > 12 tahun)                                                              |");
                                    printf("\n| 3 kali sehari (sesudah makan)                   |   2 sendok takar   |   (10 ml)   |  |");
                                    printf("\n| Anak-Anak (Usia <= 12 tahun)                                                          |");
                                    printf("\n| 3 kali sehari (sesudah makan)                   |   1 sendok takar   |   ( 5 ml)   |  |");
                                    printf("\n|=======================================================================================|");
                                    break;
                                case 2 :
                                    harga = 17000;
                                    total = harga * jumlah;
                                    system("cls");
                                    printf("\n\n\n -------------------------------------------------------");
                                    printf("\n|      Harga %d Siladex Antitussive adalah Rp %d,00    |", jumlah, total);
                                    printf("\n --  ---------------------------------------------------");
                                    printf("\n   |/");
                                    printf("\n\n|=======================================================================================|");
                                    printf("\n|                                  SILADEX ANTITUSSIVE                                  |");
                                    printf("\n|=======================================================================================|");
                                    printf("\n| INDIKASI :                                                                            |");
                                    printf("\n| Meringankan batuk tidak berdahak atau batuk kering yang disertai alergi.              |");
                                    printf("\n|---------------------------------------------------------------------------------------|");
                                    printf("\n| DOSIS :                                                                               |");
                                    printf("\n| Dewasa (Usia > 12 tahun)                                                              |");
                                    printf("\n| 3 kali sehari (sebelum atau sesudah makan)   |   1   sendok takar   |   (5   ml)   |  |");
                                    printf("\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |");
                                    printf("\n| 3 kali sehari (sebelum atau sesudah makan)   |   0.5 sendok takar   |   (2.5 ml)   |  |");
                                    printf("\n| Atau menurut petunjuk dokter.                                                         |");
                                    printf("\n|=======================================================================================|");
                                    break;
                                case 3 :
                                    harga = 22000;
                                    total = harga * jumlah;
                                    system("cls");
                                    printf("\n\n\n -------------------------------------------------------");
                                    printf("\n|      Harga %d Woods Antitussive adalah Rp %d,00    |", jumlah, total);
                                    printf("\n --  ---------------------------------------------------");
                                    printf("\n   |/");
                                    printf("\n\n|=======================================================================================|");
                                    printf("\n|                                   WOODS ANTITUSSIVE                                   |");
                                    printf("\n|=======================================================================================|");
                                    printf("\n| INDIKASI :                                                                            |");
                                    printf("\n| Gejala Batuk non-produktif/tidak berdahak yang disertai dengan Alergi.                |");
                                    printf("\n|---------------------------------------------------------------------------------------|");
                                    printf("\n| DOSIS :                                                                               |");
                                    printf("\n| Dewasa (Usia > 12 tahun)                                                              |");
                                    printf("\n| 3 kali sehari (sebelum atau sesudah makan)   |   1   sendok takar   |   (5   ml)   |  |");
                                    printf("\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |");
                                    printf("\n| 3 kali sehari (sebelum atau sesudah makan)   |   0.5 sendok takar   |   (2.5 ml)   |  |");
                                    printf("\n| Atau menurut petunjuk dokter.                                                         |");
                                    printf("\n|=======================================================================================|");
                                    break;
                                case 4 :
                                    harga = 17000;
                                    total = harga * jumlah;
                                    system("cls");
                                    printf("\n\n\n --------------------------------------------------------------------");
                                    printf("\n|      Harga %d Siladex Mucolytic & Expectorant adalah Rp %d,00   |", jumlah, total);
                                    printf("\n --  ----------------------------------------------------------------");
                                    printf("\n   |/");
                                    printf("\n\n|=======================================================================================|");
                                    printf("\n|                            SILADEX MUCOLYTIC & EXPECTORANT                            |");
                                    printf("\n|=======================================================================================|");
                                    printf("\n| INDIKASI :                                                                            |");
                                    printf("\n| Untuk mengencerkan dahak dan mempermudah untuk mengeluarkan dahak.                    |");
                                    printf("\n|---------------------------------------------------------------------------------------|");
                                    printf("\n| DOSIS :                                                                               |");
                                    printf("\n| Dewasa (Usia > 12 tahun)                                                              |");
                                    printf("\n| 3 kali sehari (sesudah makan)                  |   1   sendok teh   |   (5   ml)   |  |");
                                    printf("\n| Anak-Anak (Usia 5 - 12 tahun)                                                         |");
                                    printf("\n| 3 kali sehari (sesudah makan)                  |   0.5 sendok teh   |   (2.5 ml)   |  |");
                                    printf("\n| Atau menurut petunjuk dokter                                                          |");
                                    printf("\n|=======================================================================================|");
                                    break;
                                case 5 :
                                    harga = 2000;
                                    total = harga * jumlah;
                                    system("cls");
                                    printf("\n\n\n ---------------------------------------------");
                                    printf("\n|      Harga %d Komix OBH adalah Rp %d,00   |", jumlah, total);
                                    printf("\n --  -----------------------------------------");
                                    printf("\n   |/");
                                    printf("\n\n|=======================================================================================|");
                                    printf("\n|                                       KOMIX OBH                                       |");
                                    printf("\n|=======================================================================================|");
                                    printf("\n| INDIKASI :                                                                            |");
                                    printf("\n| Meredakan batuk berdahak dan pilek, serta melegakan panas dalam.                      |");
                                    printf("\n|---------------------------------------------------------------------------------------|");
                                    printf("\n| DOSIS :                                                                               |");
                                    printf("\n| Dewasa (Usia > 12 tahun)                                                              |");
                                    printf("\n| 3 kali sehari (sesudah makan)                         |   2 sachet   |   (14 ml)   |  |");
                                    printf("\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |");
                                    printf("\n| 3 kali sehari (sesudah makan)                         |   1 sachet   |   ( 7 ml)   |  |");
                                    printf("\n| Atau menurut petunjuk dokter                                                          |");
                                    printf("\n|=======================================================================================|");
                                    break;
                                case 6 :
                                    harga = 23000;
                                    total = harga * jumlah;
                                    system("cls");
                                    printf("\n\n\n ---------------------------------------------------------");
                                    printf("\n|     Harga %d Siladex Cough & Cold adalah Rp %d,00    |", jumlah, total);
                                    printf("\n --  -----------------------------------------------------");
                                    printf("\n   |/");
                                    printf("\n\n|=======================================================================================|");
                                    printf("\n|                                   SILADEX COUGH & COLD                                |");
                                    printf("\n|=======================================================================================|");
                                    printf("\n| INDIKASI :                                                                            |");
                                    printf("\n| Untuk meredakan batuk tidak berdahak dan melegakan hidung tersumbat atau pilek        |");
                                    printf("\n| yang menyertai flu.                                                                   |");
                                    printf("\n|---------------------------------------------------------------------------------------|");
                                    printf("\n| DOSIS :                                                                               |");
                                    printf("\n| Dewasa (Usia > 12 tahun)                                                              |");
                                    printf("\n| 3 kali sehari (sesudah makan)                   |   2 sendok takar   |   (10 ml)   |  |");
                                    printf("\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |");
                                    printf("\n| 3 kali sehari (sesudah makan)                   |   1 sendok takar   |   (5  ml)   |  |");
                                    printf("\n| Atau menurut petunjuk dokter                                                          |");
                                    printf("\n|=======================================================================================|");
                                    break;
                                default :
                                    printf("\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat batuk dewasa.");
                                    system("cls");
                                	goto BatukDewasa;
                            }
                    }
                    else if(usia <= 12){
                        BatukAnak:

                            printf("\n\n\n|=============================================================================|");
                            printf("\n|                         REKOMENDASI OBAT BATUK ANAK                         |");
                            printf("\n|=============================================================================|");
                            printf("\n|                                Batuk Kering                                 |");
                            printf("\n|-----------------------------------------------------------------------------|");
                            printf("\n|1. |  Hufagripp BP                               |   Rp 17,000,00   |  60ml  |");
                            printf("\n|2. |  Viks Formula 44 Anak                       |   Rp 22,000,00   |  54ml  |");
                            printf("\n|-----------------------------------------------------------------------------|");
                            printf("\n|                               Batuk Berdahak                                |");
                            printf("\n|-----------------------------------------------------------------------------|");
                            printf("\n|3. |  Triaminic Expectorant                      |   Rp 87,000,00   |  50ml  |");
                            printf("\n|4. |  OB Herbal Junior                           |   Rp 18,000,00   |  60ml  |");
                            printf("\n|-----------------------------------------------------------------------------|");
                            printf("\n|                                  Batuk Flu                                  |");
                            printf("\n|-----------------------------------------------------------------------------|");
                            printf("\n|5. |  Hufagripp Flu & Batuk                      |   Rp 22,000,00   |  60ml  |");
                            printf("\n|6. |  OBH Combi Anak                             |   Rp 17,000,00   |  60ml  |");
                            printf("\n|=============================================================================|");
                            printf("\n\n  Masukkan obat yang Anda inginkan :");
                            scanf("%i", &batuk);
                            printf("\n-------------------------------------------------------------------------------");
                            printf("\n\n  Jumlah obat yang ingin dibeli : ");
                            scanf("%i", &jumlah);
                            printf("\n-------------------------------------------------------------------------------");

                            switch(batuk){
                                case 1 :
                                    harga = 17000;
                                    total = harga * jumlah;
                                    system("cls");
                                    printf("\n\n\n -------------------------------------------------");
                                    printf("\n|     Harga %d Hufagripp BP adalah Rp %d,00    |", jumlah, total);
                                    printf("\n --  ---------------------------------------------");
                                    printf("\n   |/");
                                    printf("\n\n|=======================================================================================|");
                                    printf("\n|                                      HUFAGRIPP BP                                     |");
                                    printf("\n|=======================================================================================|");
                                    printf("\n| INDIKASI :                                                                            |");
                                    printf("\n| Meringankan pilek dan batuk tidak berdahak.                                           |");
                                    printf("\n|---------------------------------------------------------------------------------------|");
                                    printf("\n| DOSIS :                                                                               |");
                                    printf("\n| Dewasa (Usia > 12 tahun)                                                              |");
                                    printf("\n| 3 kali sehari (sesudah makan)                  |   2   sendok teh   |   (10  ml)   |  |");
                                    printf("\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |");
                                    printf("\n| 3 kali sehari (sesudah makan)                  |   1   sendok teh   |   (5   ml)   |  |");
                                    printf("\n| Anak-Anak (Usia 2 - 6 tahun)                                                          |");
                                    printf("\n| 3 kali sehari (sesudah makan)                  |   0.5 sendok teh   |   (2.5 ml)   |  |");
                                    printf("\n| Anak-Anak (Usia < 2 tahun)                                                            |");
                                    printf("\n| Menurut petunjuk dokter                                                               |");
                                    printf("\n|=======================================================================================|");
                                    break;
                                case 2 :
                                    harga = 22000;
                                    total = harga * jumlah;
                                    system("cls");
                                    printf("\n\n\n -------------------------------------------------------");
                                    printf("\n|   Harga %d Viks Formula 44 Anak adalah Rp %d,00    |", jumlah, total);
                                    printf("\n --  ---------------------------------------------------");
                                    printf("\n   |/");
                                    printf("\n\n|=======================================================================================|");
                                    printf("\n|                                 VIKS FORMULA 44 ANAK                                  |");
                                    printf("\n|=======================================================================================|");
                                    printf("\n| INDIKASI :                                                                            |");
                                    printf("\n| Untuk meringankan batuk.                                                              |");
                                    printf("\n|---------------------------------------------------------------------------------------|");
                                    printf("\n| DOSIS :                                                                               |");
                                    printf("\n| Gunakan setiap 4 jam sesuai kebutuhan.                                                |");
                                    printf("\n| Dewasa (Usia > 12 tahun)                                                              |");
                                    printf("\n| Sebelum atau sesudah makan                      |   4 sendok takar   |   (20 ml)   |  |");
                                    printf("\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |");
                                    printf("\n| Sebelum atau sesudah makan                      |   2 sendok takar   |   (10 ml)   |  |");
                                    printf("\n| Anak-Anak (Usia 2 - 6 tahun)                                                          |");
                                    printf("\n| Sebelum atau sesudah makan                      |   1 sendok takar   |   (5  ml)   |  |");
                                    printf("\n| Atau gunakan sesuai petunjuk dokter.                                                  |");
                                    printf("\n|=======================================================================================|");
                                    break;
                                case 3 :
                                    harga = 87000;
                                    total = harga * jumlah;
                                    system("cls");
                                    printf("\n\n\n --------------------------------------------------------");
                                    printf("\n|   Harga %d Triaminic Expectorant adalah Rp %d,00    |", jumlah, total);
                                    printf("\n --  ----------------------------------------------------");
                                    printf("\n   |/");
                                    printf("\n\n|=======================================================================================|");
                                    printf("\n|                                 TRIAMINIC EXPECTORANT                                 |");
                                    printf("\n|=======================================================================================|");
                                    printf("\n| INDIKASI :                                                                            |");
                                    printf("\n| Untuk meringankan batuk berdahak dan melegakan hidung tersumbat karena pilek.         |");
                                    printf("\n|---------------------------------------------------------------------------------------|");
                                    printf("\n| DOSIS :                                                                               |");
                                    printf("\n| Dewasa (Usia > 12 tahun)                                                              |");
                                    printf("\n| 3 kali sehari (sebelum atau sesudah makan)   |   2   sendok takar   |   (10  ml)   |  |");
                                    printf("\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |");
                                    printf("\n| 3 kali sehari (sebelum atau sesudah makan)   |   1   sendok takar   |   (5   ml)   |  |");
                                    printf("\n| Anak-Anak (Usia 2 - 6 tahun)                                                          |");
                                    printf("\n| 3 kali sehari (sebelum atau sesudah makan)   |   0.5 sendok takar   |   (2.5 ml)   |  |");
                                    printf("\n|=======================================================================================|");
                                    break;
                                case 4 :
                                    harga = 18000;
                                    total = harga * jumlah;
                                    system("cls");
                                    printf("\n\n\n ---------------------------------------------------");
                                    printf("\n|   Harga %d OB Herbal Junior adalah Rp %d,00    |", jumlah, total);
                                    printf("\n --  -----------------------------------------------");
                                    printf("\n   |/");
                                    printf("\n\n|=======================================================================================|");
                                    printf("\n|                                   OB HERBAL JUNIOR                                    |");
                                    printf("\n|=======================================================================================|");
                                    printf("\n| INDIKASI :                                                                            |");
                                    printf("\n| Untuk meringankan batuk dan melegakan tenggorokan.                                    |");
                                    printf("\n|---------------------------------------------------------------------------------------|");
                                    printf("\n| DOSIS :                                                                               |");
                                    printf("\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |");
                                    printf("\n| 3 kali sehari (sesudah makan)                    |   2 sendok takar   |   (10 ml)  |  |");
                                    printf("\n|=======================================================================================|");
                                    break;
                                case 5 :
                                    harga = 22000;
                                    total = harga * jumlah;
                                    system("cls");
                                    printf("\n\n\n --------------------------------------------------------");
                                    printf("\n|   Harga %d Hufagripp Flu & Batuk adalah Rp %d,00    |", jumlah, total);
                                    printf("\n --  ----------------------------------------------------");
                                    printf("\n   |/");
                                    printf("\n\n|=======================================================================================|");
                                    printf("\n|                                 HUFAGRIPP FLU & BATUK                                 |");
                                    printf("\n|=======================================================================================|");
                                    printf("\n| INDIKASI :                                                                            |");
                                    printf("\n| Untuk mengobati gejala influenza, seperti demam, sakit kepala, hidung tersumbat       |");
                                    printf("\n| disertai bersin dan batuk berdahak.                                                   |");
                                    printf("\n|---------------------------------------------------------------------------------------|");
                                    printf("\n| DOSIS :                                                                               |");
                                    printf("\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |");
                                    printf("\n| 3 kali sehari (sesudah makan)                     |   2 sendok teh   |   (10 ml)   |  |");
                                    printf("\n| Anak-Anak (Usia 2 - 6 tahun)                                                          |");
                                    printf("\n| 3 kali sehari (sesudah makan)                     |   1 sendok teh   |   (5  ml)   |  |");
                                    printf("\n|=======================================================================================|");
                                    break;
                                case 6 :
                                    harga = 17000;
                                    total = harga * jumlah;
                                    system("cls");
                                    printf("\n\n\n -------------------------------------------------");
                                    printf("\n|   Harga %d OBH Combi Anak adalah Rp %d,00    |", jumlah, total);
                                    printf("\n --  ---------------------------------------------");
                                    printf("\n   |/");
                                    printf("\n\n|=======================================================================================|");
                                    printf("\n|                                    OBH COMBI ANAK                                     |");
                                    printf("\n|=======================================================================================|");
                                    printf("\n| INDIKASI :                                                                            |");
                                    printf("\n| Meredakan batuk yang disertai gejala-gejala flu pada anak seperti demam, sakit kepala,|");
                                    printf("\n| hidung tersumbat dan bersin-bersin.                                                   |");
                                    printf("\n|---------------------------------------------------------------------------------------|");
                                    printf("\n| DOSIS :                                                                               |");
                                    printf("\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |");
                                    printf("\n| 3 kali sehari (sesudah makan)                   |   2 sendok takar   |   (10 ml)   |  |");
                                    printf("\n| Anak-Anak (Usia 2 - 5 tahun)                                                          |");
                                    printf("\n| 3 kali sehari (sesudah makan)                   |   1 sendok takar   |   (5  ml)   |  |");
                                    printf("\n|=======================================================================================|");
                                    break;
                                default :
                                    printf("\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat batuk anak.");
                                    system("cls");
                                    goto BatukAnak;
                            }
                    }
                    break;

                case 2 :
                    printf("\n  Sebutkan usia Anda : ");
        	        scanf("%d", &usia);

                    if(usia > 12){
                    	PilekDewasa:

	                        printf("\n\n\n|==============================================================================|");
	                        printf("\n|                 REKOMENDASI OBAT PILEK DEWASA                                |");
	                        printf("\n|==============================================================================|");
	                        printf("\n|        Tablet :                                                              |");
	                        printf("\n|------------------------------------------------------------------------------|");
	                        printf("\n| 1.  |  Panadol Cold & Flu                  |   Rp  16,000,00   |   1 strip   |");
	                        printf("\n| 2.  |  Mixagrip Flu & Batuk                |   Rp   3,000,00   |   1 strip   |");
	                        printf("\n| 3.  |  Paramex Flu & Batuk PE              |   Rp   3,000,00   |   1 strip   |");
	                        printf("\n-------------------------------------------------------------------------------|");
	                        printf("\n|        Sirup :                                                               |");
	                        printf("\n-------------------------------------------------------------------------------|");
	                        printf("\n| 4.  |  Bodrex Flu & Batuk                  |   Rp  13,000,00   |     60ml    |");
	                        printf("\n| 5.  |  Tolak Angin Flu                     |   Rp   3,000,00   |      5ml    |");
	                        printf("\n| 6.  |  OB Combi Batuk Pilek                |   Rp  21,000,00   |    100ml    |");
	                        printf("\n|==============================================================================|");
	                        printf("\n\n  Masukkan obat yang Anda inginkan : ");
	                        scanf("%i", &pilek);
	                        printf("\n------------------------------------------------------------------------------");
	                        printf("\n\n  Jumlah obat yang ingin dibeli : ");
	                        scanf("%i", &jumlah);

	                        switch(pilek){
	                            case 1 :
	                                harga = 16000;
	                                total = harga * jumlah;
	                                system("cls");
	                                printf("\n\n\n -----------------------------------------------------");
	                                printf("\n|   Harga %d Panadol Cold & Flu adalah Rp %d,00    |", jumlah, total);
	                                printf("\n --  -------------------------------------------------");
	                                printf("\n   |/");
	                                printf("\n\n|=======================================================================================|");
	                                printf("\n|                                  PANADOL COLD & FLU                                   |");
	                                printf("\n|=======================================================================================|");
	                                printf("\n| INDIKASI :                                                                            |");
	                                printf("\n| Untuk meredakan gejala flu seperti demam, sakit kepala, hidung tersumbat, dan         |");
	                                printf("\n| batuk tidak berdahak.                                                                 |");
	                                printf("\n|---------------------------------------------------------------------------------------|");
	                                printf("\n| DOSIS :                                                                               |");
	                                printf("\n| Dewasa (Usia > 12 tahun)                                                              |");
	                                printf("\n| 3 kali sehari (sesudah makan)                                     |   1 kaplet   |    |");
	                                printf("\n|                                                                                       |");
	                                printf("\n| Jangan diberikan kepada anak-anak di usia < 12 tahun, kecuali atas petunjuk dokter    |");
	                                printf("\n|=======================================================================================|");
	                            	break;
	                            case 2 :
	                                harga = 3000;
	                                total = harga * jumlah;
	                                system("cls");
	                                printf("\n\n\n ------------------------------------------------------");
	                                printf("\n|   Harga %d Mixagrip Flu & Batuk adalah Rp %d,00    |", jumlah, total);
	                                printf("\n --  --------------------------------------------------");
	                                printf("\n   |/");
	                                printf("\n\n|=======================================================================================|");
	                                printf("\n|                                 MIXAGRIP FLU & BATUK                                  |");
	                                printf("\n|=======================================================================================|");
	                                printf("\n| INDIKASI :                                                                            |");
	                                printf("\n| Untuk meredakan gejala flu seperti bersin-bersin, hidung berair, hidung tersumbat,    |");
	                                printf("\n| demam, dan sakit kepala yang disertai batuk.                                          |");
	                                printf("\n|---------------------------------------------------------------------------------------|");
	                                printf("\n| DOSIS :                                                                               |");
	                                printf("\n| Dewasa (Usia > 12 tahun)                                                              |");
	                                printf("\n| 3 kali sehari (sesudah makan)                                   |   1   kaplet   |    |");
	                                printf("\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |");
	                                printf("\n| 3 kali sehari (sesudah makan)                                   |   0.5 kaplet   |    |");
	                                printf("\n|=======================================================================================|");
	                            	break;
	                            case 3 :
	                                harga = 3000;
	                                total = harga * jumlah;
	                                system("cls");
	                                printf("\n\n\n --------------------------------------------------------");
	                                printf("\n|   Harga %d Paramex Flu & Batuk PE adalah Rp %d,00    |", jumlah, total);
	                                printf("\n --  ----------------------------------------------------");
	                                printf("\n   |/");
	                                printf("\n\n|=======================================================================================|");
	                                printf("\n|                               PARAMEX FLU & BATUK PE                                  |");
	                                printf("\n|=======================================================================================|");
	                                printf("\n| INDIKASI :                                                                            |");
	                                printf("\n| Meredakan gejala flu seperti demam, sakit kepala, hidung tersumbat, dan bersin-bersin |");
	                                printf("\n| yang disertai batuk kering.                                                           |");
	                                printf("\n|---------------------------------------------------------------------------------------|");
	                                printf("\n| DOSIS :                                                                               |");
	                                printf("\n| Dewasa (Usia > 12 tahun)                                                              |");
	                                printf("\n| 3 kali sehari (sesudah makan)                                   |   1   tablet   |    |");
	                                printf("\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |");
	                                printf("\n| 3 kali sehari (sesudah makan)                                   |   0.5 tablet   |    |");
	                                printf("\n|=======================================================================================|");
	                            	break;
	                            case 4 :
	                                harga = 13000;
	                                total = harga * jumlah;
	                                system("cls");
	                                printf("\n\n\n -----------------------------------------------------");
	                                printf("\n|   Harga %d Bodrex Flu & Batuk adalah Rp %d,00    |", jumlah, total);
	                                printf("\n --  -------------------------------------------------");
	                                printf("\n   |/");
	                                printf("\n\n|=======================================================================================|");
	                                printf("\n|                                  BODREX FLU & BATUK                                   |");
	                                printf("\n|=======================================================================================|");
	                                printf("\n| INDIKASI :                                                                            |");
	                                printf("\n| Meredakan gejala-gejala flu seperti demam, sakit kepala, hidung tersumbat, dan        |");
	                                printf("\n| bersin-bersin yang disertai batuk kering.                                             |");
	                                printf("\n|---------------------------------------------------------------------------------------|");
	                                printf("\n| DOSIS :                                                                               |");
	                                printf("\n| Dewasa (Usia > 12 tahun)                                                              |");
	                                printf("\n| 3 kali sehari (sesudah makan)                                   |   1   kaplet   |    |");
	                                printf("\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |");
	                                printf("\n| 3 kali sehari (sesudah makan)                                   |   0.5 kaplet   |    |");
	                                printf("\n|=======================================================================================|");
	                            	break;
	                            case 5 :
	                                harga = 3000;
	                                total = harga * jumlah;
	                                system("cls");
	                                printf("\n\n\n -------------------------------------------------");
	                                printf("\n|   Harga %d Tolak Angin Flu adalah Rp %d,00    |", jumlah, total);
	                                printf("\n --  ---------------------------------------------");
	                                printf("\n   |/");
	                                printf("\n\n|=======================================================================================|");
	                                printf("\n|                                    TOLAK ANGIN FLU                                    |");
	                                printf("\n|=======================================================================================|");
	                                printf("\n| INDIKASI :                                                                            |");
	                                printf("\n| Membantu meringankan gejala flu, membantu meringankan masuk angin, serta membantu     |");
	                                printf("\n| memelihara daya tahan tubuh.                                                          |");
	                                printf("\n|---------------------------------------------------------------------------------------|");
	                                printf("\n| DOSIS :                                                                               |");
	                                printf("\n| Dewasa (Usia > 12 tahun)                                                              |");
	                                printf("\n| 3 kali sehari (sesudah makan)                                     |   1 sachet   |    |");
	                                printf("\n|---------------------------------------------------------------------------------------|");
	                                printf("\n| ATURAN PAKAI :                                                                        |");
	                                printf("\n| Obat dapat langsung diminum atau dapat dicampur dengan setengah gelas air hangat.     |");
	                                printf("\n|=======================================================================================|");
	                            	break;
	                            case 6 :
	                                harga = 21000;
	                                total = harga * jumlah;
	                                system("cls");
	                                printf("\n\n\n -------------------------------------------------------");
	                                printf("\n|   Harga %d OB Combi Batuk Pilek adalah Rp %d,00    |", jumlah, total);
	                                printf("\n --  ---------------------------------------------------");
	                                printf("\n   |/");
	                                printf("\n\n|=======================================================================================|");
	                                printf("\n|                                 OB COMBI BATUK PILEK                                  |");
	                                printf("\n|=======================================================================================|");
	                                printf("\n| INDIKASI :                                                                            |");
	                                printf("\n| Untuk meredakan batuk yang disertai gejala-gejala flu seperti demam, sakit kepala,    |");
	                                printf("\n| hidung tersumbat, dan bersin-bersin.                                                  |");
	                                printf("\n|---------------------------------------------------------------------------------------|");
	                                printf("\n| DOSIS :                                                                               |");
	                                printf("\n| Dewasa (Usia > 12 tahun)                                                              |");
	                                printf("\n| 3 kali sehari (sesudah makan)                   |   3 sendok takar   |   (15 ml)   |  |");
	                                printf("\n|=======================================================================================|");
	                            	break;
	                            default :
	                                printf("\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat pilek dewasa.");
	                                system("cls");
	                            	goto PilekDewasa;
                        	}
                    }
                    else if(usia <= 12){
                    	PilekAnak:

	                        printf("\n\n\n|=============================================================================|");
	                        printf("\n|                        REKOMENDASI OBAT PILEK ANAK                          |");
	                        printf("\n|=============================================================================|");
	                        printf("\n|       Sirup :                                                               |");
	                        printf("\n|-----------------------------------------------------------------------------|");
	                        printf("\n| 1. |  Hufagripp Pilek                        |   Rp  18,000,00   |   60ml   |");
	                        printf("\n| 2. |  Bodrexin Pilek Alergi PE               |   Rp  12,000,00   |   56ml   |");
	                        printf("\n| 3. |  Triaminic Pilek                        |   Rp  86,000,00   |   60ml   |");
	                        printf("\n| 4. |  OBH Combi Batuk Flu Anak               |   Rp  17,000,00   |   60ml   |");
	                        printf("\n|=============================================================================|");
	                        printf("\n\n  Masukkan obat yang Anda inginkan : ");
	                        scanf("%i", &pilek);
	                        printf("\n------------------------------------------------------------------------------");
	                        printf("\n\n  Jumlah obat yang ingin dibeli : ");
	                        scanf("%i", &jumlah);

	                        switch(pilek){
	                            case 1 :
	                                harga = 18000;
	                                total = harga * jumlah;
	                                system("cls");
	                                printf("\n\n\n --------------------------------------------------");
	                                printf("\n|   Harga %d Hufagripp Pilek adalah Rp %d,00    |", jumlah, total);
	                                printf("\n --  ----------------------------------------------");
	                                printf("\n   |/");
	                                printf("\n\n|=======================================================================================|");
	                                printf("\n|                                    HUFAGRIPP PILEK                                    |");
	                                printf("\n|=======================================================================================|");
	                                printf("\n| INDIKASI :                                                                            |");
	                                printf("\n| Untuk meringankan bersin-bersin dan hidung tersumbat karena pilek.                    |");
	                                printf("\n|---------------------------------------------------------------------------------------|");
	                                printf("\n| DOSIS :                                                                               |");
	                                printf("\n| Dewasa (Usia > 12 tahun)                                                              |");
	                                printf("\n| 3 kali sehari (sesudah makan)               |   2   sendok takar   |   (10   ml)   |  |");
	                                printf("\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |");
	                                printf("\n| 3 kali sehari (sesudah makan)               |   1   sendok takar   |   ( 5   ml)   |  |");
	                                printf("\n| Anak-Anak (Usia 2 - 6 tahun)                                                          |");
	                                printf("\n| 3 kali sehari (sesudah makan)               |   0.5 sendok takar   |   ( 2.5 ml)   |  |");
	                                printf("\n| Anak-Anak (Usia < 2 tahun)                                                            |");
	                                printf("\n| Menurut petunjuk dokter                                                               |");
	                                printf("\n|=======================================================================================|");
	                            	break;
	                            case 2 :
	                                harga = 12000;
	                                total = harga * jumlah;
	                                system("cls");
	                                printf("\n\n\n -----------------------------------------------------------");
	                                printf("\n|   Harga %d Bodrexin Pilek Alergi PE adalah Rp %d,00    |", jumlah, total);
	                                printf("\n --  -------------------------------------------------------");
	                                printf("\n   |/");
	                                printf("\n|=======================================================================================|");
	                                printf("\n|                               BODREXIN PILEK ALERGI PE                                |");
	                                printf("\n|=======================================================================================|");
	                                printf("\n| INDIKASI :                                                                            |");
	                                printf("\n| Meredakan rinitis alergi, bersin-bersin, dan hidung tersumbat.                        |");
	                                printf("\n|---------------------------------------------------------------------------------------|");
	                                printf("\n| DOSIS :                                                                               |");
	                                printf("\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |");
	                                printf("\n| 3 kali sehari (berikan bersama makanan)         |   2 sendok takar   |   (10 ml)   |  |");
	                                printf("\n| Anak-Anak (Usia 2 - 5 tahun)                                                          |");
	                                printf("\n| 3 kali sehari (berikan bersama makanan)         |   1 sendok takar   |   (5  ml)   |  |");
	                                printf("\n|=======================================================================================|");
	                            	break;
	                            case 3 :
	                                harga = 86000;
	                                total = harga * jumlah;
	                                system("cls");
	                                printf("\n\n\n --------------------------------------------------");
	                                printf("\n|   Harga %d Triaminic Pilek adalah Rp %d,00    |", jumlah, total);
	                                printf("\n --  ----------------------------------------------");
	                                printf("\n   |/");
	                                printf("\n|=======================================================================================|");
	                                printf("\n|                                    TRIAMINIC PILEK                                    |");
	                                printf("\n|=======================================================================================|");
	                                printf("\n| INDIKASI :                                                                            |");
	                                printf("\n| Meredakan bersin-bersin dan hidung tersumbat yang disebabkan oleh pilek.              |");
	                                printf("\n|---------------------------------------------------------------------------------------|");
	                                printf("\n| DOSIS :                                                                               |");
	                                printf("\n| Dewasa (Usia > 12 tahun)                                                              |");
	                                printf("\n| 3 kali sehari (sebelum atau sesudah makan)      |   2 sendok takar   |   (10 ml)   |  |");
	                                printf("\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |");
	                                printf("\n| 3 kali sehari (sebelum atau sesudah makan)      |   1 sendok takar   |   (5  ml)   |  |");
	                                printf("\n| Anak-Anak (Usia < 6 tahun)                                                            |");
	                                printf("\n| Atas petunjuk dokter                                                                  |");
	                                printf("\n|=======================================================================================|");
	                            	break;
	                            case 4 :
	                                harga = 17000;
	                            	total = harga * jumlah;
	                                system("cls");
	                                printf("\n\n\n ---------------------------------------------------------");
	                                printf("\n|   Harga %d OBH Combi Batuk Flu Anak adalah Rp %d,00    |", jumlah, total);
	                                printf("\n --  ------------------------------------------------------");
	                                printf("\n   |/");
	                                printf("\n\n|=======================================================================================|");
	                                printf("\n|                               OBH COMBI BATUK FLU ANAK                                |");
	                                printf("\n|=======================================================================================|");
	                                printf("\n| INDIKASI :                                                                            |");
	                                printf("\n| Meredakan betuk yang disertai gejala-gejala flu pada anak seperti demam, sakit kepala,|");
	                                printf("\n| hidung tersumbat, dan bersin-bersin.                                                  |");
	                                printf("\n|---------------------------------------------------------------------------------------|");
	                                printf("\n| DOSIS :                                                                               |");
	                                printf("\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |");
	                                printf("\n| 3 kali sehari (sesudah makan)                   |   2 sendok takar   |   (10 ml)   |  |");
	                                printf("\n| Anak-Anak (Usia 2 - 6 tahun)                                                          |");
	                                printf("\n| 3 kali sehari (sesudah makan)                   |   1 sendok takar   |   (5  ml)   |  |");
	                                printf("\n|=======================================================================================|");
	                            	break;
	                            default :
                                   	printf("\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat pilek anak.");
                                  	system("cls");
                                	goto PilekAnak;
	                        }
                    }
                	break;

                case 3 :
                    printf("\n  Sebutkan usia Anda : ");
        	        scanf("%d", &usia);

                    if(usia > 12){
                    	DemamDewasa:

	                        printf("\n\n\n|======================================================================|");
	                        printf("\n|                    REKOMENDASI OBAT DEMAM DEWASA                     |");
	                        printf("\n|======================================================================|");
	                        printf("\n|       Tablet :                                                       |");
	                        printf("\n|----------------------------------------------------------------------|");
	                        printf("\n| 1. |  Sanmol Tablet              |   Rp  2,000,00    |    4 tablet   |");
	                        printf("\n| 2. |  Panadol Paracetamol        |   Rp 12,000,00    |   10 tablet   |");
	                        printf("\n| 3. |  Bodrex Tablet              |   Rp  9,000,00    |   20 tablet   |");
	                        printf("\n| 4. |  Biogesic Paracetamol       |   Rp  2,000,00    |    4 tablet   |");
	                        printf("\n|======================================================================|");
	                        printf("\n\n  Masukkan obat yang Anda inginkan : ");
	                        scanf("%i", &demam);
	                        printf("\n------------------------------------------------------------------------");
	                        printf("\n\n  Jumlah obat yang ingin dibeli : ");
	                        scanf("%i", &jumlah);

	                        switch(demam){
	                            case 1 :
	                                harga = 2000;
	                                total = harga * jumlah;
	                                system("cls");
	                                printf("\n\n\n -----------------------------------------------");
	                                printf("\n|   Harga %d Sanmol Tablet adalah Rp %d,00    |", jumlah, total);
	                                printf("\n --  -------------------------------------------");
	                                printf("\n   |/");
	                                printf("\n\n|=======================================================================================|");
	                                printf("\n|                                      SANMOL TABLET                                    |");
	                                printf("\n|=======================================================================================|");
	                                printf("\n| INDIKASI :                                                                            |");
	                                printf("\n| Untuk meringankan rasa sakit pada keadaan sakit kepala, sakit gigi, dan menurunkan    |");
	                                printf("\n| demam.                                                                                |");
	                                printf("\n|---------------------------------------------------------------------------------------|");
	                                printf("\n| DOSIS :                                                                               |");
	                                printf("\n| Dewasa (Usia > 12 tahun)                                                              |");
	                                printf("\n| 3 - 4 kali sehari (sebelum atau sesudah makan)              |      1 kaplet      |    |");
	                                printf("\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |");
	                                printf("\n| 3 - 4 kali sehari (sebelum atau sesudah makan)              |   0.5 - 1 kaplet   |    |");
	                                printf("\n|=======================================================================================|");
	                            	break;
	                            case 2 :
	                                harga = 12000;
	                                total = harga * jumlah;
	                                system("cls");
	                                printf("\n\n\n ------------------------------------------------------");
	                                printf("\n|   Harga %d Panadol Paracetamol adalah Rp %d,00    |", jumlah, total);
	                                printf("\n --  --------------------------------------------------");
	                                printf("\n   |/");
	                                printf("\n\n|=======================================================================================|");
	                                printf("\n|                                 PANADOL PARACETAMOL                                   |");
	                                printf("\n|=======================================================================================|");
	                                printf("\n| INDIKASI :                                                                            |");
	                                printf("\n| Untuk meredakan nyeri ringan hingga sedang seperti sakit kepala, sakit gigi, sakit    |");
	                                printf("\n| pada otot, serta menurunkan demam.                                                    |");
	                                printf("\n|---------------------------------------------------------------------------------------|");
	                                printf("\n| DOSIS :                                                                               |");
	                                printf("\n| Dewasa (Usia > 12 tahun)                                                              |");
	                                printf("\n| 3 - 4 kali sehari (sebelum atau sesudah makan)              |   1   - 2 kaplet   |    |");
	                                printf("\n| Anak-Anak (Usia 6 - 11 tahun)                                                         |");
	                                printf("\n| 3 - 4 kali sehari (sebelum atau sesudah makan)              |   0.5 - 1 kaplet   |    |");
	                                printf("\n|=======================================================================================|");
	                                printf("\n| ATURAN PAKAI :                                                                        |");
	                                printf("\n| Minimum interval penggunaan dosis adalah 4 jam                                        |");
	                                printf("\n| Jangan melebihi dosis yang dianjurkan, atau menurut aturan dokter                     |");
	                                printf("\n|=======================================================================================|");
	                            	break;
	                            case 3 :
	                                harga = 9000;
	                                total = harga * jumlah;
	                                system("cls");
	                                printf("\n\n\n --------------------------------------------------");
	                                printf("\n|   Harga %d Bodrex Tablet adalah Rp %d,00    |", jumlah, total);
	                                printf("\n --  ----------------------------------------------");
	                                printf("\n   |/");
	                                printf("\n\n|=======================================================================================|");
	                                printf("\n|                               BODREX TABLET                                           |");
	                                printf("\n|=======================================================================================|");
	                                printf("\n| INDIKASI :                                                                            |");
	                                printf("\n| Meringankan sakit kepala, sakit gigi, dan menurunkan demam.                           |");
	                                printf("\n|---------------------------------------------------------------------------------------|");
	                                printf("\n| DOSIS :                                                                               |");
	                                printf("\n| Dewasa (Usia > 12 tahun)                                                              |");
	                                printf("\n| 3 - 4 kali sehari (sesudah makan)                           |      1 kaplet      |    |");
	                                printf("\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |");
	                                printf("\n| 3 - 4 kali sehari (sesudah makan)                           |   0.5 - 1 kaplet   |    |");
	                                printf("\n| Atau sesuai petunjuk dokter                                                           |");
	                                printf("\n|=======================================================================================|");
	                            	break;
	                            case 4 :
	                                harga = 2000;
	                                total = harga * jumlah;
	                                system("cls");
	                                printf("\n\n\n ------------------------------------------------------");
	                                printf("\n|   Harga %d Biogesic Paracetamol adalah Rp %d,00    |", jumlah, total);
	                                printf("\n --  --------------------------------------------------");
	                                printf("\n   |/");
	                                printf("\n\n|=======================================================================================|");
	                                printf("\n|                                 BIOGESIC PARACETAMOL                                  |");
	                                printf("\n|=======================================================================================|");
	                                printf("\n| INDIKASI :                                                                            |");
	                                printf("\n| Meringankan rasa sakit pada sakit kepala, sakit gigi, dan menurunkan demam.           |");
	                                printf("\n|---------------------------------------------------------------------------------------|");
	                                printf("\n| DOSIS :                                                                               |");
	                                printf("\n| Dewasa (Usia > 12 tahun)                                                              |");
	                                printf("\n| 3 - 4 kali sehari (sebelum atau sesudah makan)              |    1 - 3 kaplet    |    |");
	                                printf("\n| Anak-Anak (Usia 6 - 12 tahun)                                                         |");
	                                printf("\n| 3 - 4 kali sehari (sebelum atau sesudah makan)              |   0.5 - 1 kaplet   |    |");
	                                printf("\n| Atau sesuai petunjuk dokter                                                           |");
	                                printf("\n|=======================================================================================|");
	                            	break;
	                            default :
	                                printf("\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat demam dewasa.");
	                                system("cls");
	                            	goto PilekDewasa;
	                        }
                    }
                    else if(usia <= 12){
                    	DemamAnak:

	                        printf("\n\n\n|================================================================================|");
	                        printf("\n|                          REKOMENDASI OBAT DEMAM ANAK                           |");
	                        printf("\n|================================================================================|");
	                        printf("\n|       Sirup :                                                                  |");
	                        printf("\n|--------------------------------------------------------------------------------|");
	                        printf("\n| 1. |  Hufagripp TMP                              |   Rp  20,000,00   |   60ml  |");
	                        printf("\n| 2. |  Proris Ibuprofen                           |   Rp  25,000,00   |   60ml  |");
	                        printf("\n| 3. |  Tempra Paracetamol                         |   Rp  48,000,00   |   60ml  |");
	                        printf("\n|--------------------------------------------------------------------------------|");
	                        printf("\n|       Plester Kompres :                                                        |");
	                        printf("\n|--------------------------------------------------------------------------------|");
	                        printf("\n| 4. |  Pure Kids Fever Free                       |   Rp   5,000,00   |  1 pcs  |");
	                        printf("\n| 5. |  Kool Fever Baby                            |   Rp   5,000,00   |  1 pcs  |");
	                        printf("\n| 6. |  Bye Bye Fever Anak                         |   Rp   7,000,00   |  1 pcs  |");
	                        printf("\n|================================================================================|");
	                        printf("\n\n  Masukkan obat yang Anda inginkan : ");
	                        scanf("%i", &demam);
	                        printf("\n----------------------------------------------------------------------------------");
	                        printf("\n\n  Jumlah obat yang ingin dibeli : ");
	                        scanf("%i", &jumlah);

	                        switch(demam){
	                            case 1 :
	                                harga = 20000;
	                                total = harga * jumlah;
	                                system("cls");
	                                printf("\n\n\n ------------------------------------------------");
	                                printf("\n|   Harga %d Hufagripp TMP adalah Rp %d,00    |", jumlah, total);
	                                printf("\n --  --------------------------------------------");
	                                printf("\n   |/");
	                                printf("\n\n|=======================================================================================|");
	                                printf("\n|                                        HUFAGRIPP TMP                                  |");
	                                printf("\n|=======================================================================================|");
	                                printf("\n| INDIKASI :                                                                            |");
	                                printf("\n| Untuk menurunkan panas (demam), meringankan nyeri ringan sampai sedang, antara lain   |");
	                                printf("\n| sakit gigi, sakit kepala.                                                             |");
	                                printf("\n|---------------------------------------------------------------------------------------|");
	                                printf("\n| DOSIS :                                                                               |");
	                                printf("\n| Dewasa (Usia > 12 tahun)                                                              |");
	                                printf("\n| 3 - 4 kali sehari (sesudah makan)           |   2   sendok takar   |   (10   ml)   |  |");
	                                printf("\n| Anak-Anak (Usia 8 - 12 tahun)                                                         |");
	                                printf("\n| 3 - 4 kali sehari (sesudah makan)           |   2   sendok takar   |   (10   ml)   |  |");
	                                printf("\n| Anak-Anak (Usia 3 - 7 tahun)                                                          |");
	                                printf("\n| 3 - 4 kali sehari (sesudah makan)           |   1   sendok takar   |   ( 5   ml)   |  |");
	                                printf("\n| Anak-Anak (Usia 1 - 2 tahun)                                                          |");
	                                printf("\n| 3 - 4 kali sehari (sesudah makan)           |   0.5 sendok takar   |   ( 2.5 ml)   |  |");
	                                printf("\n|=======================================================================================|");
	                            	break;
	                            case 2 :
	                                harga = 25000;
	                                total = harga * jumlah;
	                                system("cls");
	                                printf("\n\n\n ---------------------------------------------------");
	                                printf("\n|   Harga %d Proris Ibuprofen adalah Rp %d,00    |", jumlah, total);
	                                printf("\n --  -----------------------------------------------");
	                                printf("\n   |/");
	                                printf("\n\n|=======================================================================================|");
	                                printf("\n|                                 PRORIS IBUPROFEN                                      |");
	                                printf("\n|=======================================================================================|");
	                                printf("\n| INDIKASI :                                                                            |");
	                                printf("\n| Nyeri ringan sampai sedang antara lain nyeri pada penyakit gigi, nyeri pasca bedah,   |");
	                                printf("\n| sakit kepala, gejala artritis reumatoid, gejala osteoartritis, gejala juvenile        |");
	                                printf("\n| artritis reumatoid, menurunkan demam pada anak.                                       |");
	                                printf("\n|---------------------------------------------------------------------------------------|");
	                                printf("\n| DOSIS :                                                                               |");
	                                printf("\n| Dewasa (Usia > 12 tahun)                                                              |");
	                                printf("\n| 3 - 4 kali sehari (sesudah makan)           |   1    sendok takar   |   (200 mg)   |  |");
	                                printf("\n| Anak-Anak (Usia 8 - 12 tahun)                                                         |");
	                                printf("\n| 3 - 4 kali sehari (sesudah makan)           |   1    sendok takar   |   (200 mg)   |  |");
	                                printf("\n| Anak-Anak (Usia 3 - 7 tahun)                                                          |");
	                                printf("\n| 3 - 4 kali sehari (sesudah makan)           |   0.5  sendok takar   |   (100 mg)   |  |");
	                                printf("\n| Anak-Anak (Usia 1 - 2 tahun)                                                          |");
	                                printf("\n| 3 - 4 kali sehari (sesudah makan)           |   0.25 sendok takar   |   ( 50 mg)   |  |");
	                                printf("\n|=======================================================================================|");
	                            	break;
	                            case 3 :
	                                harga = 48000;
	                                total = harga * jumlah;
	                                system("cls");
	                                printf("\n\n\n -----------------------------------------------------");
	                                printf("\n|   Harga %d Tempra Paracetamol adalah Rp %d,00    |", jumlah, total);
	                                printf("\n --  -------------------------------------------------");
	                                printf("\n   |/");
	                                printf("\n\n|=======================================================================================|");
	                                printf("\n|                                  TEMPRA PARACETAMOL                                   |");
	                                printf("\n|=======================================================================================|");
	                                printf("\n| INDIKASI :                                                                            |");
	                                printf("\n| Untuk meredakan sakit kepala, sakit gigi, sakit pada otot, nyeri yang mengganggu, dan |");
	                                printf("\n| menurunkan demam yang menyertai flu/influenza serta demam sesudah vaksinasi.          |");
	                                printf("\n|---------------------------------------------------------------------------------------|");
	                                printf("\n| DOSIS :                                                                               |");
	                                printf("\n| Anak-Anak (Usia 6 - 8 tahun)                                                          |");
	                                printf("\n| Setiap 4 jam, tetapi tidak lebih dari 5x sehari |  2   sendok takar  |  (10   ml)  |  |");
	                                printf("\n| Anak-Anak (Usia 4 - 5 tahun)                                                          |");
	                                printf("\n| Setiap 4 jam, tetapi tidak lebih dari 5x sehari |  1.5 sendok takar  |  ( 7.5 ml)  |  |");
	                                printf("\n| Anak-Anak (Usia 2 - 3 tahun)                                                          |");
	                                printf("\n| Setiap 4 jam, tetapi tidak lebih dari 5x sehari |  1   sendok takar  |  ( 5   ml)  |  |");
	                                printf("\n|---------------------------------------------------------------------------------------|");
	                                printf("\n| ATURAN PAKAI :                                                                        |");
	                                printf("\n| Dikonsumsi sebelum atau sesudah makan                                                 |");
	                                printf("\n|=======================================================================================|");
	                            	break;
	                            case 4 :
	                                harga = 5000;
	                                total = harga * jumlah;
	                                system("cls");
	                                printf("\n\n\n ------------------------------------------------------");
	                                printf("\n|   Harga %d Pure Kids Fever Free adalah Rp %d,00    |", jumlah, total);
	                                printf("\n --  --------------------------------------------------");
	                                printf("\n   |/");
	                                printf("\n\n|=======================================================================================|");
	                                printf("\n|                                 PURE KIDS FEVER FREE                                  |");
	                                printf("\n|=======================================================================================|");
	                                printf("\n| INDIKASI :                                                                            |");
	                                printf("\n| Plester kompres untuk membantu menurunkan suhu tubuh anak saat terjadi demam.         |");
	                                printf("\n|---------------------------------------------------------------------------------------|");
	                                printf("\n| DOSIS :                                                                               |");
	                                printf("\n| Sesuai kebutuhan, dapat bertahan selama 8 jam dengan efek dingin.                     |");
	                                printf("\n|---------------------------------------------------------------------------------------|");
	                                printf("\n| ATURAN PAKAI :                                                                        |");
	                                printf("\n| Sobek atau potong bagian atas kemasan dan keluarkan lembaran patch. Buka lapisan      |");
	                                printf("\n| pelindung transparan pada lembaran cooling patch. Bersihkan dan keringkan area yang   |");
	                                printf("\n| akan ditempelkan. Tempelkan pada bagian tubuh yang sudah dibersihkan.                 |");
	                                printf("\n|=======================================================================================|");
	                            	break;
	                            case 5 :
	                                harga = 5000;
	                                total = harga * jumlah;
	                                system("cls");
	                                printf("\n\n\n -------------------------------------------------");
	                                printf("\n|   Harga %d Kool Fever Baby adalah Rp %d,00    |", jumlah, total);
	                                printf("\n --  ---------------------------------------------");
	                                printf("\n   |/");
	                                printf("\n\n|=======================================================================================|");
	                                printf("\n|                                    KOOL FEVER BABY                                    |");
	                                printf("\n|=======================================================================================|");
	                                printf("\n| INDIKASI :                                                                            |");
	                                printf("\n| Plester kompres yang digunakan untuk membantu menurunkan demam, sakit kepala, dan     |");
	                                printf("\n| sakit gigi pada bayi.                                                                 |");
	                                printf("\n|---------------------------------------------------------------------------------------|");
	                                printf("\n| DOSIS :                                                                               |");
	                                printf("\n| Sesuai kebutuhan, dapat bertahan selama 6 jam dengan sensasi dingin.                  |");
	                                printf("\n|---------------------------------------------------------------------------------------|");
	                                printf("\n| ATURAN PAKAI :                                                                        |");
	                                printf("\n| Lepaskan lapisan transparan dan tempelkan permukaan yang mengandung gel pada kulit    |");
	                                printf("\n| yang kering dan bersih tanpa mengenai rambut. Bila berkeringat, gunakan setelah       |");
	                                printf("\n| membersihkan keringat dengan baik. Agar lebih efektif dan higienis, gunakan Kool Fever|");
	                                printf("\n| untuk satu kali penggunaan saja.                                                      |");
	                                printf("\n|=======================================================================================|");
	                            	break;
	                            case 6 :
	                                harga = 7000;
	                                total = harga * jumlah;
	                                system("cls");
	                                printf("\n\n\n ----------------------------------------------------");
	                                printf("\n|   Harga %d Bye Bye Fever Anak adalah Rp %d,00    |", jumlah, total);
	                                printf("\n --  ------------------------------------------------");
	                                printf("\n   |/");
	                                printf("\n\n|=======================================================================================|");
	                                printf("\n|                                  BYE BYE FEVER ANAK                                   |");
	                                printf("\n|=======================================================================================|");
	                                printf("\n| INDIKASI :                                                                            |");
	                                printf("\n| Plester kompres yang digunakan pada anak untuk meringankan efek tidak nyaman karena   |");
	                                printf("\n| demam, sakit gigi, sakit kepala.                                                      |");
	                                printf("\n|---------------------------------------------------------------------------------------|");
	                                printf("\n| DOSIS :                                                                               |");
	                                printf("\n| Setiap 10 jam, bila perlu.                                                            |");
	                                printf("\n|---------------------------------------------------------------------------------------|");
	                                printf("\n| ATURAN PAKAI :                                                                        |");
	                                printf("\n| Lepaskan lapisan transparan dan tempelkan permukaan yang melekat pada daerah dahi/    |");
	                                printf("\n| pipi/punggung/bagian yang nyeri. Patch diganti setiap 10 jam.                         |");
	                                printf("\n|=======================================================================================|");
	                            	break;
	                            default :
	                                printf("\n\nInputan salah, akan dikembalikan ke menu rekomendasi obat demam anak.");
	                                system("cls");
	                            	goto DemamAnak;
	                        }
                    }
                break;

                case 4 :
                    Nyeri:

                        printf("\n\n\n\nRekomendasi obat di bawah ini sudah termasuk untuk mengobati nyeri otot,");
                        printf("\nnyeri sendi, nyeri pinggung, hingga pegal linu.\n");
                        printf("\n\n\n|================================================================================|");
                        printf("\n|                             REKOMENDASI OBAT NYERI                             |");
                        printf("\n|================================================================================|");
                        printf("\n|       Tablet:                                                                  |");
                        printf("\n|--------------------------------------------------------------------------------|");
                        printf("\n| 1. |  Neo Rheumacyl                         |  Rp  10,000,00   |   20 tablet   |");
                        printf("\n| 2. |  Neurobion Forte                       |  Rp  45,000,00   |   10 tablet   |");
                        printf("\n| 3. |  Viostin DS                            |  Rp  75,000,00   |   10 tablet   |");
                        printf("\n|--------------------------------------------------------------------------------|");
                        printf("\n|       Koyo :                                                                   |");
                        printf("\n|--------------------------------------------------------------------------------|");
                        printf("\n| 4. |  Salonpas Koyo                         |  Rp   7,000,00   |    1 sachet   |");
                        printf("\n| 5. |  Hansaplast Koyo Hangat                |  Rp   9,000,00   |    1 sachet   |");
                        printf("\n| 6. |  Counterpain Patch                     |  Rp  55,000,00   |     4 pcs     |");
                        printf("\n|--------------------------------------------------------------------------------|");
                        printf("\n|       Krim :                                                                   |");
                        printf("\n|--------------------------------------------------------------------------------|");
                        printf("\n| 7. |  Hot in Cream                          |  Rp  23,000,00   |    60 gram    |");
                        printf("\n| 8. |  Voltaren                              |  Rp  57,000,00   |    10 gram    |");
                        printf("\n| 9. |  Counterpain Cream                     |  Rp  45,000,00   |    30 gram    |");
                        printf("\n|================================================================================|");
                        printf("\n\n  Masukkan obat yang Anda inginkan : ");
                        scanf("%i", &nyeri);
                        printf("\n----------------------------------------------------------------------------------");
                        printf("\n\n  Jumlah obat yang ingin dibeli : ");
                        scanf("%i", &jumlah);
                        printf("\n----------------------------------------------------------------------------------");

	                    switch(nyeri){
	                        case 1 :
	                            harga = 10000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n --------------------------------------------------");
	                            printf("\n|     Harga %d Neo Rheumacyl adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  ----------------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|========================================================================================|");
	                            printf("\n|                                      NEO RHEUMACYL                                     |");
	                            printf("\n|========================================================================================|");
	                            printf("\n| INDIKASI :                                                                             |");
	                            printf("\n| Obat untuk meredakan nyeri otot, nyeri sendi, dan pegal linu.                          |");
	                            printf("\n|----------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS:                                                                                 |");
	                            printf("\n| Dewasa (Usia > 12 tahun)                                                               |");
	                            printf("\n| 3-4 kali sehari (sesudah makan)                                    |   1 tablet   |    |");
	                            printf("\n|========================================================================================|");
	                            break;
	                        case 2 :
	                            harga = 45000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n ---------------------------------------------------");
	                            printf("\n|     Harga %d Neorobion Forte adalah Rp %d,00   |", jumlah, total);
	                            printf("\n --  -----------------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|========================================================================================|");
	                            printf("\n|                                      NEUROBION FORTE                                   |");
	                            printf("\n|========================================================================================|");
	                            printf("\n| INDIKASI :                                                                             |");
	                            printf("\n| Obat untuk mengatasoi defisiensi vitamin B dan menjaga sistem sar.                     |");
	                            printf("\n|----------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS:                                                                                 |");
	                            printf("\n| Dewasa (Usia > 12 tahun)                                                               |");
	                            printf("\n| 1 kali sehari (sesudah makan)                                      |   1 tablet   |    |");
	                            printf("\n|========================================================================================|");
	                            break;
	                        case 3 :
	                            harga = 75000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n -----------------------------------------------");
	                            printf("\n|     Harga %d Viostin DS adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  -------------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|========================================================================================|");
	                            printf("\n|                                       VIOSTIN DS                                       |");
	                            printf("\n|========================================================================================|");
	                            printf("\n| INDIKASI :                                                                             |");
	                            printf("\n| Obat untuk mengatasi kaku dan nyeri sendi, mengurangi dan menghambat peradangan sendi. |");
	                            printf("\n|----------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS:                                                                                 |");
	                            printf("\n| Dewasa (Usia > 12 tahun)                                                               |");
	                            printf("\n| 1 kali sehari (sesudah makan)                                       |  1 tablet   |    |");
	                            printf("\n|========================================================================================|");
	                            break;
	                        case 4 :
	                            harga = 7000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n -------------------------------------------------");
	                            printf("\n|     Harga %d Salonpas Koyo adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  ---------------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|========================================================================================|");
	                            printf("\n|                                      SALONPAS KOYO                                     |");
	                            printf("\n|========================================================================================|");
	                            printf("\n| INDIKASI :                                                                             |");
	                            printf("\n| Obat untuk meredakan rasa nyeri otot, sakit otot leher, pegal.                         |");
	                            printf("\n|----------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS:                                                                                 |");
	                            printf("\n| Dewasa (Usia > 12 tahun)                                                               |");
	                            printf("\n| Tempel di area yang sakit                         |   diganti 2-3 kali per hari   |    |");
	                            printf("\n|========================================================================================|");
	                            break;
	                        case 5 :
	                            harga = 9000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n ----------------------------------------------------------");
	                            printf("\n|     Harga %d Hansaplast Koyo Hangat adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  ------------------------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|========================================================================================|");
	                            printf("\n|                                 HANSAPLAST KOYO HANGAT                                 |");
	                            printf("\n|========================================================================================|");
	                            printf("\n| INDIKASI :                                                                             |");
	                            printf("\n| Obat untuk meredakan rasa nyeri otot, sakit otot leher, pegal.                         |");
	                            printf("\n|----------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS:                                                                                 |");
	                            printf("\n| Dewasa (Usia > 12 tahun)                                                               |");
	                            printf("\n| Tempel di area yang sakit                         |   diganti 2-3 kali per hari   |    |");
	                            printf("\n|========================================================================================|");
	                            break;
	                        case 6 :
	                            harga = 55000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n ------------------------------------------------------");
	                            printf("\n|     Harga %d Counterpain Patch adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  --------------------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|========================================================================================|");
	                            printf("\n|                                    COUNTERPAIN PATCH                                   |");
	                            printf("\n|========================================================================================|");
	                            printf("\n| INDIKASI :                                                                             |");
	                            printf("\n| Sebagai pereda nyeri otot dan nyeri sendi pada bagian-bagian tubuh.                    |");
	                            printf("\n|----------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS:                                                                                 |");
	                            printf("\n| Dewasa (Usia > 12 tahun)                                                               |");
	                            printf("\n| Tempel di area yang sakit                         |   diganti 2-3 kali per hari   |    |");
	                            printf("\n|========================================================================================|");
	                            break;
	                        case 7 :
	                            harga = 23000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n -------------------------------------------------");
	                            printf("\n|     Harga %d Hot In Cream adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  ---------------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|========================================================================================|");
	                            printf("\n|                                      HOT IN CREAM                                      |");
	                            printf("\n|========================================================================================|");
	                            printf("\n| INDIKASI :                                                                             |");
	                            printf("\n| Untuk membantu meringankan pegal-pegal, nyeri sendi, nyeri otot, masuk angin.          |");
	                            printf("\n|----------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS:                                                                                 |");
	                            printf("\n| Dewasa (Usia > 12 tahun)                                                               |");
	                            printf("\n| Hanya untuk penggunaan luar                                                            |");
	                            printf("\n|========================================================================================|");
	                            break;
	                        case 8 :
	                            harga = 57000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n ---------------------------------------------");
	                            printf("\n|     Harga %d Voltaren adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  -----------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|========================================================================================|");
	                            printf("\n|                                        VOLTAREN                                        |");
	                            printf("\n|========================================================================================|");
	                            printf("\n| INDIKASI :                                                                             |");
	                            printf("\n| Untuk membantu meringankan pegal-pegal, nyeri sendi, nyeri otot, masuk angin.          |");
	                            printf("\n|----------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS:                                                                                 |");
	                            printf("\n| Dewasa (Usia > 12 tahun)                                                               |");
	                            printf("\n| Hanya untuk penggunaan luar                                                            |");
	                            printf("\n|========================================================================================|");
	                            break;
	                        case 9 :
	                            harga = 45000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n ------------------------------------------------------");
	                            printf("\n|     Harga %d Counterpain Cream adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  --------------------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|========================================================================================|");
	                            printf("\n|                                   COUNTERPAIN CREAM                                    |");
	                            printf("\n|========================================================================================|");
	                            printf("\n| INDIKASI :                                                                             |");
	                            printf("\n| Digunakan untuk meredakan nyeri otot dan nyeri sendi ringan akibat arthritis.          |");
	                            printf("\n|----------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS:                                                                                 |");
	                            printf("\n| Dewasa (Usia > 12 tahun)                                                               |");
	                            printf("\n| Hanya untuk penggunaan luar                                                            |");
	                            printf("\n|========================================================================================|");
	                            break;
	                        default :
	                            printf("\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat nyeri.");
	                            system("cls");
	                        	goto Nyeri;
                    	}
                break;

                case 5 :
                    SakitPerut:

                        printf("\n\n\n|================================================================================|");
                        printf("\n|                             REKOMENDASI OBAT MAAG                              |");
                        printf("\n|================================================================================|");
                        printf("\n| 1. |  Promag                               |   Rp   8,000,00   |   12 tablet   |");
                        printf("\n| 2. |  Polysilane                           |   Rp  26,000,00   |   100  ml     |");
                        printf("\n|================================================================================|");
                        printf("\n|                           REKOMENDASI OBAT SEMBELIT                            |");
                        printf("\n|================================================================================|");
                        printf("\n| 3. |  Dulcolax                             |   Rp  21,000,00   |   10 tablet   |");
                        printf("\n| 4. |  Microlax                             |   Rp  25,000,00   |     5  ml     |");
                        printf("\n| 5. |  Vegeta scrubber                      |   Rp  14,000,00   |     6  pcs    |");
                        printf("\n|================================================================================|");
                        printf("\n|                             REKOMENDASI OBAT DIARE                             |");
                        printf("\n|================================================================================|");
                        printf("\n| 6. |  Neo entrostop                        |   Rp   8,000,00   |   12 tablet   |");
                        printf("\n| 7. |  Diapet                               |   Rp   6,000,00   |    4 tablet   |");
                        printf("\n|================================================================================|");
                        printf("\n|                          REKOMENDASI OBAT NYERI HAID                           |");
                        printf("\n|================================================================================|");
                        printf("\n| 8. |  Femimax                              |   Rp   3,000,00   |    4 tablet   |");
                        printf("\n| 9. |  Panadol Menstrual                    |   Rp  55,000,00   |   10 tablet   |");
                        printf("\n|================================================================================|");
                        printf("\n\n  Masukkan obat yang Anda inginkan : ");
                        scanf("%i", &sakit_perut);
                        printf("\n----------------------------------------------------------------------------------");
                        printf("\n\n  Jumlah obat yang ingin dibeli : ");
                        scanf("%i", &jumlah);

	                    switch(sakit_perut){
	                        case 1 :
	                            harga = 8000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n ------------------------------------------");
	                            printf("\n|     Harga %d Promag adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  --------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|========================================================================================|");
	                            printf("\n|                                   PROMAG                                               |");
	                            printf("\n|========================================================================================|");
	                            printf("\n| INDIKASI :                                                                             |");
	                            printf("\n| Ditujukan untuk masalah lambung, terutama asam lambung.                                |");
	                            printf("\n|----------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS:                                                                                 |");
	                            printf("\n| Dewasa (Usia > 12 tahun)                                                               |");
	                            printf("\n| 3-4 kali sehari (sesudah makan)                              |   1   - 2 tablet   |    |");
	                            printf("\n| Anak-Anak (Usia 6 - 12 tahun)                                                          |");
	                            printf("\n| 3 - 4 kali sehari (sesudah makan)                            |   0.5 - 1 tablet   |    |");
	                            printf("\n|========================================================================================|");
	                            break;
	                        case 2 :
	                            harga = 26000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n -----------------------------------------------");
	                            printf("\n|     Harga %d Polysilane adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  -------------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|========================================================================================|");
	                            printf("\n|                                   POLYSILANE                                           |");
	                            printf("\n|========================================================================================|");
	                            printf("\n| INDIKASI :                                                                             |");
	                            printf("\n| Ditujukan untuk masalah lambung, terutama asam lambung.                                |");
	                            printf("\n|----------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS:                                                                                 |");
	                            printf("\n| Dewasa (Usia > 12 tahun)                                                               |");
	                            printf("\n| 3 - 4 kali sehari (sesudah makan)                             |  1   - 2 tablet   |    |");
	                            printf("\n| Anak-Anak (Usia 6 - 12 tahun)                                                          |");
	                            printf("\n| 3 - 4 kali sehari (sesudah makan)                             |  0.5 - 1 tablet   |    |");
	                            printf("\n|========================================================================================|");
	                            break;
	                        case 3 :
	                            harga = 21000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n ---------------------------------------------");
	                            printf("\n|     Harga %d Dulcolax adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  -----------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|========================================================================================|");
	                            printf("\n|                                    DULCOLAX                                            |");
	                            printf("\n|========================================================================================|");
	                            printf("\n| INDIKASI :                                                                             |");
	                            printf("\n| Obat untuk mengatasi sembelit atau susah buang air besar.                              |");
	                            printf("\n|----------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS:                                                                                 |");
	                            printf("\n| Dewasa (Usia > 10 tahun)                                                               |");
	                            printf("\n| 1 kali sehari (sesudah makan)                                  |   1 - 2 tablet   |    |");
	                            printf("\n| Anak-Anak (Usia 6-10 tahun)                                                            |");
	                            printf("\n| 1 kali sehari (sesudah makan)                                  |   1     tablet   |    |");
	                            printf("\n|========================================================================================|");
	                            break;
	                        case 4 :
	                            harga = 25000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n ---------------------------------------------");
	                            printf("\n|     Harga %d Microlax adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  -----------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|========================================================================================|");
	                            printf("\n|                                     MICROLAX                                           |");
	                            printf("\n|========================================================================================|");
	                            printf("\n| INDIKASI :                                                                             |");
	                            printf("\n| Obat untuk mengatasi sembelit atau susah buang air besar.                              |");
	                            printf("\n|----------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS:                                                                                 |");
	                            printf("\n| Usia > 3 tahun                                                                         |");
	                            printf("\n| 1 tabung                                                                               |");
	                            printf("\n| Usia < 3 tahun                                                                         |");
	                            printf("\n| 0.5 tabung                                                                             |");
	                            printf("\n|========================================================================================|");
	                            break;
	                        case 5 :
	                            harga = 14000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n ----------------------------------------------------");
	                            printf("\n|     Harga %d Vegeta Scrubber adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  ------------------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|========================================================================================|");
	                            printf("\n|                                     VEGETA SCRUBBER                                    |");
	                            printf("\n|========================================================================================|");
	                            printf("\n| INDIKASI :                                                                             |");
	                            printf("\n| Membantu memenuhi kebutuhan serat.                                                     |");
	                            printf("\n|----------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS:                                                                                 |");
	                            printf("\n| Dewasa (Usia > 12 tahun)                                                               |");
	                            printf("\n| 1-2 kali sehari                                                    |   1 sachet   |    |");
	                            printf("\n|========================================================================================|");
	                            break;
	                        case 6 :
	                            harga = 8000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n -------------------------------------------------");
	                            printf("\n|     Harga %d Neo Entrostop adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  ---------------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|========================================================================================|");
	                            printf("\n|                                     NEO ENTROSTOP                                      |");
	                            printf("\n|========================================================================================|");
	                            printf("\n| INDIKASI :                                                                             |");
	                            printf("\n| Bermanfaat untuk mengatasi diare.                                                      |");
	                            printf("\n|----------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS:                                                                                 |");
	                            printf("\n| Dewasa (Usia > 12 tahun)                                                               |");
	                            printf("\n| 3 - 4 kali sehari (sesudah makan)                      |   max 12 tablet sehari   |    |");
	                            printf("\n| Anak-Anak (Usia 6 - 12 tahun)                                                          |");
	                            printf("\n| 3 kali sehari (sesudah makan)                          |   max  6 tablet sehari   |    |");
	                            printf("\n|========================================================================================|");
	                            break;
	                        case 7 :
	                            harga = 6000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n ------------------------------------------");
	                            printf("\n|     Harga %d Diapet adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  --------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|========================================================================================|");
	                            printf("\n|                                        DIAPET                                          |");
	                            printf("\n|========================================================================================|");
	                            printf("\n| INDIKASI :                                                                             |");
	                            printf("\n| Obat yang digunakan untuk mengobati mencret atau diare.                                |");
	                            printf("\n|----------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS:                                                                                 |");
	                            printf("\n| Dewasa (Usia > 12 tahun)                                                               |");
	                            printf("\n| 2 - 3 kali sehari (sesudah makan)                                  |   2 tablet   |    |");
	                            printf("\n|========================================================================================|");
	                            break;
	                        case 8 :
	                            harga = 3000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n -------------------------------------------");
	                            printf("\n|     Harga %d Feminax adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  ---------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n\n|========================================================================================|");
	                            printf("\n|                                        FEMINAX                                         |");
	                            printf("\n|========================================================================================|");
	                            printf("\n| INDIKASI :                                                                             |");
	                            printf("\n| Untuk meredakan nyeri haid (dismenore) dan kram perut.                                 |");
	                            printf("\n|----------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS:                                                                                 |");
	                            printf("\n| Dewasa (Usia > 12 tahun)                                                               |");
	                            printf("\n| 2 - 3 kali sehari (sesudah makan)                                  |   2 tablet   |    |");
	                            printf("\n| Anak-Anak (Usia 6 - 12 tahun)                                                          |");
	                            printf("\n| 3 kali sehari (sesudah makan)                                      |   1 tablet   |    |");
	                            printf("\n|========================================================================================|");
	                            break;
	                        case 9 :
	                            harga = 55000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n ------------------------------------------------------");
	                            printf("\n|     Harga %d Panadol Menstrual adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  --------------------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n\n|========================================================================================|");
	                            printf("\n|                                 PANADOL MENSTRUAL                                      |");
	                            printf("\n|========================================================================================|");
	                            printf("\n| INDIKASI :                                                                             |");
	                            printf("\n| Untuk meredakan nyeri haid (dismenore) dan kram perut.                                 |");
	                            printf("\n|----------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS:                                                                                 |");
	                            printf("\n| Dewasa (Usia > 12 tahun)                                                               |");
	                            printf("\n| 3 kali sehari (sesudah makan)                                      |   2 tablet   |    |");
	                            printf("\n| Anak-Anak (Usia 6 - 12 tahun)                                                          |");
	                            printf("\n| 3 kali sehari (sesudah makan)                                      |   1 tablet   |    |");
	                            printf("\n|========================================================================================|");
	                            break;
	                        default :
	                            printf("\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat sakit perut.");
	                            system("cls");
	                        	goto SakitPerut;
	                    }
                break;

                case 6 :
                    Cacingan:

                        printf("\n\n\n|================================================================================|");
                        printf("\n|                            REKOMENDASI OBAT CACINGAN                           |");
                        printf("\n|================================================================================|");
                        printf("\n|       Tablet:                                                                  |");
                        printf("\n|--------------------------------------------------------------------------------|");
                        printf("\n| 1. |  Vermox                                |   Rp  21,000,00   |   1 tablet   |");
                        printf("\n| 2. |  Vermoran                              |   Rp   9,000,00   |   2 tablet   |");
                        printf("\n| 3. |  Combantrin                            |   Rp  18,000,00   |   2 tablet   |");
                        printf("\n| 4. |  Konvermex                             |   Rp  13,000,00   |   2 tablet   |");
                        printf("\n|--------------------------------------------------------------------------------|");
                        printf("\n|       Sirup :                                                                  |");
                        printf("\n|--------------------------------------------------------------------------------|");
                        printf("\n| 5. |  Combantrin                            |   Rp  20,000,00   |     10ml     | ");
                        printf("\n| 6. |  Konvermex                             |   Rp  15,000,00   |     10ml     | ");
                        printf("\n|================================================================================|");
                        printf("\n  Masukkan obat yang Anda inginkan : ");
                        scanf("%i", &cacingan);
                        printf("\n--------------------------------------------------------------------------------------------------");
                        printf("\n\n  Jumlah obat yang ingin dibeli : ");
                        scanf("%i", &jumlah);

	                    switch(cacingan){
	                        case 1 :
	                            harga = 21000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n -------------------------------------------");
	                            printf("\n|     Harga %d Vermox adalah Rp %d,00     |", jumlah, total);
	                            printf("\n --  ---------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|========================================================================================|");
	                            printf("\n|                                        VERMOX                                          |");
	                            printf("\n|========================================================================================|");
	                            printf("\n| INDIKASI :                                                                             |");
	                            printf("\n| Obat yang digunakan untuk mengatasi penyakit cacingan.                                 |");
	                            printf("\n|----------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS:                                                                                 |");
	                            printf("\n| Dewasa (Usia > 12 tahun)                                                               |");
	                            printf("\n| 3 kali sehari (sesudah makan)                                         |   100 mg   |   |");
	                            printf("\n|========================================================================================|");
	                            break;
	                        case 2 :
	                            harga = 9000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n ---------------------------------------------");
	                            printf("\n|     Harga %d Vermoran adalah Rp %d,00     |", jumlah, total);
	                            printf("\n --  -----------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n\n|========================================================================================|");
	                            printf("\n|                                        VERMORAN                                        |");
	                            printf("\n|========================================================================================|");
	                            printf("\n| INDIKASI :                                                                             |");
	                            printf("\n| Obat yang digunakan untuk mengatasi penyakit cacingan.                                 |");
	                            printf("\n|----------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS:                                                                                 |");
	                            printf("\n| Dewasa (Usia > 12 tahun)                                                               |");
	                            printf("\n| 2 kali sehari (sesudah makan)                                        |   100 mg   |    |");
	                            printf("\n|========================================================================================|");
	                            break;
	                        case 3 :
	                            harga = 18000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n -----------------------------------------------");
	                            printf("\n|     Harga %d Combantrin adalah Rp %d,00     |", jumlah, total);
	                            printf("\n --  ------------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n\n|========================================================================================|");
	                            printf("\n|                                        COMBANTRIN                                      |");
	                            printf("\n|========================================================================================|");
	                            printf("\n| INDIKASI :                                                                             |");
	                            printf("\n| Obat yang digunakan untuk mengatasi penyakit cacingan.                                 |");
	                            printf("\n|----------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS:                                                                                 |");
	                            printf("\n| Usia 6-12 tahun                                                                        |");
	                            printf("\n| per 6 bulan                                     |  1-2 tablet                          |");
	                            printf("\n| Usia diatas 12 tahun                                                                   |");
	                            printf("\n| per 6 bulan                                     |  2-3 tablet                          |");
	                            printf("\n|========================================================================================|");
	                        	break;
	                        case 4 :
	                            harga = 13000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n -----------------------------------------------");
	                            printf("\n|     Harga %d Konvermex adalah Rp %d,00     |", jumlah, total);
	                            printf("\n --  ------------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n\n|========================================================================================|");
	                            printf("\n|                                        KONVERMEX                                       |");
	                            printf("\n|========================================================================================|");
	                            printf("\n| INDIKASI :                                                                             |");
	                            printf("\n| Obat yang digunakan untuk mengatasi penyakit cacingan.                                 |");
	                            printf("\n|----------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS:                                                                                 |");
	                            printf("\n| Usia 6-12 tahun                                                                        |");
	                            printf("\n| 2-3 tablet                                          |  125 mg                          |");
	                            printf("\n| Usia diatas 12 tahun                                                                   |");
	                            printf("\n| 3-4 tablet                                          |  125 mg                          |");
	                            printf("\n|========================================================================================|");
	                            break;
	                        case 5 :
	                            harga = 20000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n -----------------------------------------------");
	                            printf("\n|     Harga %d Combantrin adalah Rp %d,00     |", jumlah, total);
	                            printf("\n --  -------------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n\n|========================================================================================|");
	                            printf("\n|                                        COMBANTRIN                                      |");
	                            printf("\n|========================================================================================|");
	                            printf("\n| INDIKASI :                                                                             |");
	                            printf("\n| Obat yang digunakan untuk mengatasi penyakit cacingan.                                 |");
	                            printf("\n|----------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS:                                                                                 |");
	                            printf("\n| Usia 6-12 tahun                                                                        |");
	                            printf("\n| per 6 bulan                                    |  1-2 sendok takar                     |");
	                            printf("\n| Usia diatas 12 tahun                                                                   |");
	                            printf("\n| per 6 bulan                                    |  3-4 sendok takar                     |");
	                            printf("\n|========================================================================================|");
	                            break;
	                        case 6 :
	                            harga = 15000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n -----------------------------------------------");
	                            printf("\n|     Harga %d Konvermex adalah Rp %d,00      |", jumlah, total);
	                            printf("\n --  -------------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n\n|========================================================================================|");
	                            printf("\n|                                        KONVERMEX                                       |");
	                            printf("\n|========================================================================================|");
	                            printf("\n| INDIKASI :                                                                             |");
	                            printf("\n| Obat yang digunakan untuk mengatasi penyakit cacingan.                                 |");
	                            printf("\n|----------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS:                                                                                 |");
	                            printf("\n| Usia 6-12 tahun                                                                        |");
	                            printf("\n| per 6 bulan                                      |  7,5-10 mg                          |");
	                            printf("\n| Usia diatas 12 tahun                                                                   |");
	                            printf("\n| per 6 bulan                                      |  10 mg                              |");
	                            printf("\n|========================================================================================|");
	                            break;
	                        default :
	                            printf("\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat cacingan.");
	                            system("cls");
	                        	goto Cacingan;
	                    }
                break;

                case 7 :
                    SakitKepala:

                        printf("\n\n\nRekomendasi obat di bawah ini sudah termasuk untuk mengobati migrain, vertigo,");
                        printf("\nsakit kepala sebelah, dan sejenisnya.\n");
                        printf("\n\n\n|=============================================================================|");
                        printf("\n|                        REKOMENDASI OBAT SAKIT KEPALA                        |");
                        printf("\n|=============================================================================|");
                        printf("\n|       Tablet :                                                              |");
                        printf("\n|-----------------------------------------------------------------------------|");
                        printf("\n| 1. |  Panadol Extra                          |   Rp 13,000,00   |  1 strip  |");
                        printf("\n| 2. |  Oskadon                                |   Rp  2,000,00   |  1 strip  |");
                        printf("\n| 3. |  Poldanmig                              |   Rp  3,000,00   |  1 strip  |");
                        printf("\n|-----------------------------------------------------------------------------|");
                        printf("\n|       Minyak :                                                              |");
                        printf("\n|-----------------------------------------------------------------------------|");
                        printf("\n| 4. |  Minyak Angin Polar Bear                |   Rp 42,000,00   |    40ml   |");
                        printf("\n| 5. |  Tolak Angin Care                       |   Rp 13,000,00   |    10ml   |");
                        printf("\n| 6. |  Fresh Care                             |   Rp 13,000,00   |    10ml   |");
                        printf("\n|=============================================================================|");
                        printf("\n\n  Masukkan obat yang Anda inginkan : ");
                        scanf("%i", &sakit_kepala);
                        printf("\n-------------------------------------------------------------------------------");
                        printf("\n\n  Jumlah obat yang ingin dibeli : ");
                        scanf("%i", &jumlah);
                        printf("\n-------------------------------------------------------------------------------");

	                    switch(sakit_kepala){
	                        case 1 :
	                            harga = 13000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n ---------------------------------------------------");
	                            printf("\n|     Harga %d Panadol Extra adalah Rp %d,00     |", jumlah, total);
	                            printf("\n --  -----------------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|===============================================================================|");
	                            printf("\n|                                 PANADOL EXTRA                                 |");
	                            printf("\n|===============================================================================|");
	                            printf("\n| INDIKASI :                                                                    |");
	                            printf("\n| Meringankan sakit kepala, migrain, demam, pusing.                             |");
	                            printf("\n|-------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS :                                                                       |");
	                            printf("\n| 3-4 x sehari (setelah makan)                      |      1-2 kaplet      |    |");
	                            printf("\n| Maksimal : 8 kaplet/24 jam                        |   Tidak Untuk Anak   |    |");
	                            printf("\n|===============================================================================|");
	                            break;
	                        case 2 :
	                            harga = 2000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n -------------------------------------------");
	                            printf("\n|     Harga %d Oskadon adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  ---------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|================================================================================|");
	                            printf("\n|                                OSKADON                                         |");
	                            printf("\n|================================================================================|");
	                            printf("\n| INDIKASI :                                                                     |");
	                            printf("\n| Sakit kepala, migrain, nyeri otot dan nyeri sendi, nyeri saraf, sakit gigi     |");
	                            printf("\n| dan demam yang berhubungan dengan flu dan masuk angin.                         |");
	                            printf("\n|--------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS :                                                                        |");
	                            printf("\n| Dewasa (Usia > 12 tahun)                                                       |");
	                            printf("\n| 3-4 kali sehari (sebelum makan)                      |     1-2 tablet     |    |");
	                            printf("\n| Anak-Anak (Usia <= 12 tahun)                                                   |");
	                            printf("\n| 3-4 kali sehari (sebelum makan)                      |   0.5 - 1 tablet   |    |");
	                            printf("\n|================================================================================|");
	                            break;
	                        case 3 :
	                            harga = 3000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n ---------------------------------------------");
	                            printf("\n|     Harga %d Poldanmig adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  -----------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|================================================================================|");
	                            printf("\n|                                   POLDANMIG                                    |");
	                            printf("\n|================================================================================|");
	                            printf("\n| INDIKASI :                                                                     |");
	                            printf("\n| Meringankan sakit kepala, migrain, demam, pusing.                              |");
	                            printf("\n|--------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS :                                                                        |");
	                            printf("\n| 3-4 kali sehari (sebelum makan)                    |      1-2 tablet      |    |");
	                            printf("\n| Maksimal : 8 kaplet/24 jam                         |   Tidak Untuk Anak   |    |");
	                            printf("\n|================================================================================|");
	                            break;
	                        case 4 :
	                            harga = 42000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n ------------------------------------------------------------");
	                            printf("\n|     Harga %d Minyak Angin Polar Bear adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  --------------------------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|==================================================================================|");
	                            printf("\n|                             MINYAK ANGIN POLAR BEAR                              |");
	                            printf("\n|==================================================================================|");
	                            printf("\n| INDIKASI :                                                                       |");
	                            printf("\n| Meredakan sakit kepala, mual, sakit pinggang, untuk gigitan nyamuk, serangga dan |");
	                            printf("\n| luka bakar ringan, melegakan hidung tersumbat dan sesak nafas serta meredakan    |");
	                            printf("\n| gejala flu, masuk angin dan sakit perut.                                         |");
	                            printf("\n|----------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS :                                                                          |");
	                            printf("\n| Sesuai kebutuhan. Oleskan pada bagian tubuh yang sakit atau membutuhkan.         |");
	                            printf("\n|==================================================================================|");
	                            break;
	                        case 5 :
	                            harga = 13000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n -----------------------------------------------------");
	                            printf("\n|     Harga %d Tolak Angin Care adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  -------------------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|==================================================================================|");
	                            printf("\n|                                 TOLAK ANGIN CARE                                 |");
	                            printf("\n|==================================================================================|");
	                            printf("\n| INDIKASI :                                                                       |");
	                            printf("\n| Memberi sensasi menyegarkan, untuk meringankan masuk angin, sakit kepala, perut  |");
	                            printf("\n| kembung, gejala flu, mabuk perjalanan, gatal karena gigitan serangga dan minyak  |");
	                            printf("\n| angin aromaterapi.                                                               |");
	                            printf("\n|----------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS :                                                                          |");
	                            printf("\n| Secukupnya. Gosokkan pada bagian yang memerlukan.                                |");
	                            printf("\n|==================================================================================|");
	                            break;
	                        case 6 :
	                            harga = 13000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n -----------------------------------------------");
	                            printf("\n|     Harga %d Fresh Care adalah RP %d,00    |", jumlah, total);
	                            printf("\n --  -------------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|==================================================================================|");
	                            printf("\n|                                    FRESH CARE                                    |");
	                            printf("\n|==================================================================================|");
	                            printf("\n| INDIKASI :                                                                       |");
	                            printf("\n| Meringankan sakit kepala, meredakan perut kembung, masuk angin, mabuk perjalanan,|");
	                            printf("\n| meredakan gejala flu                                                             |");
	                            printf("\n|----------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS :                                                                          |");
	                            printf("\n| Secukupnya. Oleskan pada bagian yang sakit.                                      |");
	                            printf("\n|==================================================================================|");
	                            break;
	                        default :
	                            printf("\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat sakit kepala.");
	                            system("cls");
	                        	goto SakitKepala;
                    	}
                break;

                case 8:
                    Anemia:

                        printf("\n\n\n|=============================================================================|");
                        printf("\n|                           REKOMENDASI OBAT ANEMIA                           |");
                        printf("\n|=============================================================================|");
                        printf("\n| 1. |  Sangobion                           |   Rp 17, 000,00   |  10 kapsul  |");
                        printf("\n| 2. |  Sangobion Vita-tonik                |   Rp 32, 000,00   |    250ml    |");
                        printf("\n| 3. |  Sakatonik liver syrup               |   Rp 29, 000,00   |    310ml    |");
                        printf("\n| 4. |  Feroglobin sirup                    |   Rp 53, 000,00   |    100ml    |");
                        printf("\n|=============================================================================|");
                        printf("\n\n  Masukkan obat yang Anda inginkan : ");
                        scanf("%i", &anemia);
                        printf("\n-----------------------------------------------------------------------------------");
                        printf("\n\n  Jumlah obat yang ingin dibeli :  ");
                        scanf("%i", &jumlah);
                        printf("\n-----------------------------------------------------------------------------------");

	                    switch(anemia){
	                        case 1 :
	                            harga = 17000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n ----------------------------------------------");
	                            printf("\n|     Harga %d Sangobion adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  ------------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|====================================================================================|");
	                            printf("\n|                                           SANGOBION                                |");
	                            printf("\n|====================================================================================|");
	                            printf("\n| INDIKASI :                                                                         |");
	                            printf("\n| Anemia karena kekurangan zat besi dan mineral lain yang membantu pembentukan darah.|");
	                            printf("\n|------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS :                                                                            |");
	                            printf("\n| 1 kapsul sehari (setelah makan)                                                    |");
	                            printf("\n|====================================================================================|");
	                            break;
	                        case 2 :
	                            harga = 32000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n ---------------------------------------------------------");
	                            printf("\n|     Harga %d Sangobion Vita-tonik adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  -----------------------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|====================================================================================|");
	                            printf("\n|                                SANGOBION VITA-TONIK                                |");
	                            printf("\n|====================================================================================|");
	                            printf("\n| INDIKASI :                                                                         |");
	                            printf("\n| Sebagai penambah darah dan membantu memperbaiki stamina tubuh                      |");
	                            printf("\n|------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS :                                                                            |");
	                            printf("\n| 1 kali sehari (setelah makan)                |   2 sendok makan   |   (30 ml)   |  |");
	                            printf("\n|====================================================================================|");
	                            break;
	                        case 3 :
	                            harga = 29000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n ----------------------------------------------------------");
	                            printf("\n|     Harga %d Sakatonik Liver syrup adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  ------------------------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|====================================================================================|");
	                            printf("\n|                               SAKATONIK LIVER SYRUP                                |");
	                            printf("\n|====================================================================================|");
	                            printf("\n| INDIKASI :                                                                         |");
	                            printf("\n| Menambah darah, menambah nafsu makan, memenuhi kebutuhan tubuh akan vitamin dan    |");
	                            printf("\n| mineral.                                                                           |");
	                            printf("\n|------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS :                                                                            |");
	                            printf("\n| 1 kali sehari (setelah makan)                 |   1 sendok takar   |   (5 ml)   |  |");
	                            printf("\n|====================================================================================|");
	                            break;
	                        case 4 :
	                            harga = 53000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n -----------------------------------------------------");
	                            printf("\n|     Harga %d Feroglobin sirup adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  -------------------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|====================================================================================|");
	                            printf("\n|                                   FEROGLOBIN SIRUP                                 |");
	                            printf("\n|====================================================================================|");
	                            printf("\n| INDIKASI :                                                                         |");
	                            printf("\n| Suplemen Vit & Mineral untuk defisiensi Fe & An. Anemia defisiensi Fe, aktivitas   |");
	                            printf("\n| fisik yang berat, sering terkena infeksi & sakit, masa haid, masa penyembuhan      |");
	                            printf("\n|------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS :                                                                            |");
	                            printf("\n| Dewasa (Usia > 12 tahun)                                                           |");
	                            printf("\n| 2 kali sehari (setelah makan)                          |   1   sendok takar   |    |");
	                            printf("\n| Anak-Anak (Usia 7-12 tahun)                                                        |");
	                            printf("\n| 1-2 kali sehari (setelah makan)                        |   1   sendok takar   |    |");
	                            printf("\n| Anak-Anak (Usia 3-6 tahun)                                                         |");
	                            printf("\n| 2 kali sehari  (setelah makan)                         |   0.5 sendok takar   |    |");
	                            printf("\n|====================================================================================|");
	                            break;
	                        default :
	                            printf("\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat anemia.");
	                            system("cls");
	                        	goto Anemia;
	                    }
                break;

                case 9 :
                    Jerawat:

                        printf("\n\n\n|====================================================================================|");
                        printf("\n|                              REKOMENDASI OBAT JERAWAT                              |");
                        printf("\n|====================================================================================|");
                        printf("\n| 1. |  Acnes Sealing Jell                            |   Rp 29,000,00   |  18 gram  |");
                        printf("\n| 2. |  Verile Acne Gel                               |   Rp 18,000,00   |  10 gram  |");
                        printf("\n| 3. |  Emina Ms.Pimple Acne Gel                      |   Rp 28,000,00   |   15 ml   |");
                        printf("\n| 4. |  Acnol For Acne Gel                            |   Rp 16,000,00   |   10 ml   |");
                        printf("\n|====================================================================================|");
                        printf("\n\n  Masukkan obat yang Anda inginkan : ");
                        scanf("%i", &jerawat);
                        printf("\n--------------------------------------------------------------------------------------");
                        printf("\n\n  Jumlah obat yang ingin dibeli : ");
                        scanf("%i", &jumlah);
                        printf("\n--------------------------------------------------------------------------------------");

	                    switch(jerawat){
	                        case 1 :
	                            harga = 29000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n -------------------------------------------------------");
	                            printf("\n|     Harga %d Acnes Sealing Jell adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  ---------------------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|====================================================================================|");
	                            printf("\n|                                 ACNES SEALING JELL                                 |");
	                            printf("\n|====================================================================================|");
	                            printf("\n| INDIKASI :                                                                         |");
	                            printf("\n| Melawan bakteri penyebab jerawat, mengurangi peradangan (kemerahan) pada kulit     |");
	                            printf("\n| wajah akibat jerawat, mengecilkan volume jerawat serta mencegah penyumbatan        |");
	                            printf("\n| pori-pori, mengandung vitamin E dan B6 sehingga melembutkan kulit wajah dan        |");
	                            printf("\n| menutrisi kulit.                                                                   |");
	                            printf("\n|------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS :                                                                            |");
	                            printf("\n| 2 kali sehari                                      |   untuk jerawat ringan   |    |");
	                            printf("\n| 3 - 4 kali sehari                                  |   untuk jerawat berat    |    |");
	                            printf("\n| Keluarkan acnes sealing jell secukupnya pada jari, oleskan tipis pada jerawat      |");
	                            printf("\n|====================================================================================|");
	                            break;
	                       case 2 :
	                            harga = 18000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n ----------------------------------------------------");
	                            printf("\n|     Harga %d Verile Acne Gel adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  ------------------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|====================================================================================|");
	                            printf("\n|                                   VERILE ACNE GEL                                  |");
	                            printf("\n|====================================================================================|");
	                            printf("\n| INDIKASI :                                                                         |");
	                            printf("\n| Untuk kulit berminyak dan berjerawat                                               |");
	                            printf("\n|------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS :                                                                            |");
	                            printf("\n| 3 kali sehari                                                                      |");
	                            printf("\n| Dioleskan di wajah pada pagi, siang dan malam hari untuk mengeringkan dan merawat  |");
	                            printf("\n| kulit yang berjerawat                                                              |");
	                            printf("\n|====================================================================================|");
	                            break;
	                       case 3 :
	                            harga = 28000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n --------------------------------------------------------------");
	                            printf("\n|     Harga %d Emina Ms. Pimple Acne Gel adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  ----------------------------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|====================================================================================|");
	                            printf("\n|                              EMINA MS. PIMPLE ACNE GEL                             |");
	                            printf("\n|====================================================================================|");
	                            printf("\n| INDIKASI :                                                                         |");
	                            printf("\n| Melawan penyebab timbulnya jerawat, mengurangi tekstur kasar akibat jerawat dan    |");
	                            printf("\n| kemerahan pada kulit, membuat kulit tampak lebih halus dan mengurangi noda bekas   |");
	                            printf("\n| jerawat                                                                            |");
	                            printf("\n|------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS :                                                                            |");
	                            printf("\n| 1 - 3 kali sehari. Aplikasikan pada area yang berjerawat                           |");
	                            printf("\n|====================================================================================|");
	                            break;
	                       case 4 :
	                            harga = 16000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n -------------------------------------------------------");
	                            printf("\n|     Harga %d Acnol For Acne Gel adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  ---------------------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|====================================================================================|");
	                            printf("\n|                                 ACNOL FOR ACNE GEL                                 |");
	                            printf("\n|====================================================================================|");
	                            printf("\n| INDIKASI :                                                                         |");
	                            printf("\n| Anti Acne                                                                          |");
	                            printf("\n|------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS :                                                                            |");
	                            printf("\n| Sesuai Kebutuhan. Bersihkan wajah terlebih dahulu, kemudian ambil gel secukupnya,  |");
	                            printf("\n| lalu oleskan pada bagian yang berjerawat.                                          |");
	                            printf("\n|====================================================================================|");
	                            break;
	                       default :
	                            printf("\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat jerawat.");
	                            system("cls");
	                       		goto Jerawat;
	                    }
                break;

                case 10 :
                    Panu:

                        printf("\n\n\n|======================================================================================|");
                        printf("\n|                         REKOMENDASI OBAT PANU, KADAS, KURAP                          |");
                        printf("\n|======================================================================================|");
                        printf("\n| 1. |  Salep 88                                         |   Rp 14,000,00   |  6 gram  |");
                        printf("\n| 2. |  Kalpanax Salep                                   |   Rp 15,000,00   |  5 gram  |");
                        printf("\n| 3. |  Fungiderm                                        |   Rp 15,000,00   |  5 gram  |");
                        printf("\n| 4. |  Pi Kang Shuang                                   |   Rp 13,000,00   |  5 gram  |");
                        printf("\n|======================================================================================|");
                        printf("\n\n  Masukkan obat yang Anda inginkan : ");
                        scanf("%i", &panu);
                        printf("\n----------------------------------------------------------------------------------------");
                        printf("\n\n  Jumlah obat yang ingin dibeli :  ");
                        scanf("%i", &jumlah);
                        printf("\n----------------------------------------------------------------------------------------");

	                    switch(panu){
	                        case 1 :
	                            harga = 14000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n --------------------------------------");
	                            printf("\n|     Harga %d Salep 88 Rp %d,00    |", jumlah, total);
	                            printf("\n --  ----------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|====================================================================================|");
	                            printf("\n|                                      SALEP 88                                      |");
	                            printf("\n|====================================================================================|");;
	                            printf("\n| INDIKASI :                                                                         |");
	                            printf("\n| Untuk mengobati penyakit kulit seperti panu, kadas, kudis dan kutu air             |");
	                            printf("\n|------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS :                                                                            |");
	                            printf("\n| Dioleskan 3 kali sehari secukupnya pada bagian yang luka dan gatal                 |");
	                            printf("\n|====================================================================================|");
	                            break;
	                        case 2 :
	                            harga = 15000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n ---------------------------------------------------");
	                            printf("\n|     Harga %d Kalpanax Salep adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  -----------------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|====================================================================================|");
	                            printf("\n|                                   KALPANAX SALEP                                   |");
	                            printf("\n|====================================================================================|");
	                            printf("\n| INDIKASI :                                                                         |");
	                            printf("\n| Gatal jamur dan penyakit jamur kulit                                               |");
	                            printf("\n|------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS :                                                                            |");
	                            printf("\n| Dioleskan 2 kali sehari. Dioles tipis pada bagian kulit yang terinfeksi            |");
	                            printf("\n|====================================================================================|");
	                            break;
	                        case 3 :
	                            harga = 15000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n ----------------------------------------------");
	                            printf("\n|     Harga %d Fungiderm adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  ------------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|====================================================================================|");
	                            printf("\n|                                    FUNGIDERM                                       |");
	                            printf("\n|====================================================================================|");
	                            printf("\n| INDIKASI :                                                                         |");
	                            printf("\n| Untuk infeksi jamur pada kulit / kuku                                              |");
	                            printf("\n|------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS :                                                                            |");
	                            printf("\n| 2 - 3 kali sehari selama 10 - 14 hari secara teratur dan tidak berhenti            |");
	                            printf("\n| Oleskan krim secukupnya pada bagian yang sakit                                     |");
	                            printf("\n|====================================================================================|");
	                            break;
	                        case 4 :
	                            harga = 13000;
	                            total = harga * jumlah;
	                            system("cls");
	                            printf("\n\n\n ---------------------------------------------------");
	                            printf("\n|     Harga %d Pi Kang Shuang adalah Rp %d,00    |", jumlah, total);
	                            printf("\n --  -----------------------------------------------");
	                            printf("\n   |/");
	                            printf("\n\n|====================================================================================|");
	                            printf("\n|                                   PI KANG SHUANG                                   |");
	                            printf("\n|====================================================================================|");
	                            printf("\n| INDIKASI :                                                                         |");
	                            printf("\n| Inflamasi (peradangan) dari dermatosis yang responsif terhadap kortikosteroid yang |");
	                            printf("\n| disertai infeksi jamur dan bakteri.                                                |");
	                            printf("\n|------------------------------------------------------------------------------------|");
	                            printf("\n| DOSIS :                                                                            |");
	                            printf("\n| 2 - 3 kali sehari. Oleskan pada bagian yang sakit                                  |");
	                            printf("\n|====================================================================================|");
	                            break;
	                        default :
	                            printf("\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat panu, kadas, kurap.");
	                            system("cls");
	                        	goto Panu;
	                    }
                break;

                case 11 :
                    SakitGigi:

                        printf("\n\n\n|======================================================================================|");
                        printf("\n|                             REKOMENDASI OBAT SAKIT GIGI                              |");
                        printf("\n|======================================================================================|");
                        printf("\n|        Obat Kumur :                                                                  |");
                        printf("\n|--------------------------------------------------------------------------------------|");
                        printf("\n| 1.  |  Betadine Mouthwash & gargle                    |   Rp  36,000,00   |   190ml  |");
                        printf("\n| 2.  |  Dentova Pro Mouthwash                          |   Rp  21,000,00   |   220ml  |");
                        printf("\n|--------------------------------------------------------------------------------------|");
                        printf("\n|        Obat Tetes :                                                                  |");
                        printf("\n|--------------------------------------------------------------------------------------|");
                        printf("\n| 3.  |  Dentasol                                       |   Rp   8,000,00   |    10ml  |");
                        printf("\n| 4.  |  Hersagi                                        |   Rp  25,000,00   |    12ml  |");
                        printf("\n|======================================================================================|");
                        printf("\n\n  Masukkan obat yang Anda inginkan : ");
                        scanf("%i", &sakit_gigi);
                        printf("\n----------------------------------------------------------------------------------------");
                        printf("\n\n  Jumlah obat yang ingin dibeli : ");
                        scanf("%i", &jumlah);
                        printf("\n----------------------------------------------------------------------------------------");

                        switch(sakit_gigi){
                            case 1 :
                                harga = 36000;
                                total = harga * jumlah;
                                system("cls");
                                printf("\n\n\n --------------------------------------------------------------");
                                printf("\n|   Harga %d Betadine Mouthwash & Gargle adalah Rp %d,00    |", jumlah, total);
                                printf("\n --  ----------------------------------------------------------");
                                printf("\n   |/");
                                printf("\n\n|====================================================================================|");
                                printf("\n|                            BETADINE MOUTHWASH & GARGLE                             |");
                                printf("\n|====================================================================================|");
                                printf("\n| INDIKASI :                                                                         |");
                                printf("\n| Obat kumur antiseptik untuk rongga mulut seperti gusi bengkak, sakit tenggorokan,  |");
                                printf("\n| sariawan, bau mulut dan napas tak segar.                                           |");
                                printf("\n|------------------------------------------------------------------------------------|");
                                printf("\n| DOSIS :                                                                            |");
                                printf("\n| 3 - 5 kali sehari                  |   kumur selama 30-60 detik   |   (15 ml)   |  |");
                                printf("\n|====================================================================================|");
                                break;
                            case 2 :
                                harga = 21000;
                                total = harga * jumlah;
                                system("cls");
                                printf("\n\n\n -------------------------------------------------------");
                                printf("\n|  Harga %d Dentova Pro Mouthwash adalah Rp %d,00    |", jumlah, total);
                                printf("\n --  ---------------------------------------------------");
                                printf("\n   |/");
                                printf("\n\n|====================================================================================|");
                                printf("\n|                               DENTOVA PRO MOUTHWASH                                |");
                                printf("\n|====================================================================================|");
                                printf("\n| INDIKASI :                                                                         |");
                                printf("\n| Obat sakit gigi dengan antiseptik yang siap berantas bakteri atau kuman di dalam   |");
                                printf("\n| mulut.                                                                             |");
                                printf("\n|------------------------------------------------------------------------------------|");
                                printf("\n| DOSIS :                                                                            |");
                                printf("\n| 2 kali sehari                        |   kumur selama 60 detik   |   (10 ml)   |   |");
                                printf("\n|====================================================================================|");
                                break;
                            case 3 :
                                harga = 8000;
                                total = harga * jumlah;
                                system("cls");
                                printf("\n\n\n ------------------------------------------");
                                printf("\n|    Harga %d Dentasol adalah Rp %d,00   |", jumlah, total);
                                printf("\n  --  -------------------------------------");
                                printf("\n    |/");
                                printf("\n\n|====================================================================================|");
                                printf("\n|                                      DENTASOL                                      |");
                                printf("\n|====================================================================================|");
                                printf("\n| INDIKASI :                                                                         |");
                                printf("\n| Dentasol merupakan obat gigi yang dapat digunakan untuk mengatasi radang gusi,     |");
                                printf("\n| sariawan,sakit gigi, sakit dari rangsangan tumbuh gigi.                            |");
                                printf("\n|------------------------------------------------------------------------------------|");
                                printf("\n| DOSIS :                                                                            |");
                                printf("\n| 2 kali sehari                        |   kumur selama 60 detik   |   (10 ml)   |   |");
                                printf("\n|====================================================================================|");
                                break;
                            case 4 :
                                harga = 25000;
                                total = harga * jumlah;
                                system("cls");
                                printf("\n\n\n -----------------------------------------");
                                printf("\n|  Harga %d Hersagi adalah Rp %d,00    |", jumlah, total);
                                printf("\n --  -------------------------------------");
                                printf("\n   |/");
                                printf("\n\n|====================================================================================|");
                                printf("\n|                                       HERSAGI                                      |");
                                printf("\n|====================================================================================|");
                                printf("\n| INDIKASI :                                                                         |");
                                printf("\n| Hersagi secara tradisional digunakan untuk membantu meredakan nyeri yang disebabkan|");
                                printf("\n| oleh gigi berlubang dan membantu menyegarkan mulut.                                |");
                                printf("\n|------------------------------------------------------------------------------------|");
                                printf("\n| DOSIS :                                                                            |");
                                printf("\n| 3 - 5 kali sehari                                             |   2-3 tetes   |    |");
                                printf("\n|====================================================================================|");
                                break;
                            default :
                                printf("\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat sakit gigi.");
                                system("cls");
                            	goto SakitGigi;
                        }
                break;

                case 12 :
                    RadangTenggorokan:

                        printf("\n\n\n|=====================================================================================|");
                        printf("\n|                     REKOMENDASI OBAT RADANG TENGGOROKAN                             |");
                        printf("\n|=====================================================================================|");
                        printf("\n| 1. |  Strepsils                                   |   Rp 10,000,00   |   8 tablet   |");
                        printf("\n| 2. |  Ademsari                                    |   Rp  2,000,00   |   1 Sachet   |");
                        printf("\n| 3. |  Larutan Cap Kaki Tiga (kaleng)              |   Rp  6,000,00   |     320ml    |");
                        printf("\n| 4. |  Larutan Cap Kaki Tiga (botol)               |   Rp  6,000,00   |     500ml    |");
                        printf("\n|=====================================================================================|");
                        printf("\n\n  Masukkan obat yang Anda inginkan : ");
                        scanf("%i", &tenggorokan);
                        printf("\n----------------------------------------------------------------------------------------");
                        printf("\n\n  Jumlah obat yang ingin dibeli : ");
                        scanf("%i", &jumlah);
                        printf("\n----------------------------------------------------------------------------------------");

                        switch(tenggorokan){
                            case 1 :
                                harga = 10000;
                                total = harga * jumlah;
                                system("cls");
                                printf("\n\n\n ----------------------------------------------");
                            	printf("\n|     Harga %d Strepsils adalah Rp %d,00    |", jumlah, total);
                                printf("\n --  ------------------------------------------");
                                printf("\n   |/");
                                printf("\n\n|====================================================================================|");
                                printf("\n|                                     STREPSILS                                      |");
                                printf("\n|====================================================================================|");
                                printf("\n| INDIKASI :                                                                         |");
                                printf("\n| Strepsils bermanfaat untuk meredakan sakit tenggorokan akibat infeksi.             |");
                                printf("\n| Strepsil tersedia dalam bentuk tablet isap dengan beberapa varian rasa.            |");
                                printf("\n|------------------------------------------------------------------------------------|");
                                printf("\n| DOSIS :                                                                            |");
                                printf("\n| Usia 6 tahun - Dewasa                         |   tiap 1-2 jam   |   1 tablet   |  |");
                                printf("\n|====================================================================================|");
                                break;
                            case 2 :
                                harga = 2000;
                                total = harga * jumlah;
                                system("cls");
                                printf("\n\n\n ---------------------------------------------");
                                printf("\n|     Harga %d Adem Sari adalah Rp %d,00    |", jumlah, total);
                                printf("\n --  -----------------------------------------");
                                printf("\n   |/");
                                printf("\n\n|====================================================================================|");
                                printf("\n|                                    ADEM SARI                                       |");
                                printf("\n|====================================================================================|");
                                printf("\n| INDIKASI :                                                                         |");
                                printf("\n| Merupakan minuman penyejuk yang mengandung ekstrak Citrus Aurantifolia dan ekstrak |");
                                printf("\n| Alyxia stellata. Dilengkapi juga dengan kandungan vitamin C. Digunakan untuk       |");
                                printf("\n| membantu meredakan gejala panas dalam, seperti tenggorokan kering, sariawan, dan   |");
                                printf("\n| bibir pecah-pecah.                                                                 |");
                                printf("\n|------------------------------------------------------------------------------------|");
                                printf("\n| DOSIS :                                                                            |");
                                printf("\n| Dewasa (Usia > 12 tahun)                                                           |");
                                printf("\n| 2 - 3 kali sehari(sebelum atau sesudah makan) |   1   sachet   |   200 ml air   |  |");
                                printf("\n|------------------------------------------------------------------------------------|");
                                printf("\n| Anak-anak (Usia <= 12 tahun)                                                       |");
                                printf("\n| 2 - 3 kali sehari(sebelum atau sesudah makan) |   0.5 sachet   |   200 ml air   |  |");
                                printf("\n|====================================================================================|");
                                break;
                            case 3 :
                                harga = 6000;
                                total = harga * jumlah;
                                system("cls");
                                printf("\n\n\n ------------------------------------------------------------------");
                                printf("\n|     Harga %d Larutan Cap Kaki Tiga (kaleng) adalah Rp %d,00    |", jumlah, total);
                                printf("\n --  --------------------------------------------------------------");
                                printf("\n   |/");
                                printf("\n\n|====================================================================================|");
                                printf("\n|                           LARUTAN CAP KAKI TIGA (KALENG)                           |");
                                printf("\n|====================================================================================|");
                                printf("\n| INDIKASI :                                                                         |");
                                printf("\n| merupakan minuman penyegar dengan rasa yang bermanfaat untuk membantu meredakan    |");
                                printf("\n| panas dalam, sariawan, tenggorokan kering, dan untuk membantu menyegarkan tubuh.   |");
                                printf("\n|------------------------------------------------------------------------------------|");
                                printf("\n| DOSIS :                                                                            |");
                                printf("\n| Dewasa (Usia > 12 tahun)                                                           |");
                                printf("\n| 3 kali sehari (sebelum atau sesudah makan)            |   0.5  - 1   kaleng   |    |");
                                printf("\n|------------------------------------------------------------------------------------|");
                                printf("\n| Anak-anak (Usia <= 12 tahun)                                                       |");
                                printf("\n| 2 - 3 kali sehari (sebelum atau sesudah makan)        |   0.25 - 0.5 kaleng   |    |");
                                printf("\n|====================================================================================|");
                            	break;
                            case 4 :
                                harga = 6000;
                                total = harga * jumlah;
                                system("cls");
                                printf("\n\n\n -----------------------------------------------------------------");
                                printf("\n|     Harga %d Larutan Cap Kaki Tiga (botol) adalah Rp %d,00    |", jumlah, total);
                                printf("\n --  -------------------------------------------------------------");
                                printf("\n   |/");
                                printf("\n\n|====================================================================================|");
                                printf("\n|                            LARUTAN CAP KAKI TIGA (BOTOL)                           |");
                                printf("\n|====================================================================================|");
                                printf("\n| INDIKASI :                                                                         |");
                                printf("\n| larutan penyegar yang bermanfaat untuk membantu meredakan panas dalam yang disertai|");
                                printf("\n| tenggorokan kering, sariawan dan untuk membantu menyegarkan badan.                 |");
                                printf("\n|------------------------------------------------------------------------------------|");
                                printf("\n| DOSIS :                                                                            |");
                                printf("\n| Dewasa (Usia > 12 tahun)                                                           |");
                                printf("\n| 3 kali sehari (sebelum/sesudah makan)                  |   0.5  - 1   botol   |    |");
                                printf("\n|------------------------------------------------------------------------------------|");
                                printf("\n| Anak-anak (Usia <= 12 tahun)                                                       |");
                                printf("\n| 2 - 3 kali sehari (sebelum/sesudah makan)              |   0.25 - 0.5 botol   |    |");
                                printf("\n|====================================================================================|");
                                break;
                            default :
                                printf("\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat radang tenggorokan.");
                                system("cls");
                            	goto RadangTenggorokan;
                        }
                break;

                case 13 :
                    Lemas:

                        printf("\n\n\n|=====================================================================================|");
                        printf("\n|                           REKOMENDASI OBAT LEMAS                                    |");
                        printf("\n|=====================================================================================|");
                        printf("\n| 1. |  Vitabiotics Ultra Vitamin D                 |   Rp  30,000,00   |   1 strip   |");
                        printf("\n| 2. |  Sangobion                                   |   Rp  17,000,00   |   1 strip   |");
                        printf("\n| 3. |  Stimuno                                     |   Rp  19,000,00   |   1 strip   |");
                        printf("\n| 4. |  Vitalong C Cap                              |   Rp   5,000,00   |   1 strip   |");
                        printf("\n|-------------------------------------------------------------------------------------|");
                        printf("\n\n  Masukkan obat yang Anda inginkan : ");
                        scanf("%i", &lemas);
                        printf("\n----------------------------------------------------------------------------------------");
                        printf("\n\n  Jumlah obat yang ingin dibeli : ");
                        scanf("%i", &jumlah);
                        printf("\n----------------------------------------------------------------------------------------");

                        switch(lemas){
                        	case 1 :
                        		harga = 30000;
		                        total = harga * jumlah;
		                        system("cls");
		                        printf("\n\n\n ------------------------------------------------------------------");
		                        printf("\n|     Harga %d Larutan Cap Kaki Tiga (botol) adalah Rp %d,00    |", jumlah, total);
		                        printf("\n --  --------------------------------------------------------------");
		                        printf("\n   |/");
		                        printf("\n\n|========================================================================================|");
		                        printf("\n|                            VITABIOTICS ULTRA VITAMIN D                                 |");
		                        printf("\n|========================================================================================|");
		                        printf("\n| INDIKASI :                                                                             |");
		                        printf("\n| Suplementasi Vitamin D3 untuk membantu menjaga kesehatan dan kekuatan tulang.          |");
		                        printf("\n|----------------------------------------------------------------------------------------|");
		                        printf("\n| DOSIS :                                                                                |");
		                        printf("\n| 1 kali sehari (sesudah makan)                                      |   1 tablet   |    |");
		                        printf("\n|========================================================================================|");
		                        break;
		                	case 2 :
		                        harga = 17000;
		                        total = harga * jumlah;
		                        system("cls");
		                        printf("\n\n\n ----------------------------------------------");
		                        printf("\n|     Harga %d Sangobion adalah Rp %d,00    |", jumlah, total);
		                        printf("\n --  ------------------------------------------");
		                        printf("\n   |/");
		                        printf("\n\n|=========================================================================================|");
		                        printf("\n                                         SANGOBION                                        |");
		                        printf("\n|=========================================================================================|");
		                        printf("\n| INDIKASI :                                                                              |");
		                        printf("\n| SANGOBION adalah vitamin dan zat besi penambah darah dengan kandungan Ferrous gluconate,|");
		                        printf("\n| manganese sulfate, copper Sulfate, vitamin C, folic acid, vitamin B12.                  |");
		                        printf("\n|-----------------------------------------------------------------------------------------|");
		                        printf("\n| DOSIS :                                                                                 |");
		                        printf("\n| 1 kali sehari (sesudah makan)                                       |   1 kapsul   |    |");
		                        printf("\n|=========================================================================================|");
		                        break;
		                	case 3 :
		                        harga = 9000;
		                        total = harga * jumlah;
		                        system("cls");
		                        printf("\n\n\n --------------------------------------------");
		                        printf("\n|     Harga %d Stimuno adalah Rp %d,00    |", jumlah, total);
		                        printf("\n --  ----------------------------------------");
								printf("\n   |/");
		                        printf("\n\n|======================================================================================|");
		                        printf("\n|                                    STIMUNO                                           |");
		                        printf("\n|======================================================================================|");
		                        printf("\n| INDIKASI :                                                                           |");
		                        printf("\n| Membantu merangsang tubuh memproduksi lebih banyak antibodi dan mengaktifkan sistem  |");
		                        printf("\n| kekebalan tubuh agar daya tahan tubuh bekerja optimal.                               |");
		                        printf("\n|--------------------------------------------------------------------------------------|");
		                        printf("\n| DOSIS :                                                                              |");
		                        printf("\n| 3 kali sehari (sesudah makan)                                    |   1 tablet   |    |");
		                        printf("\n|======================================================================================|");
		                        break;
		                	case 4 :
		                        harga = 5000;
		                        total = harga * jumlah;
		                        system("cls");
		                        printf("\n\n\n --------------------------------------------------");
		                        printf("\n|     Harga %d Vitalong C Cap adalah Rp %d,00    |", jumlah, total);
		                        printf("\n --  ----------------------------------------------");
		                        printf("\n   |/");
		                        printf("\n\n|======================================================================================|");
		                        printf("\n|                              VITALONG C CAP                                          |");
		                        printf("\n|======================================================================================|");
		                        printf("\n| INDIKASI :                                                                           |");
		                        printf("\n| Suplemen ini mengandung Vitamin C 500 mg yang berfungsi untuk memenuhi kebutuhan     |");
		                        printf("\n| Vitamin C dan membantu memelihara daya tahan tubuh.                                  |");
		                        printf("\n|--------------------------------------------------------------------------------------|");
		                        printf("\n| DOSIS :                                                                              |");
		                        printf("\n| 1 kali sehari (sesudah makan)                                    |   1 kapsul   |    |");
		                        printf("\n|======================================================================================|");
		                        break;
		                	default :
		                        printf("\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat lemas.");
		                        system("cls");
		                    	goto Lemas;
		                }
		        break;

                case 14 :
                    MasukAngin:

                        printf("\n\n\n|=====================================================================================|");
                        printf("\n|               REKOMENDASI OBAT MABUK KENDARAAN & MASUK ANGIN                        |");
                        printf("\n|=====================================================================================|");
                        printf("\n| 1. |  Antimo strip                              |   Rp   5,000,00   |   10 tablet   |");
                        printf("\n| 2. |  Antimo anak                               |   Rp   1,000,00   |       5ml     |");
                        printf("\n| 3. |  Tolak Angin                               |   Rp   3,000,00   |      15ml     |");
                        printf("\n| 4. |  Antangin                                  |   Rp   3,000,00   |    4 tablet   |");
                        printf("\n|=====================================================================================|");
                        printf("\n\n  Masukkan obat yang Anda inginkan : ");
                        scanf("%i", &masuk_angin);
                        printf("\n----------------------------------------------------------------------------------------");
                        printf("\n\n  Jumlah obat yang ingin dibeli : ");
                        scanf("%i", &jumlah);
                        printf("\n----------------------------------------------------------------------------------------");

                        switch(masuk_angin){
                            case 1 :
                                harga = 5000;
                                total = harga * jumlah;
                                system("cls");
                                printf("\n\n\n ----------------------------------------------------");
                                printf("\n|     Harga %d Antimo Strip adalah Rp %d,00    |", jumlah, total);
                                printf("\n --  ------------------------------------------------");
                                printf("\n   |/");
                                printf("\n\n|======================================================================================|");
                                printf("\n|                                        ANTIMO                                        |");
                                printf("\n|======================================================================================|");
                                printf("\n| INDIKASI :                                                                           |");
                                printf("\n| Antimo merupakan obat yang digunakan untuk mengatasi rasa mual dan muntahakibat mabuk|");
                                printf("\n| perjalanan (motion sickness) maupun kondisi vertigo.                                 |");
                                printf("\n|--------------------------------------------------------------------------------------|");
                                printf("\n| DOSIS :                                                                              |");
                                printf("\n| Dewasa (Usia > 12 tahun)                                                             |");
                                printf("\n| 30 menit sebelum berpergian(sesudah makan)           |   1   tablet   |   50 mg   |  |");
                                printf("\n|--------------------------------------------------------------------------------------|");
                                printf("\n| Anak-anak (Usia <= 12 tahun)                                                         |");
                                printf("\n| 30 menit sebelum berpergian(sesudah makan)           |   0.5 tablet   |   25 mg   |  |");
                                printf("\n|======================================================================================|");
                                break;
                            case 2 :
                                harga = 1000;
                                total = harga * jumlah;
                                system("cls");
                                printf("\n\n\n --------------------------------------------------");
                                printf("\n|     Harga %d Antimo Anak adalah Rp %d,00    |", jumlah, total);
                                printf("\n --  ----------------------------------------------");
                                printf("\n   |/");
                                printf("\n\n|======================================================================================|");
                                printf("\n|                                     ANTIMO ANAK                                      |");
                                printf("\n|======================================================================================|");
                                printf("\n| INDIKASI :                                                                           |");
                                printf("\n| Antimo sirup merupakan anti mual atau muntah yang dikemas dalam bentuk sachet, dengan|");
                                printf("\n| rasa yang disukai anak-anak dan praktis dibawa kemana-mana.                          |");
                                printf("\n|--------------------------------------------------------------------------------------|");
                                printf("\n| DOSIS :                                                                              |");
                                printf("\n| 30 menit sebelum berpergian(sesudah makan)          |   1-2 sachet   |    5 ml    |  |");
                                printf("\n|======================================================================================|");
                                break;
                            case 3 :
                                harga = 3000;
                                total = harga * jumlah;
                                system("cls");
                                printf("\n\n\n --------------------------------------------------");
                                printf("\n|     Harga %d Tolak Angin adalah Rp %d,00    |", jumlah, total);
                                printf("\n --  ----------------------------------------------");
                                printf("\n   |/");
                                printf("\n\n|============================================================================================|");
                                printf("\n|                                         TOLAK ANGIN                                        |");
                                printf("\n|============================================================================================|");
                                printf("\n| INDIKASI :                                                                                 |");
                                printf("\n| Herbal untuk membantu meringankan gejala masuk angin, seperti: pusing, meriang,            |");
                                printf("\n| kembung, sakit perut, tengorokan kering, mual dan muntah, serta membantu memelihara        |");
                                printf("\n| atau menjaga daya tahan tubuh. Tolak angin cair juga dapat diminum saat perjalanan         |");
                                printf("\n| jauh,kecapaian dan kurang tidur.                                                           |");
                                printf("\n|--------------------------------------------------------------------------------------------|");
                                printf("\n| DOSIS :                                                                                    |");
                                printf("\n| 2 kali perhari(sesudah makan)              | menjaga daya tahan tubuh      | 1-2 sachet |  |");
                                printf("\n| 2 - 4 kali perhari(sesudah makan)          | masuk angin dan diare         | 3-4 sachet |  |");
                                printf("\n| 1 - 3 kali perhari(sesudah makan)          | mabuk perjalanan              | 1-3 sachet |  |");
                                printf("\n| 30 menit sebelum berpergian(sesudah makan) | sebelum melakukan perjalanan  | 1   sachet |  |");
                                printf("\n|============================================================================================|");
                                break;
                            case 4 :
                                harga = 3000;
                                total = harga * jumlah;
                                system("cls");
                                printf("\n\n\n --------------------------------------------------");
                                printf("\n|     Harga %d Antangin adalah Rp %d,00    |", jumlah, total);
                                printf("\n --  ----------------------------------------------");
                                printf("\n   |/");
                                printf("\n\n|======================================================================================|");
                                printf("\n|                                   ANTANGIN                                           |");
                                printf("\n|======================================================================================|");
                                printf("\n| INDIKASI :                                                                           |");
                                printf("\n| merupakan sirup herbal masuk angin dengan kandungan utama Jahe, Royal Jelly dan      |");
                                printf("\n| Ginseng. Antangin digunakan untuk membantu meredakan masuk angin, meriang, rasa mual,|");
                                printf("\n| perut kembung, capek dan pusing serta melegakan tenggorokan.                         |");
                                printf("\n|--------------------------------------------------------------------------------------|");
                                printf("\n| DOSIS :                                                                              |");
                                printf("\n| Dewasa (Usia > 12 tahun)                                                             |");
                                printf("\n| 3 kali sehari (sesudah makan)                      |   1   sachet   |   15   ml   |  |");
                                printf("\n|--------------------------------------------------------------------------------------|");
                                printf("\n| Anak-anak (Usia <= 12 tahun)                                                         |");
                                printf("\n| 3 x sehari (sesudah makan)                         |   0.5 sachet   |    7,5 ml   |  |");
                                printf("\n|======================================================================================|");
                                break;
                            default :
                                printf("\n\n  Inputan salah, akan dikembalikan ke menu rekomendasi obat mabuk kendaraan & masuk angin.");
                                system("cls");
                            	goto MasukAngin;
                        }
                break;

                default :
                    printf("\n\n  Inputan salah, akan dikembalikan ke menu daftar keluhan penyakit.");
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

            printf("\n\n\n|===================================================================================|");
            printf("\n|                                   ALAT KESEHATAN                                  |");
            printf("\n|===================================================================================|");
            printf("\n| 1. |  Inhealer                                 |   Rp 125,000,00   |              |");
            printf("\n| 2. |  Alat tes gula                            |   Rp 139,000,00   |              |");
            printf("\n| 3. |  Tensi meter digital                      |   Rp 165,000,00   |              |");
            printf("\n| 4. |  Tabung Oksigen                           |   Rp 650,000,00   |              |");
            printf("\n| 5. |  Termometer                               |   Rp  55,000,00   |              |");
            printf("\n| 6. |  Timbangan Badan                          |   Rp  75,000,00   |              |");
            printf("\n| 7. |  Kursi roda                               |   Rp 900,000,00   |              |");
            printf("\n|-----------------------------------------------------------------------------------|");
            printf("\n|                                   Perawatan Luka                                  |");
            printf("\n|-----------------------------------------------------------------------------------|");
            printf("\n| 8. |  Betadine sol                             |   Rp  17,000,00   |   15  ml     |");
            printf("\n| 9. |  Rivanol one med                          |   Rp   4,000,00   |   100 ml     |");
            printf("\n| 10.|  Dermatix ultra gel                       |   Rp 139,000,00   |   5   gram   |");
            printf("\n| 11.|  Hansaplast antiseptik pembersih luka     |   Rp  27,000,00   |   40  ml     |");
            printf("\n| 12.|  Hansaplast kain elastis 2637             |   Rp  30,000,00   |   20  lembar |");
            printf("\n| 13.|  Hansaplast kain rol                      |   Rp  47,000,00   |   500 cm     |");
            printf("\n| 14.|  Hansaplast kasa rol elastis              |   Rp  23,000,00   |   4m x 6cm   |");
            printf("\n| 15.|  Hansaplast kasa steril 7,5 x 7,5cm       |   Rp  29,000,00   |   10 pcs     |");
            printf("\n| 16.|  Kapas pembalut luka                      |   Rp   7,000,00   |   100 gram   |");
            printf("\n| 17.|  Kain kasa husada 16 x 16cm               |   Rp  15,000,00   |   16  lembar |");
            printf("\n====================================================================================|");
            printf("\n\n  Masukkan Alat Kesehatan yang Anda inginkan : ");
            scanf("%i", &AlatKesehatan);
            printf("\n-------------------------------------------------------------------------------------");
            printf("\n\n  Jumlah Alat Kesehatan yang ingin dibeli : ");
            scanf("%i", &jumlah);

            switch(AlatKesehatan){
                case 1 :
                    harga = 125000;
                    total = harga * jumlah;
                    printf("\n\n\n ----------------------------------------------");
                    printf("\n|     Harga %d Inhealer adalah Rp %d,00    |", jumlah, total);
                    printf("\n --  ------------------------------------------");
                    printf("\n   |/");
                  	break;
                case 2 :
                    harga = 139000;
                    total = harga * jumlah;
                    printf("\n\n\n ---------------------------------------------------");
                    printf("\n|     Harga %d Alat tes gula adalah Rp %d,00    |", jumlah, total);
                    printf("\n --  -----------------------------------------------");
                    printf("\n   |/");
                  	break;
                case 3 :
                    harga = 165000;
                    total = harga * jumlah;
                    printf("\n\n\n ---------------------------------------------------------");
                    printf("\n|     Harga %d Tensi meter digital adalah Rp %d,00    |", jumlah, total);
                    printf("\n --  -----------------------------------------------------");
                    printf("\n   |/");
                	break;
                case 4 :
                	harga = 650000;
                    total = harga * jumlah;
                    printf("\n\n\n ----------------------------------------------------");
                    printf("\n|     Harga %d Tabung Oksigen adalah Rp %d,00    |", jumlah, total);
                    printf("\n --  ------------------------------------------------");
                    printf("\n   |/");
                  	break;
                case 5 :
                    harga = 55000;
                    total = harga * jumlah;
                    printf("\n\n\n -----------------------------------------------");
                    printf("\n|     Harga %d Termometer adalah Rp %d,00    |", jumlah, total);
                    printf("\n --  -------------------------------------------");
                    printf("\n   |/");
                  	break;
                case 6 :
                    harga = 75000;
                    total = harga * jumlah;
                    printf("\n\n\n ----------------------------------------------------");
                    printf("\n|     Harga %d Timbangan Badan adalah Rp %d,00    |", jumlah, total);
                    printf("\n --  ------------------------------------------------");
                    printf("\n   |/");
                  	break;
                case 7 :
                    harga = 900000;
                    total = harga * jumlah;
                    printf("\n\n\n ------------------------------------------------");
                    printf("\n|     Harga %d Kursi Roda adalah Rp %d,00    |", jumlah, total);
                    printf("\n --  --------------------------------------------");
                    printf("\n   |/");
                  	break;
                case 8 :
                    harga = 17000;
                    total = harga * jumlah;
                    printf("\n\n\n -------------------------------------------------");
                    printf("\n|     Harga %d Betadine sol adalah Rp %d,00    |", jumlah, total);
                    printf("\n --  ---------------------------------------------");
                    printf("\n   |/");
                  	break;
                case 9 :
                    harga = 4000;
                    total = harga * jumlah;
                    printf("\n\n\n ---------------------------------------------------");
                    printf("\n|     Harga %d Rivanol one med adalah Rp %d,00    |", jumlah, total);
                    printf("\n --  -----------------------------------------------");
                    printf("\n   |/");
                  	break;
                case 10 :
                    harga = 139000;
                    total = harga * jumlah;
                    printf("\n\n\n --------------------------------------------------------");
                    printf("\n|     Harga %d Dermatix ultra gel adalah Rp %d,00    |", jumlah, total);
                    printf("\n --  ----------------------------------------------------");
                    printf("\n   |/");
                  	break;
                case 11 :
                    harga = 27000;
                    total = harga * jumlah;
                    printf("\n\n\n -------------------------------------------------------------------------");
                    printf("\n|     Harga %d Hansaplast antiseptik pembersih luka adalah Rp %d,00    |", jumlah, total);
                    printf("\n --  ---------------------------------------------------------------------");
                    printf("\n   |/");
                  	break;
                case 12 :
                    harga = 30000;
                    total = harga * jumlah;
                    printf("\n\n\n -----------------------------------------------------------------");
                    printf("\n|     Harga %d Hansaplast kain elastis 2637 adalah Rp %d,00    |", jumlah, total);
                    printf("\n --  -------------------------------------------------------------");
                    printf("\n   |/");
                  	break;
                case 13 :
                    harga = 47000;
                    total = harga * jumlah;
                    printf("\n\n\n --------------------------------------------------------");
                    printf("\n|     Harga %d Hansaplast kain rol adalah Rp %d,00    |", jumlah, total);
                    printf("\n --  ----------------------------------------------------");
                    printf("\n   |/");
                  	break;
                case 14 :
                    harga = 23000;
                    total = harga * jumlah;
                    printf("\n\n\n ----------------------------------------------------------------");
                    printf("\n|     Harga %d Hansaplast kasa rol elastis adalah Rp %d,00    |", jumlah, total);
                    printf("\n --  ------------------------------------------------------------");
                    printf("\n   |/");
                  	break;
                case 15 :
                    harga = 29000;
                    total = harga * jumlah;
                    printf("\n\n\n ------------------------------------------------------------------------");
                    printf("\n|     Harga %d Hansaplast kasa steril 7,5 x 7,5 cm adalah Rp %d,00    |", jumlah, total);
                    printf("\n --  --------------------------------------------------------------------");
                    printf("\n   |/");
                  	break;
                case 16 :
                    harga = 7000;
                    total = harga * jumlah;
                    printf("\n\n\n -------------------------------------------------------");
                    printf("\n|     Harga %d Kapas pembalut luka adalah Rp %d,00    |", jumlah, total);
                    printf("\n --  ---------------------------------------------------");
                    printf("\n   |/");
                  	break;
                case 17 :
                    harga = 15000;
                    total = harga * jumlah;
                    printf("\n\n\n ----------------------------------------------------------------");
                    printf("\n|     Harga %d Kain kasa husada 16 x 16 cm adalah Rp %d,00    |", jumlah, total);
                    printf("\n --  ------------------------------------------------------------");
                    printf("\n   |/");
               	   	break;
                default :
                    printf("\n\nInputan salah, akan dikembalikan ke menu alat kesehatan.");
                	goto AlatKesehatan;
            }

		bayar = bayar + (harga * jumlah);
        pajak = bayar * 0.1;
        semua = pajak + bayar;

		TotalSementara(bayar, pajak, semua);
    }



int main() {

    int opsi;

    main:

		system("cls");
	    printf("\n =============================================================================");
	    printf("\n|                                APOTEK LYFECARE                              |");
	    printf("\n|=============================================================================|");
	    printf("\n| Selamat datang di layanan online Apotek LyfeCare!                           |");
	    printf("\n| Disini kami melayani :                                                      |");
	    printf("\n|-----------------------------------------------------------------------------|");
	    printf("\n|  1. |  Obat-Obatan                                                          |");
	    printf("\n|  2. |  Alat Kesehatan                                                       |");
	    printf("\n =============================================================================");
	    printf("\n\n  Apa yang Anda inginkan : ");
	    scanf("%d", &opsi);

	    switch(opsi){
            case 1 :
                MacamMacamObat();
                break;
            case 2 :
                AlatKesehatan();
                break;
            default :
                printf("\n\n  Inputan salah, akan dikembalikan ke menu utama.");
                system("cls");
            	goto main;
        }

    return 0;
}
