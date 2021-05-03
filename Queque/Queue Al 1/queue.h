#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#include "boolean.h"

#define NIL 0

typedef int addres;
typedef int infotype;
typedef struct
{
    infotype *T;
    addres HEAD;
    addres TAIL;
    int MAX;
}Queue;

    Queue Q;
    int max;
    char pil;
    int nilai;
    int i, x, y;

#define HEAD(Q) (Q).HEAD
#define TAIL(Q) (Q).TAIL
#define InfoHead(Q) (Q).T[(Q).HEAD]
#define InfoTail(Q) (Q).T[(Q).TAIL]
#define MaxEl(Q) (Q).MAX

boolean IsEmpty (Queue Q);
boolean IsMax (Queue Q);
int NbElmt (Queue Q);
void CreateEmpty (Queue *Q, int max);
void Add (Queue *Q,int X);
void Del (Queue *Q, int *X);
void Dealokasi (Queue *Q);
void show (Queue Q);

//fungsi tambahan ben rak bingungi
Tampil_Antrian();
Input_Antrian();

#endif // QUEUE_H_INCLUDED
