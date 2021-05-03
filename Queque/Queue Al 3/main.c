#include "queue.h"
Queue Q;
    int max;
    int nilai;
    char Nama[50];
    char Nim[15];

    int x=1;
    int pilih;

int main()
{
    printf ("\t\t++++++++++++++++++++++++++\n");
    printf ("\t\t+   QUEUE ALTERNATIF 3   +\n");
    printf ("\t\t++++++++++++++++++++++++++\n");


    printf("Masukan jumlah elemennya = ");scanf("%d",&max);

    CreateEmpty(&Q,max);
    printf(" Apakah Stack kosong? = %s\n\n",IsEmpty(Q)?"ya":"tidak");

    for (;;)
    {
        printf ("=============================\n");
    puts("Input data = 1 ");
    puts("Ambil data = 2");
    puts("Stop = 3");
    printf ("-----------------------------\n");
    printf("Masukan pilihan anda = ");scanf("%d",&pilih);

    if (pilih==1)
    {
         printf ("=============================\n");
        printf("   Nama  = ");fflush(stdin);gets(Nama);
        printf("   NIM   = ");fflush(stdin);gets(Nim);
        printf("   Nilai = ");scanf("%d",&nilai);
        Add(&Q,Nama,Nim,nilai);
         printf ("=============================\n");
    }

    else if (pilih==2)
    {
        Del(&Q,Nama,Nim,&nilai);
        if (IsEmpty(Q)==false)
        {
            printf("> Penghapusan ke %d\n",x);
            printf("   Nama  = %s\n",Nama);
            printf("   NIM   = %s\n",Nim);
            printf("   Nilai = %d\n",nilai);
        }
        x++;
    }
    else
    {
        break;
    }
    }

    Dealokasi(&Q);

    return 0;
}
