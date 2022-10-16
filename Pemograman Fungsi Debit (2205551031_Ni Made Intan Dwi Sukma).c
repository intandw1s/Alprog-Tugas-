#include<stdio.h>

float hitung_volume_air(float d, float t){
float volume_air;

volume_air = d * t;

return volume_air;
}

void main(){
float debit, waktu, volume_air;

    printf("=================================================\n\n");
    printf("          PROGRAM MENGHITUNG VOLUME AIR          \n\n");
    printf("=================================================\n\n");

    printf("Input Debit(liter/jam): ");
    scanf("%f", &debit );
    printf("Input Waktu (jam): ");
    scanf("%f", &waktu );

    volume_air = debit*waktu;

    printf("Jadi, Volume Air anda \t: %.2f liter \n", volume_air );

    return 0;
}

