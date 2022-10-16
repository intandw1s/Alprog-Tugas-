#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#define PHI 3.14

//=====================================================================
//FUNGSI LUAS

float hitung_luas_lingkaran(float jari2){
    float luas_lingkaran;
    luas_lingkaran =  PHI * jari2 * jari2;

return luas_lingkaran;
}

float hitung_luas_trapesium(float sisi1, float sisi2, float tinggi){
    float luas_trapesium;
    luas_trapesium=(sisi1+sisi2)*tinggi/2;

return luas_trapesium;
}

float hitung_luas_jajargenjang(float alas, float tinggi){
	float luas_jajargenjang;
	luas_jajargenjang = alas*tinggi;

return luas_jajargenjang;
}

//FUNGSI KELILING

float hitung_kel_lingkaran(float jari2){
    float kel_lingkaran;
    kel_lingkaran = 2*PHI*jari2;
	return kel_lingkaran;
}

float hitung_kel_trapesium(float sisi1, float sisi2, float sisi3, float sisi4){
	float kel_trapesium;
	kel_trapesium = sisi1+sisi2+sisi3+sisi4;
	return kel_trapesium;
}

float hitung_kel_jajargenjang(float sisialas, float sisimiring){
	float kel_jajargenjang;
	kel_jajargenjang = 2*(sisialas+sisimiring);
	return kel_jajargenjang ;
}



//=====================================================================
//FUNGSI VALIDASI INPUT

int validasimain() {
    int i = 0;
    int salah =0;
    char angka[100];
    int val;
    int array;

    scanf("%s", &angka);
    array=strlen(angka);

    for(i=0;i<array; i++){
        if(angka[i]>=49 && angka[i]<=54){ // PEMBATAS PADA ASCII DIMANA 49-54 BERNILAI "1-6"

        }else{
            salah += 1;
        }
    }

    if(salah>0){
        printf("INPUT TIDAK SESUAI\n\n");
        printf("Masukan Pilihan Menu : ");
        validasimain();
    }else{
        val = atoi(angka);
        if(val>=1 && val<=6){
            return val;
        }else{
            printf("INPUT TIDAK SESUAI\n\n");
            printf("Masukan Pilihan Menu : ");
            validasimain();
        }
    }
}

int validasiPilihan() {
    int i = 0;
    int salah =0;
    char angka[100];
    int val;
    int array;

    scanf("%s", &angka);
    array=strlen(angka);

    for(i=0;i<array; i++){
        if(angka[i]>=49 && angka[i]<=51){ // PEMBATAS PADA ASCII DIMANA 49-51 BERNILAI "1-3"

        }else{
            salah += 1;
        }
    }

    if(salah>0){
        printf("INPUT TIDAK SESUAI\n\n");
        printf("Masukan Pilihan Menu : ");
        validasiPilihan();
    }else{
        val = atoi(angka);
        if(val>=1 && val<=3){
            return val;
        }else{
            printf("INPUT TIDAK SESUAI\n\n");
            printf("Masukan Pilihan Menu : ");
            validasiPilihan();
        }
    }
}

float validasiBil(){
    int i = 0;
    int salah =0;
    int titik=0;
    char angka[100];
    float val;
    int array;

    scanf("%s", &angka);
    array=strlen(angka);

    if(angka[0]>=48 && angka[0]<=57){ // PEMBATAS PADA ASCII DIMANA 49-51 BERNILAI "0-9"

    }else{
        salah += 1;
    }

    for(i=1;i<array; i++){
        if(angka[i]>=48 && angka[i]<=57){ // PEMBATAS PADA ASCII DIMANA 49-51 BERNILAI "0-9"

        }else if(angka[i]==46){ // PEMBATAS PADA ASCII DIMANA 45 BERNILAI "."
            titik += 1;
        }else{
            salah += 1;
        }
    }

    if(salah>0 || titik>1){
        printf("HARAP MASUKAN BILLANGAN YANG SESUAI\n");
        printf("Masukkan input : ");
        validasiBil();
    }else{
        val = atof(angka);
        return val;
    }
}

//=====================================================================
//MENU
void main(){
    int pilihan;

    printf("=================================================\n\n");
    printf("             PROGRAM MENGHITUNG LUAS &           \n");
    printf("               KELILING BANGUN DATAR             \n\n");
    printf("=================================================\n\n");
    printf("Daftar Pilihan Menu :\n\n");
    printf("\t1.Hitung Luas Bangun Datar\n");
    printf("\t2.Hitung Keliling Bangun Datar\n");
    printf("\t3.Exit\n");
    printf("-------------------------------------------------\n");
    printf("\nMasukan Nomor Menu : ");
    pilihan = validasiPilihan();
    printf("\n");
    system("cls");

    switch (pilihan){
	    case 1:
	    luasBangunDatar();
	    break;
	    case 2:
	    kelilingBangunDatar();
	    break;
	    default:
        printf("PROGRAM TELAH BERHENTI\n\n");
	    break;
	 }
}

