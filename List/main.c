#include <stdio.h>
#include <stdlib.h>
#include "psda3list.h"

int main()
{

    List L, Linv, Lcopy, Lkonkat, L1, L2, L3;
    infotype X;
    int i, N, data;

    CreateList(&L);

    printf("\n\n\t\t---------- Penambahan Elemen List First ------------\n\n");
    printf("Berapa banyak input elemen yang diinginkan? ");scanf("%d",&N);
    for(i=1;i<=N;i++) {
        printf("Elemen ke %d list\t: ", i);scanf("%d",&X);
        InsVFirst(&L,X);
    }
    printf("\n-------- TEST LIST KOSONG -----------\n");
    printf("Apakah List L kosong[0 false 1 true]? %d\n", ListEmpty(L));

    printf("List L==>\t");PrintInfo(L);

    printf("\nMasukan Data akhir = ");scanf("%d",&X);
            InsVLast(&L,X);
        printf("\nList L==>\t");PrintInfo(L);

    /*DelVFirst(&L,&X);
            printf("Data awal yang dihapus adalah = %d\n",X);*/

    printf("\n\n*** Prekondisi Untuk Max/Min/Rata-Rata ***\n\n");
    printf("Jumlah elemen\t\t\t: %d\n", NbElmt(L));
    printf("Rata-rata elemen\t\t: %0.2f\n", Average(L));
    printf("Elemen maksimum list\t\t: %d\n", Max(L));
    printf("Address elemen maksimum list\t: %p\n", AdrMax(L));
    printf("Elemen minimum list\t\t: %d\n", Min(L));
    printf("Address elemen minimum list\t: %p\n", AdrMin(L));

    printf("\n\n*** Proses Terhadap List ***\n\n");
    InversList(&L);
    printf("\nInvers List L\t==>\t ");PrintInfo(L);

    CreateList(&Linv);
    Linv = FInversList(L);
    printf("\nList L \t==>\t ");PrintInfo(Linv);

    CreateList(&Lcopy);
    Lcopy = FCopyList(L);
    printf("\nList Copy L\t==>\t ");PrintInfo(Lcopy);

    CreateList(&Lkonkat);

    Konkat(L,Linv,&Lkonkat);
    printf("\nList Konkat List inversL dan L\t==>\t ");PrintInfo(Lkonkat);

    printf("\nPecah List Konkat\t\t==>\t \n");
    CreateList(&L1);
    CreateList(&L2);
    PecahList(&L1,&L2,Lkonkat);
    printf("List inversL\t\t==>\t ");PrintInfo(L1);
    printf("List L\t\t==>\t ");PrintInfo(L2);

    return 0;
}
