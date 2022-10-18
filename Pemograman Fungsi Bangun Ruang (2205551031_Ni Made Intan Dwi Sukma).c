#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#define PHI 3.14

//=====================================================================
//FUNGSI VOLUME

float hitung_vol_balok(float panjang, float lebar, float tinggi){
    float vol_balok;
    vol_balok =  panjang * lebar * tinggi;
    return vol_balok;
}

float hitung_vol_tabung(float jari2, float tinggi){
	float vol_tabung;
	vol_tabung = PHI*(jari2*jari2)*tinggi;
    return vol_tabung;
}

float hitung_vol_kerucut(float jari2, float tinggi){
	 float vol_kerucut;
	 vol_kerucut = 1.0/3.0*PHI*jari2*jari2*tinggi;
    return vol_kerucut;
}

//FUNGSI LUAS PERMUKAAN

float hitung_LP_balok(float panjang, float lebar, float tinggi){
	float LP_balok ;
	LP_balok= (2 * ((panjang*lebar) + (panjang*tinggi) + (lebar*tinggi)));
    return LP_balok;

}

float hitung_LP_tabung(float jari2, float tinggi){
	float LP_tabung;
	LP_tabung = (2*PHI*(jari2*jari2))+(2*PHI*jari2*tinggi);
    return LP_tabung;

}