//Sub Menu Luas
void luasBangunDatar(){
	int pilihan;

    printf("=================================================\n\n");
    printf("             PROGRAM MENGHITUNG LUAS &           \n");
    printf("               KELILING BANGUN DATAR             \n\n");
    printf("-------------------------------------------------\n");
    printf("                 PENGHITUNGAN LUAS               \n");
    printf("=================================================\n\n");
    printf("Pilih Bangun Datar Dibawah\n");
    printf("\t1.Lingkaran\n");
    printf("\t2.Trapesium\n");
    printf("\t3.Jajargenjang\n");
    printf("\t4.Kembali\n");
    printf("-------------------------------------------------\n");
    printf("Masukan Nomor Menu : ");
    pilihan = validasimain();
    system("cls");

    switch (pilihan){
	    case 1:
        lLingkaran();
	    break;
	    case 2:
        lTrapesium();
	    break;
	    case 3:
        lJajargenjang();
	    break;
	    default:
	    main();
	    break;
	 }
}
// Luas Lingkaran
void lLingkaran(){
    int pilihan;
    float r,luas;

    printf("=================================================\n\n");
    printf("       PROGRAM MENGHITUNG LUAS BANGUN DATAR      \n\n");
    printf("-------------------------------------------------\n");
    printf("             Hitung Luas Lingkaran               \n");
    printf("=================================================\n\n");
    printf("Masukan Panjang Jari-jari (cm) : ");
    r = validasiBil();

    luas = hitung_luas_lingkaran(r);
    printf("Luas Lingkaran adalah : %.2f cm2\n",luas);

    printf("\n\n=================================================\n");
    printf("          1.Ulangi      2.Kembali       3.MENU\n");
    printf("-------------------------------------------------\n");
    printf("Masukan Pilihan Anda : ");
    pilihan = validasiPilihan();
    system("cls");

	switch(pilihan){
	    case 1:
        lLingkaran();
	    break;
	    case 2:
	    luasBangunDatar();
	    break;
	    default:
	    main();
	    break;
    }
}
// Luas Trapesium
void lTrapesium(){
    int pilihan;
    float a,b,t,luas;

    printf("=================================================\n\n");
    printf("       PROGRAM MENGHITUNG LUAS BANGUN DATAR      \n\n");
    printf("-------------------------------------------------\n");
    printf("             Hitung Luas Trapesium               \n");
    printf("=================================================\n\n");
    printf("Masukan Panjang Sisi Atas (cm)  : ");
    a = validasiBil();
    printf("Masukan Panjang Sisi Bawah (cm) : ");
    b = validasiBil();
    printf("Masukan tinggi (cm) : ");
    t = validasiBil();

    if (a!=b && b!=a)
    {
        // Kalau Input benar
        luas = hitung_luas_trapesium(a,b,t);
        printf("Luas Trapesium adalah : %.2f cm2\n",luas);

    } else
    {
        // Kalau input ada yg sama
        system("cls");
        printf("ANGKA UNTUK TINGGI DAN ALAS TIDAK BOLEH SAMA\n");
        printf("Ulangi Masukkan angka \n");
        lTrapesium();
    }

    printf("\n\n=================================================\n");
    printf("          1.Ulangi      2.Kembali       3.MENU\n");
    printf("-------------------------------------------------\n");
    printf("Masukan Pilihan Anda : ");
    pilihan = validasiPilihan();
    system("cls");

	switch(pilihan){
	    case 1:
        lTrapesium();
	    break;
	    case 2:
	    luasBangunDatar();
	    break;
	    default:
	    main();
	    break;
    }
}
// Luas Jajargenjang
void lJajargenjang(){
    int pilihan;
    float a,t,luas;

    printf("=================================================\n\n");
    printf("       PROGRAM MENGHITUNG LUAS BANGUN DATAR      \n\n");
    printf("-------------------------------------------------\n");
    printf("            Hitung Luas Jajargenjang             \n");
    printf("=================================================\n\n");
    printf("Masukan Panjang Alas (cm) : ");
    a = validasiBil();
    printf("Masukan Tinggi (cm) : ");
    t = validasiBil();

    luas = hitung_luas_jajargenjang(a,t);
    printf("Luas Jajargenjang adalah : %.2f cm2\n",luas);

    printf("\n\n=================================================\n");
    printf("          1.Ulangi      2.Kembali       3.MENU\n");
    printf("-------------------------------------------------\n");
    printf("Masukan Pilihan Anda : ");
    pilihan = validasiPilihan();
    system("cls");

	switch(pilihan){
	    case 1:
	    lJajargenjang();
	    break;
	    case 2:
	    luasBangunDatar();
	    break;
	    default:
	    main();
	    break;
    }
}

