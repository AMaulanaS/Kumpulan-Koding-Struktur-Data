#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "boolean.h"
#define NIL 0

typedef int addres;
typedef int infotype;

typedef struct
{
    char Nama[100];
    char Nim[100];
    int Nilai;
}Lagu;

typedef struct
{
    Lagu *T;
    addres HEAD;
    addres TAIL;
    int MAX;
}Queue;


#define HEAD(Q) (Q).HEAD
#define TAIL(Q) (Q).TAIL
#define InfoHead_Nama(Q) (Q).T[(Q).HEAD].Nama
#define InfoHead_Nim(Q) (Q).T[(Q).HEAD].Nim
#define InfoHead_Nilai(Q) (Q).T[(Q).HEAD].Nilai
/*-----------------------------------------------*/
#define InfoTail_Nama(Q) (Q).T[(Q).TAIL].Nama
#define InfoTail_Nim(Q) (Q).T[(Q).TAIL].Nim
#define InfoTail_Nilai(Q) (Q).T[(Q).TAIL].Nilai
#define MaxEl(Q) (Q).MAX

boolean IsMax (Queue Q);
boolean IsEmpty (Queue Q);
void CreateEmpty (Queue *Q, int max);
int NbElmt (Queue Q);
void Dealokasi (Queue *Q);
void Add (Queue *Q,char Nama[],char Nim[],int Nilai);
boolean IsEmpty (Queue Q);
void Del (Queue *Q,char Nama[],char Nim[],int *Nilai);
void Dealokasi (Queue *Q);


#endif // QUEUE_H_INCLUDED