float hitung_LP_kerucut(float jari2, float tinggi){
	float pelukis = sqrt(pow(jari2,2) + pow(tinggi,2));
	float LP_kerucut;
    LP_kerucut= (PHI*(jari2*jari2))+(PHI*jari2*pelukis);
    return LP_kerucut;
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
int main(){
    int pilihan;

    printf("=================================================\n\n");
    printf("             PROGRAM MENGHITUNG VOLUME &           \n");
    printf("            LUAS PERMUKAAN BANGUN RUANG          \n\n");
    printf("=================================================\n\n");
    printf("Daftar Pilihan Menu :\n\n");
    printf("\t1.Hitung Volume Bangun Ruang\n");
    printf("\t2.Hitung Luas Permukaan Bangun Ruang\n");
    printf("\t3.Exit\n");
    printf("-------------------------------------------------\n");
    printf("\nMasukan Nomor Menu : ");
    pilihan = validasiPilihan();
    printf("\n");
    system("cls");


    switch (pilihan){
	    case 1:
	    volumeBangunRuang();
	    break;
	    case 2:
	    luasPermukaanBangunRuang();
	    break;
	    default:
        printf("PROGRAM TELAH BERHENTI\n\n");
	    break;
	 }
}



// Sub Menu Volume
int volumeBangunRuang(){
  	int pilihan;

    printf("===========================================================\n\n");
    printf("               PROGRAM MENGHITUNG VOLUME &                 \n");
    printf("               LUAS PERMUKAAN BANGUN RUANG                 \n");;
    printf("-----------------------------------------------------------\n");
    printf("                  PENGHITUNGAN VOLUME                      \n");
    printf("===========================================================\n");
    printf("Pilih Bangun Ruang Dibawah \n");
    printf("\t1.Balok\n");
    printf("\t2.Tabung\n");
    printf("\t3.Kerucut \n");
    printf("\t4.Back \n");
    printf("-----------------------------------------------------------\n");
    printf("Masukan Nomor Menu : ");
    pilihan = validasimain();
    system("cls");

    switch (pilihan){
	    case 1:
	    volBalok();
	    break;
	    case 2:
	    volTabung();
	    break;
	    case 3:
	    volKerucut();
	    break;
	    default:
	    main();
	    break;
	 }

}

// Volume balok
int volBalok(){
	float panjang;
	float lebar;
	float tinggi;
	float vol;
	int pilihan;

    printf("===========================================================\n\n");
    printf("               PROGRAM MENGHITUNG VOLUME                   \n");
    printf("-----------------------------------------------------------\n");
    printf("                   Hitung Volume Balok                    \n");
    printf("===========================================================\n\n");
    printf("Masukan Panjang (cm) : ");
    panjang = validasiBil();
    printf("Masukan Lebar (cm) : ");
    lebar = validasiBil();
    printf("Masukan Tinggi (cm) : ");
    tinggi = validasiBil();
    printf("-----------------------------------------------------------\n\n");
    vol = hitung_vol_balok(panjang,lebar, tinggi);
    printf("Volume Balok adalah : %.2f cm3\n",vol);

    printf("\n\n===========================================================\n");
    printf("          1.Ulangi      2.Kembali       3.MENU\n");
    printf("-----------------------------------------------------------\n");
    printf("Masukan Pilihan Anda : ");
    pilihan = validasiPilihan();
    system("cls");

	switch(pilihan){
	    case 1:
	    volBalok();
	    break;
	    case 2:
	    volumeBangunRuang();
	    break;
	    default:
	    main();
	    break;
	 }
}
// Volume tabung
int volTabung(){
	float jari;
	float tinggi;
	float vol;
	int pilihan;

    printf("===========================================================\n\n");
    printf("               PROGRAM MENGHITUNG VOLUME                   \n");
    printf("-----------------------------------------------------------\n");
    printf("                   Hitung Volume Tabung                    \n");
    printf("===========================================================\n\n");
    printf("Masukan Panjang Jari-Jari Alas (cm) : ");
    jari = validasiBil();
    printf("Masukan Tinggi (cm) : ");
    tinggi = validasiBil();
    printf("-----------------------------------------------------------\n\n");
    vol = hitung_vol_tabung(jari, tinggi);
    printf("Volume Tabung adalah : %.2f cm3\n",vol);

    printf("\n\n===========================================================\n");
    printf("          1.Ulangi      2.Kembali       3.MENU\n");
    printf("-----------------------------------------------------------\n");
    printf("Masukan Pilihan Anda : ");
    pilihan = validasiPilihan();
    system("cls");

	switch(pilihan){
	    case 1:
	    volTabung();
	    break;
	    case 2:
	    volumeBangunRuang();
	    break;
	    default:
	    main();
	    break;
	 }
}


// Volume Kerucut
int volKerucut(){
	float jari;
	float tinggi;
	float vol;
	int pilihan;

    printf("===========================================================\n\n");
    printf("               PROGRAM MENGHITUNG VOLUME                   \n");
    printf("-----------------------------------------------------------\n");
    printf("                   Hitung Volume Kerucut                   \n");
    printf("===========================================================\n\n");
    printf("Masukan Panjang Jari-Jari (cm) : ");
    jari = validasiBil();
    printf("Masukan Tinggi (cm) : ");
    tinggi = validasiBil();
    printf("-----------------------------------------------------------\n\n");
    vol = hitung_vol_kerucut( jari, tinggi);
    printf("Volume Kerucut adalah : %.2f cm3\n",vol);

    printf("\n\n===========================================================\n");
    printf("          1.Ulangi      2.Kembali       3.MENU \n");
    printf("-----------------------------------------------------------\n");
    printf("Masukan Pilihan Anda : ");
    pilihan = validasiPilihan();
    system("cls");

	switch(pilihan){
	    case 1:
	    volKerucut();
	    break;
	    case 2:
	    volumeBangunRuang();
	    break;
	    default:
	    main();
	    break;
	 }
}

// Sub Menu Luas Permukaan
int luasPermukaanBangunRuang(){
  	int pilihan;

  	printf("===========================================================\n\n");
    printf("               PROGRAM MENGHITUNG VOLUME &                 \n");
    printf("               LUAS PERMUKAAN BANGUN RUANG                 \n\n");
    printf("-----------------------------------------------------------\n");
    printf("                 PERHITUNGAN LUAS PERMUKAAN                \n");
    printf("===========================================================\n\n");
    printf("Pilih Bangun Ruang Dibawah :\n");
    printf("\t1.Balok\n");
    printf("\t2.Tabung\n");
    printf("\t3.Kerucut \n");
    printf("\t4.Back\n");
    printf("-----------------------------------------------------------\n");
    printf("Masukan Nomor Menu : ");
    pilihan = validasimain();
    system("cls");

    switch (pilihan){
	    case 1:
	    lPBalok();
	    break;
	    case 2:
	    lPTabung();
	    break;
	    case 3:
	    lPKerucut();
	    break;
	    default:
	    main();
	    break;
	 }
}


// Luas Permukaan Balok
int lPBalok(){
    float panjang;
    float lebar;
	float tinggi;
	float luas;
	int pilihan;

    printf("===========================================================\n\n");
    printf("            PROGRAM MENGHITUNG LUAS PERMUKAAN              \n");
    printf("-----------------------------------------------------------\n");
    printf("               Hitung Luas Permukaan Balok                \n");
    printf("===========================================================\n\n");
    printf("Masukan Panjang (cm) : ");
    panjang = validasiBil();
    printf("Masukan Lebar (cm) : ");
    lebar = validasiBil();
    printf("Masukan Tinggi (cm) : ");
    tinggi = validasiBil();
    luas = hitung_LP_balok(panjang, lebar, tinggi);
    printf("Luas Permukaan Tabung adalah : %.2f cm2\n",luas);

    printf("\n\n===========================================================\n");
    printf("          1.Ulangi      2.Kembali       3.MENU \n");
    printf("-----------------------------------------------------------\n");
    printf("Masukan Pilihan Anda : ");
    pilihan = validasiPilihan();
    system("cls");

	switch(pilihan){
	    case 1:
	    lPBalok();
	    break;
	    case 2:
	    luasPermukaanBangunRuang();
	    break;
	    default:
	    main();
	    break;
	 }
}
// Luas Permukaan Tabung
int lPTabung(){
    float jari;
	float tinggi;
	float luas;
	int pilihan;

    printf("===========================================================\n\n");
    printf("            PROGRAM MENGHITUNG LUAS PERMUKAAN              \n");
    printf("-----------------------------------------------------------\n");
    printf("               Hitung Luas Permukaan Tabung                \n");
    printf("===========================================================\n\n");
    printf("Masukan Panjang Jari-jari (cm) : ");
    jari = validasiBil();
    printf("Masukan Tinggi (cm) : ");
    tinggi = validasiBil();
    luas = hitung_LP_tabung(jari, tinggi);
    printf("Luas Permukaan Tabung adalah : %.2f cm2\n",luas);

    printf("\n\n===========================================================\n");
    printf("          1.Ulangi      2.Kembali       3.MENU \n");
    printf("-----------------------------------------------------------\n");
    printf("Masukan Pilihan Anda : ");
    pilihan = validasiPilihan();
    system("cls");

	switch(pilihan){
	    case 1:
	    lPTabung();
	    break;
	    case 2:
	    luasPermukaanBangunRuang();
	    break;
	    default:
	    main();
	    break;
	 }
}

// Luas Permukaan Kerucut
int lPKerucut(){
    float jari;
	float tinggi;
	float luas;
	int pilihan;

    printf("===========================================================\n\n");
    printf("            PROGRAM MENGHITUNG LUAS PERMUKAAN              \n");
    printf("-----------------------------------------------------------\n");
    printf("              Hitung Luas Permukaan Kerucut                \n");
    printf("===========================================================\n\n");
    printf("Masukan Panjang Jari-jari (cm) : ");
    jari = validasiBil();
    printf("Masukan Tinggi (cm) : ");
    tinggi = validasiBil();

    luas = hitung_LP_kerucut( jari, tinggi);
    printf("Luas Permukaan Kerucut adalah : %.2f cm2\n",luas);
    printf("\n\n===========================================================\n");
    printf("          1.Ulangi      2.Kembali       3.MENU \n");
    printf("-----------------------------------------------------------\n");
    printf("Masukan Pilihan Anda : ");
    pilihan = validasiPilihan();
    system("cls");

	switch(pilihan){
	    case 1:
	    lPKerucut();
	    break;
	    case 2:
	    luasPermukaanBangunRuang();
	    break;
	    default:
	    main();
	    break;
	 }
}