// Sub Menu Keliling
void kelilingBangunDatar(){
	int pilihan;

    printf("=================================================\n\n");
    printf("             PROGRAM MENGHITUNG LUAS &           \n");
    printf("               KELILING BANGUN DATAR             \n\n");
    printf("-------------------------------------------------\n");
    printf("               PENGHITUNGAN KELILING             \n");
    printf("=================================================\n\n");
    printf("Pilih Bangun Datar Dibawah\n");
    printf("\t1.Lingkaran\n");
    printf("\t2.Trapesium \n");
    printf("\t3.Jajargenjang\n");
    printf("\t4.Kembali\n");
    printf("-------------------------------------------------\n");
    printf("Masukan Nomor Menu : ");
    pilihan = validasimain();
    system("cls");

    switch (pilihan){
	    case 1:
        kLingkaran();
	    break;
        case 2:
	    kJajargenjang();
	    break;
	    case 3:
	    kTrapesium();
	    break;
	    default:
	    main();
	    break;
    }
}

// Keliling Lingkaran
void kLingkaran(){
    int pilihan;
    float r,kel;

    printf("=================================================\n\n");
    printf("    PROGRAM MENGHITUNG KELILING BANGUN DATAR     \n\n");
    printf("-------------------------------------------------\n");
    printf("           Hitung Keliling Lingkaran             \n");
    printf("=================================================\n\n");
    printf("Masukan Panjang Jari-jari (cm) : ");
    r = validasiBil();
    kel = hitung_kel_lingkaran(r);
    printf("Keliling Lingkaran adalah : %.2f cm\n",kel);

    printf("\n\n=================================================\n");
    printf("          1.Ulangi      2.Kembali       3.MENU\n");
    printf("-------------------------------------------------\n");
    printf("Masukan Pilihan Anda : ");
    pilihan = validasiPilihan();
    system("cls");

	switch(pilihan){
	    case 1:
	    kLingkaran();
	    break;
	    case 2:
	    kelilingBangunDatar();
	    break;
	    default:
	    main();
	    break;
    }
}

// Keliling Trapesium
void kTrapesium(){
	int pilihan;
    float a,b,c,d,kel;

    printf("=================================================\n\n");
    printf("    PROGRAM MENGHITUNG KELILING BANGUN DATAR     \n\n");
    printf("-------------------------------------------------\n");
    printf("            Hitung Keliling Trapesium            \n");
    printf("=================================================\n\n");
    printf("Masukan Panjang Sisi Atas (cm) : ");
    a = validasiBil();
    printf("Masukan Panjang Sisi Bawah (cm) : ");
    b = validasiBil();
    printf("Masukan Panjang Sisi Samping A (cm) : ");
    c = validasiBil();
    printf("Masukan Panjang Sisi Samping B (cm) : ");
    d = validasiBil();

    if (a!=b){
        //Kalau Input bener
        kel = hitung_kel_trapesium(a,b,c,d);
        printf("Keliling Trapesium adalah : %.2f cm2\n",kel);

    } else{
        //Kalau Input ada yang sama
        system("cls");
        printf("SISI TIDAK BOLEH SAMA\n");
        printf("Ulangi Masukkan angka \n");
        kTrapesium();
    }

    printf("\n\n=================================================\n");
    printf("          1.Ulangi      2.Kembali       3.MENU\n");
    printf("-------------------------------------------------\n");
    printf("Masukan Pilihan Anda : ");
    pilihan = validasiPilihan();
    system("cls");

	switch(pilihan){
	    case 1:
	    kTrapesium();
	    break;
	    case 2:
	    kelilingBangunDatar();
	    break;
	    default:
	    main();
	    break;
    }
}

// Keliling Jajargenjang
void kJajargenjang(){
    int pilihan;
    float a,b,kel;

    printf("=================================================\n\n");
    printf("    PROGRAM MENGHITUNG KELILING BANGUN DATAR     \n\n");
    printf("-------------------------------------------------\n");
    printf("          Hitung Keliling Jajargenjang           \n");
    printf("=================================================\n\n");
    printf("Masukan Panjang Alas (cm) : ");
    a = validasiBil();
    printf("Masukan Panjang Sisi Miring (cm) : ");
    b = validasiBil();
    kel = hitung_kel_jajargenjang(a,b);
    printf("Keliling Jajargenjang adalah : %.2f cm\n",kel);

    printf("\n\n=================================================\n");
    printf("          1.Ulangi      2.Kembali       3.MENU\n");
    printf("-------------------------------------------------\n");
    printf("Masukan Pilihan Anda : ");
    pilihan = validasiPilihan();
    system("cls");

	switch(pilihan){
	    case 1:
	    kJajargenjang();
	    break;
	    case 2:
	    kelilingBangunDatar();
	    break;
	    default:
	    main();
	    break;
    }
}
