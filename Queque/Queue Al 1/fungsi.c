#include "queue.h"

boolean IsEmpty (Queue Q)
{
    return ((TAIL(Q)==NIL)&&(HEAD(Q)==NIL));
}

boolean IsMax (Queue Q)
{
    return ((TAIL(Q)==MaxEl(Q))&&(HEAD(Q)==1));
}

int NbElmt (Queue Q)
{
    return TAIL(Q);
}

void CreateEmpty (Queue *Q, int max)
{
    (*Q).T = (int *) malloc((max+1) * sizeof(int));
        HEAD(*Q) = NIL;
        TAIL(*Q) = NIL;
        MaxEl(*Q) = max;
}

void Dealokasi (Queue *Q)
{
    MaxEl(*Q) = NIL;
    free((*Q).T);
}

void Add (Queue *Q,int X)
{
    HEAD(*Q)=1;
    TAIL(*Q)++;
    InfoTail(*Q) = X;
}

void Del (Queue *Q, int *X)
{
    int i=1;

    *X = InfoHead(*Q);
    do
    {
        (*Q).T[i] = (*Q).T[i+1];
        i++;
    }while (i!=NbElmt(*Q)+1);


    TAIL(*Q)--;
    if (TAIL(*Q)==NIL)
    {
        HEAD(*Q)=NIL;
    }
}
//fungsi tambahan ben rak bingungi
Tampil_Antrian()
{
    i=1;
    while (i!=TAIL(Q)+1)
    {
        printf (" [%d] ", (Q).T[i]);
        i++;
    }
}
Input_Antrian()
{
    for(i=0;i<max;i++)
    {
        if(i==max) {
            printf("\nAntrian penuh :)\n\n");
            i=max; //berhenti
        }else {
            printf("\tAntrian ke-[%d] ,--> : ", i+1); scanf("%d",&y);
            Add(&Q,y);
        }
    }
}

void show (Queue Q)
{
    int i=0;
    while (i!=TAIL(Q))
    {
        i++;
        printf(" [%d] ", Q.T[i]);
    }
}
