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
    int tes;
}Queue;

#define HEAD(Q) (Q).HEAD
#define TAIL(Q) (Q).TAIL
#define InfoHead(Q) (Q).T[(Q).HEAD]
#define InfoTail(Q) (Q).T[(Q).TAIL]
#define MaxEl(Q) (Q).MAX

boolean IsMax (Queue Q);
boolean IsEmpty (Queue Q);
void CreateEmpty (Queue *Q, int max);
int NbElmt (Queue Q);
void Add (Queue *Q,int val);
void Del (Queue *Q, int *val);
void Dealokasi (Queue *Q);
void show (Queue Q);
void show_del (Queue Q);

void FisrtTheBest (Queue *Q1, Queue *Q2, Queue *Q3, int val);
#endif // QUEUE_H_INCLUDED
