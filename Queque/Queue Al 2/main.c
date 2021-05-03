#include "queue.h"

int main()
{
    //Queue Q;
    int max;
    int nilai;
    int x=1;
    int pilih;
    char pil;

    Queue Q1;
    Queue Q2;
    Queue Q3;
    CreateEmpty(&Q1,max);
    CreateEmpty(&Q2,max);
    CreateEmpty(&Q3,max);
    printf("Apakah Antrian Q1 kosong? = %s\n\n",IsEmpty(Q1)?"Ya":"Tidak");
    printf("Apakah Antrian Q2 kosong? = %s\n\n",IsEmpty(Q2)?"Ya":"Tidak");
    printf("Apakah Antrian Q3 kosong? = %s\n\n",IsEmpty(Q3)?"Ya":"Tidak");

    Add(&Q1,2);  Add(&Q1,5);  Add(&Q1,1);  Add(&Q1,8);
    Add(&Q2,1);  Add(&Q2,4);
    Add(&Q3,7);  Add(&Q3,9);  Add(&Q3,2);  Add(&Q3,6); Add(&Q3,3);

    printf ("\nQ1 = ");
    show(Q1);
    printf ("\nQ2 = ");
    show(Q2);
    printf ("\nQ3 = ");
    show(Q3);
atas:
    printf("\nMasukan Antrian : ");  scanf("%d",&nilai);
    FisrtTheBest (&Q1, &Q2, &Q3, nilai);

    printf ("\nQ1 = ");
    show(Q1);
    printf ("\nQ2 = ");
    show(Q2);
    printf ("\nQ3 = ");
    show(Q3);

     printf ("\n\nMau Ambil Antrian? [y/t]");
                pil=getche();
                if (pil=='y' || pil=='Y'){
                    printf("\n");
                    goto atas;
                }
/*
    printf ("\t\t++++++++++++++++++++++++++\n");
    printf ("\t\t+   QUEUE ALTERNATIF 2   +\n");
    printf ("\t\t++++++++++++++++++++++++++\n");


    printf("Masukan jumlah elemennya = ");scanf("%d",&max);

    CreateEmpty(&Q,max);
    printf("Apakah Stack kosong? = %s\n\n",IsEmpty(Q)?"ya":"Tidak");

            int i=1;
            while (i<=max)
            {
                printf("masukan Antrian ke-[%d]= ", i);scanf("%d",&nilai);
                Add(&Q,nilai);
                i++;
            }
            printf("\n\nAntrian\n");
            show(Q); printf("\n");

ambil:
    printf ("\n\nMau Ambil Antrian? [y/t]");
                pil=getche();
                if (pil=='y' || pil=='Y'){
                    Del(&Q,&nilai); printf("\n");
                    show_del(Q);
                    goto ambil;
                }else
                    goto bawah;

bawah:
    Dealokasi(&Q);
    printf("\nQueue telah di Dealokasi");*/
    return 0;
}
