#ifndef PSDA3LIST_H_INCLUDED
#define PSDA3LIST_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"

#define Nil NULL
#define info(P)(P)->info
#define next(P)(P)->next
#define first(L)((L).first)

typedef int infotype;
typedef struct tElmtList *address;

typedef struct tElmtList
{
    infotype info;
    address next;
}ElmtList;

typedef struct
{
    address first;
}List;

List L;

boolean ListEmpty(List L);
void CreateList(List *L);
address Alokasi(infotype X);
void Dealokasi(address *P);

address Search(List L, infotype X);
boolean FSearch(List L, address P);
address SearchPrec(List L, infotype X);
void First (List *L,address P);
void instengah (List *L,address P);
//penambahan elemen
void InsVFirst(List *L, infotype X);
void InsVLast(List *L, infotype X);
void InsVMiddle (List *L,infotype X);
//penghapusan elemen
void DelVFirst(List *L, infotype *X);
void DelVLast(List *L, infotype *X);

//penambahan elemen berdasarkan alamat
void InsertFirst(List *L, address P);
void InsertAfter(List *L, address P, address Prec);
void InsertLast(List *L, address P);

//penghapusan sebuah elemen
void DelFirst(List *L, address *P);
void DelP(List *L, infotype X);
void DelLast(List *L, address *P);
void DelAfter(List *L, address *Pdel, address Prec);

//proses semua elemen list
void PrintInfo(List L);
int NbElmt(List L);
infotype Max(List L);
address AdrMax(List L);
infotype Min(List L);
address AdrMin(List L);
float Average(List L);

//proses terhadao list
void DelAll(List *L);
void InversList(List *L);
List FInversList(List L);
void CopyList(List *L1, List *L2);
List FCopyList(List L);
void CpAlokList(List Lin, List *Lout);
void Konkat(List L1, List L2, List *L3);
void Konkat1(List *L1, List *L2, List *L3);
void PecahList(List *L1, List *L2, List L3);

address FindGenap (List L);

#endif // PSDA3LIST_H_INCLUDED
