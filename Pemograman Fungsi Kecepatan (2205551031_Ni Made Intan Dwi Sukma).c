#include <stdio.h>

float hitung_jarak(float v, float t){
    float jarak;
    jarak =  v * t;
    return jarak;
}

int main(){
    float kecepatan, waktu, Jarak;

    printf("=================================================\n\n");
    printf("          PROGRAM MENGHITUNG JARAK TEMPUH        \n\n");
    printf("=================================================\n\n");
    printf("Input Kecepatan(km/jam): ");
    scanf("%f", &kecepatan );
    printf("Input Waktu (jam): ");
    scanf("%f", &waktu );

    Jarak = kecepatan*waktu;
    printf("Jadi, jarak tempuh anda \t: %.2f km \n", Jarak );
    return 0;
}
