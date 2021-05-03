#include "queue.h"

void CreateEmpty (Queue *Q, int max)
{
    (*Q).T = (int *) malloc((max+1) * sizeof(int));
        HEAD(*Q) = NIL;
        TAIL(*Q) = NIL;
        MaxEl(*Q) = max;
}

boolean IsMax (Queue Q)
{
    return (((TAIL(Q)==MaxEl(Q))&&(HEAD(Q)==1)) || (TAIL(Q)+1==HEAD(Q)));
}

boolean IsEmpty (Queue Q)
{
    return ((TAIL(Q)==NIL)&&(HEAD(Q)==NIL));
}

int NbElmt (Queue Q)
{
    return TAIL(Q);
}

void Add (Queue *Q,char Nama[],char Nim[],int Nilai)
{
    if (IsMax(*Q))
    {
        printf("Maaf Queue sudah penuh.!");
    }
    else if ((HEAD(*Q)==TAIL(*Q)) && (TAIL(*Q)==MaxEl(*Q)))
    {
        TAIL(*Q)=1;
        HEAD(*Q)=1;

        strcpy(InfoTail_Nama(*Q),Nama);
        strcpy(InfoTail_Nim(*Q),Nim);
        InfoTail_Nilai(*Q) = Nilai;
    }
    else if ((TAIL(*Q)==MaxEl(*Q)) && (HEAD(*Q)!=1))
    {
        TAIL(*Q)=1;
        strcpy(InfoTail_Nama(*Q),Nama);
        strcpy(InfoTail_Nim(*Q),Nim);
        InfoTail_Nilai(*Q) = Nilai;
        TAIL(*Q)++;
    }
    else
    {
         if (IsEmpty(*Q))
        {
        HEAD(*Q)=1;
        }
        TAIL(*Q)++;
        strcpy(InfoTail_Nama(*Q),Nama);
        strcpy(InfoTail_Nim(*Q),Nim);
        InfoTail_Nilai(*Q) = Nilai;
    }
}

void Del (Queue *Q,char Nama[],char Nim[],int *Nilai)
{
    int i=1;

    if (IsEmpty(*Q))
    {
        printf("Maaf Queue kosong.!\n");
    }
    else if (HEAD(*Q)==TAIL(*Q))
    {
        *Nilai = InfoHead_Nilai(*Q);
        strcpy(Nama,InfoHead_Nama(*Q));
        strcpy(Nim,InfoHead_Nim(*Q));

        printf("\nTerjadi Queue semu, masukan data dahulu setelah ini.!\n\n");
    }
    else if (HEAD(*Q)==MaxEl(*Q))
    {
        *Nilai = InfoHead_Nilai(*Q);
        strcpy(Nama,InfoHead_Nama(*Q));
        strcpy(Nim,InfoHead_Nim(*Q));

        HEAD(*Q)=1;
    }
    else
    {
        *Nilai = InfoHead_Nilai(*Q);
        strcpy(Nama,InfoHead_Nama(*Q));
        strcpy(Nim,InfoHead_Nim(*Q));

        HEAD(*Q)++;
    }
}

void Dealokasi (Queue *Q)
{
    MaxEl(*Q) = NIL;
    free((*Q).T);
}
