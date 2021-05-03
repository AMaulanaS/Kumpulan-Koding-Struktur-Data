#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main()
{

    Queue Q1, Q2, Q3;
    CreateEmpty(&Q1,max);
    CreateEmpty(&Q2,max);
    CreateEmpty(&Q3,max);
    printf("Apakah Antrian kosong? = %s\n\n",IsEmpty(Q)?"Ya":"Tidak");

    Add(&Q1,2);  Add(&Q1,5);  Add(&Q1,1);  Add(&Q1,8);
    Add(&Q2,1);  Add(&Q2,4);
    Add(&Q3,7);  Add(&Q3,9);  Add(&Q3,2);  Add(&Q3,6); Add(&Q3,3);

    show(Q1);
    show(Q2);
    show(Q3);
    /*
    printf ("\t\t++++++++++++++++++++++++++\n");
    printf ("\t\t+   QUEUE ALTERNATIF 1   +\n");
    printf ("\t\t++++++++++++++++++++++++++\n");

    printf("Masukan jumlah Antrian = ");scanf("%d",&max);

    CreateEmpty(&Q,max);
    printf("Apakah Antrian kosong? = %s\n\n",IsEmpty(Q)?"Ya":"Tidak");

    printf ("Masukan Antrian\n\n");
    Input_Antrian();

    printf("\nPosisi dari Head = %d\n",HEAD(Q));
    printf("Posisi dari TAIL = %d\n\n",TAIL(Q));

    printf("Antrian sudah penuh ? = %s\n\n",IsMax(Q)?"Ya":"Tidak");

    printf ("\nTampilan Antrian\n");
    Tampil_Antrian(); printf("\n");

atas:
    printf ("\n\nMau Ambil Antrian? [y/t]");
                pil=getche();
                if (pil=='y' || pil=='Y'){
                    Del(&Q, &y);
                    printf("\n");
                        i = HEAD(Q);
                        while (i!=TAIL(Q)+1)
                        {
                            if (TAIL(Q)==0 && HEAD(Q)==0)
                            {
                                printf("\nAntrian Kosong :)\n\n");
                                i=TAIL(Q)+1;
                                goto ngisor;
                            }else
                            {
                                printf(" [%d] ",Q.T[i]);
                                i++;
                            }

                        }

                    goto atas;

                    }else {
                        goto ngisor;
                    }

    ngisor:
    printf("\n\nApakah Queue kosong? %s\n",IsEmpty(Q)?"Ya":"Tidak");

    Dealokasi(&Q);
    printf("\nQueue telah di Dealokasi\n\n");*/
    return 0;
}
