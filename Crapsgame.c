#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int zar1, zar2, yeniden;
    int puan;
    int puan2;
    srand(time(NULL));

    printf("Zar atılıyor...");
    zar1 = 1 + rand() % 6;
    zar2 = 1 + rand() % 6;

    if (zar1 + zar2 == 7 || zar1 + zar2 == 1)
    {
        printf("İlk atışta Kazandınız.\n");
    }
    else if (zar1 + zar2 == 2 || zar1 + zar2 == 3 || zar1 + zar2 == 12)
    {
        printf("İlk Atışta Kaybettiniz.\n");
    }
    else
    {
        for (int i = 0; i < 100; i++)
        {
            printf("Yeniden zar atılıyor ...\n");
             zar1 = 1 + rand() % 6;
             zar2 = 1 + rand() % 6;
            puan2 = zar1+zar2;
            printf("Atılan zarlar toplami: %d\n",puan2);
            if (puan2 == puan)
            {
                printf("Kazandiniz..");
                break;
            }
            else {

                puan = puan2;
            }
        
            



            
        }
    }
}