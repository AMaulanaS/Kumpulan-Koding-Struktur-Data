#include "queue.h"

void CreateEmpty (Queue *Q, int max)
{
    (*Q).T = (int *) malloc((max+1) * sizeof(int));
        HEAD(*Q) = NIL;
        TAIL(*Q) = NIL;
        MaxEl(*Q) = max;
        (*Q).tes=NIL;
}

boolean IsMax (Queue Q)
{
    return ((TAIL(Q)==MaxEl(Q))&&(HEAD(Q)==1));
}

boolean IsEmpty (Queue Q)
{
    return ((TAIL(Q)==NIL)&&(HEAD(Q)==NIL));
}

int NbElmt (Queue Q)
{
    return TAIL(Q);
}

void Add (Queue *Q,int val)
{
    int temp1=1;
    int temp2;

    if ((TAIL(*Q)==MaxEl(*Q))&&(HEAD(*Q)==1))
    {
        printf("Antrian Penuh\n");
    }
    else if ((TAIL(*Q)==MaxEl(*Q)) || (TAIL(*Q) < HEAD(*Q)))
    {
        if (TAIL(*Q)<HEAD(*Q))
        {
            HEAD(*Q)==1;
            TAIL(*Q)==0;
            TAIL(*Q)++;
            InfoTail(*Q) = val;
        }
        else
        {
            temp2 = HEAD(*Q);
        HEAD(*Q)=1;
        do
        {
            (*Q).T[temp1] = (*Q).T[temp2];
            temp1++;
            temp2++;
        }while (temp2!=MaxEl(*Q)+1);
        TAIL(*Q)=temp1;
        InfoTail(*Q) = val;
        (*Q).tes=1;
        }

    }
    else
    {
        if ((*Q).tes==0)
        {
            HEAD(*Q)=1;
        }
        TAIL(*Q)++;
        InfoTail(*Q) = val;
        (*Q).tes=1;
    }

}

void Del (Queue *Q, int *val)
{

    if (IsEmpty(*Q))
    {
        printf("Queue Kosong loh.");
    }
    else if (TAIL(*Q)<HEAD(*Q))
    {
        printf("\nAntrian Kosong, mohon lakukan penambahan Elemen dulu.!\n");

    }
    else
    {
        *val = InfoHead(*Q);
        HEAD(*Q)++;
    }
}

void Dealokasi (Queue *Q)
{
    MaxEl(*Q) = NIL;
    free((*Q).T);
}

void show (Queue Q)
{
    int i=0;
    while (i!=TAIL(Q))
    {
        i++;
        printf(" [%d] ",Q.T[i]);
    }
}

void show_del (Queue Q)
{
    int i;

    i = HEAD(Q);

    while (i!=TAIL(Q)+1)
    {
         if (TAIL(Q)==0 && HEAD(Q)==0)
            {
                printf("\nAntrian Kosong :)\n\n");
                i=TAIL(Q)+1;
               // goto ngisor;
                }else
                {
                    printf(" [%d] ",Q.T[i]);
                    i++;
                }

    }
}

void FisrtTheBest (Queue *Q1, Queue *Q2, Queue *Q3, int val)
{
    if ((NbElmt(*Q1) <= NbElmt(*Q2)) && (NbElmt(*Q1) <= NbElmt(*Q3))){
        Add (&(*Q1), val);
        } else if ((NbElmt(*Q2) <= NbElmt(*Q1)) && (NbElmt(*Q2) <= NbElmt(*Q3))) {
                Add (&(*Q2), val);
            } else {
                    Add (&(*Q3), val);
                }
}
