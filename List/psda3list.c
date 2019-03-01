#include "psda3list.h"

boolean ListEmpty(List L)
{
    return first(L) == Nil;
}
void CreateList(List *L)
{
    first(*L) = Nil;
}
address Alokasi(infotype X)
{
    address P;
    P = (address) malloc(sizeof(ElmtList));
    if(P!=Nil) // alokasi berhasil
    {
        info(P)=X;
        next(P)=Nil;
    }
    return P;
}
void Dealokasi(address *P)
{
    free(*P);
}
address Search(List L, infotype X)
{
    address P, Prec, Found=Nil;
    P=first(L);
    Prec=Nil;
    while(P=Nil)
    {
        if(info(P)==X)
        {
            Found=Prec;
        }
        else
        {
            Prec=P;
            P=next(P);
        }
    }
    return(Found);
}
boolean FSearch(List L, address P)
{
    address Pe;
    boolean Found;
    Pe=first(L);
    Found=false;
    while((Pe!=Nil)&&(!Found))
    {
        if(P=Pe)
        {
            Found=true;
        }
        else
        {
            Pe=next(Pe);
        }
    }
    return(Found);
}
address SearchPrec(List L, infotype X)
{
    address P, Prec, Before, Found=Nil;
    P=first(L);
    Prec=Nil;
    Before=Nil;
    while(P=Nil)
    {
        if(info(P)==X)
        {
            Found=Before;
        }
        {
            Before=Prec;
            Prec=P;
            P=next(P);
        }
    }
    return(Found);
}
void InsVFirst(List *L, infotype X)
{
    address P;
    P=Alokasi(X);
    if(P!=Nil)
    {
        next(P)=first(*L);
        first(*L)=P;
    }
}
void InsVMiddle (List *L,infotype X)
{
    address P;

    P = Alokasi(X);
    if (P!=Nil)
    {
       // instengah(L,P);
    }
}
void InsVLast(List *L, infotype X)
{
    address P;
    P=Alokasi(X);
    if(P!=Nil)
    {
        InsertLast(L,P);
    }
}
void DelVFirst(List *L, infotype *X)
{
    address P;
    DelFirst(L,&P);
    *X=info(P);
    next(P)=Nil;
    Dealokasi(P);
}
void DelVLast(List *L, infotype *X)
{
    address P;
    DelLast(L,&P);
    *X=info(P);
    next(P)=Nil;
    Dealokasi(P);
}
void InsertFirst(List *L, address P)
{
    next(P)=first(*L);
    first(*L)=P;
}
void InsertAfter(List *L, address P, address Prec)
{
    next(P)=next(Prec);
    next(Prec)=P;
}
void InsertLast(List *L, address P)
{
    address Last;
    if(first(*L)==Nil)
    {
        InsertFirst(L,P);
    }
    else
    {
        Last=first(*L);
        while(next(Last)!=Nil)
        {
            Last=next(Last);
        }
        InsertAfter(L,P,Last);
    }
}
void DelFirst(List *L, address *P)
{
    *P=first(*L);
    first(*L)=next(first(*L));
    next(*P)=Nil;
}

void DelP(List *L, infotype X)
{
    address Pdel,P;

    Pdel = first(*L);
    P = Nil;
     while (info(Pdel) != X) {
        P = Pdel;
        Pdel = next(Pdel);
    }
    next(P)=next(next(P));
    next(Pdel)= Nil;
    Dealokasi(Pdel);

}
void DelLast(List *L, address *P)
{
    address Last, PrecLast;
    Last=first(*L);
    PrecLast=Nil;
    while(next(Last)!=Nil)
    {
        PrecLast=Last;
        Last=next(Last);
    }
    *P=Last;
    if(PrecLast=Nil)
    {
        first(*L)=Nil;
    }
    else
    {
        next(PrecLast)=Nil;
    }
}
void DelAfter(List *L, address *Pdel, address Prec)
{
    *Pdel=next(Prec);
    next(Prec)=next(next(Prec));
    next(*Pdel)=Nil;
}
void PrintInfo(List L)
{
    address P;
    if(first(L)==Nil)
    {
        printf("LIST KOSONG BRO :)\n");
    }
    else
    {
        P=first(L);
        printf("\n \t~*  ");
        do
        {
            printf("%d ", info(P));
            P=next(P);
        }while(P!=Nil);
    }
    printf("~*  \n");
}
int NbElmt(List L)
{
    int x=0;
    address P;

    if (first(L) == Nil)
    {
        return (0);
    }
    else
    {
        P = first(L);
        do
        {
            x++;
            P = next(P);
        } while (P != Nil);
    return (x);
    }
}
int Max(List L)
{
    int x=0;
    address P;

    if (first(L) == Nil)
    {
        return (0);
    }
    else
    {
        P = first(L);
        do
        {
            if(x<info(P))
            {
                x=info(P);
            }
            P = next(P);
        } while (P != Nil);
    return (x);
    }
}
address AdrMax (List L)
{
    int x=0;
    address P,Pmax;

    if (first(L) == Nil)
    {
        return (0);
    }
    else
    {
        P = first(L);
        do
        {
            if(x<info(P))
            {
                x=info(P);
                Pmax = P;
            }
            P = next(P);
        } while (P != Nil);
    return (Pmax);
    }
}

int Min (List L)
{
    int x=0;
    address P;

    if (first(L) == Nil)
    {
        return (0);
    }
    else
    {
        P = first(L);
        x = info(P);
        do
        {
            if(x>info(P))
            {
                x=info(P);
            }
            P = next(P);
        } while (P != Nil);
    return (x);
    }
}

address AdrMin (List L)
{
    int x=0;
    address P,Pmin;

    if (first(L) == Nil)
    {
        return (0);
    }
    else
    {
        P = first(L);
        x = info(P);
        do
        {
            if(x>info(P))
            {
                x = info(P);
                Pmin = P;
            }
            P = next(P);
        } while (P != Nil);
        return (Pmin);
    }
}

float Average (List L)
{
    float x=0;
    int y=0;
    address P;

    if (first(L) == Nil)
    {
        return (0);
    }
    else
    {
        P = first(L);
        do
        {
            y++;
            x = x + info(P);
            P = next(P);
        } while (P != Nil);
        x = x / y ;
    return (x);
    }
}


void DelAll (List *L)
{
    address P,Pdel;

    if (first(*L) == Nil)
    {
        printf("List Kosong\n");
    }
    else
    {
        P = first(*L);
        do
        {
            Pdel = P;
            P = next(P);
            Dealokasi(Pdel);
        } while (P != Nil);
        Dealokasi(P);
    printf("Dealokasi sukses\n");
    }
}

void InversList (List * L)
{
    address P[100];
    int x=1;

    if (first(*L) == Nil)
    {
        printf("List Kosong\n");
    }
    else
    {
        P[x] = first(*L);
        do
        {
            P[x+1] = next(P[x]);
            x++;
        } while (P[x] != Nil);
        x--;
        first(*L)=P[x];
        do
        {
            next(P[x]) = P[x-1];
            x--;
        } while (x != 1);
        next(P[x])=Nil;
    }
}

List FInversList (List L)
{
    address P,P1;
    List L1;
    int z=0;

    if (first(L) == Nil)
    {
        first(L1)=Nil;
    }
    else
    {
        P = first(L);
        first(L1) = Nil;
        while (P != Nil)
        {
            P1 = Alokasi(info(P));
            if (P1 == Nil)
            {
                z=1;
            }
        InsertFirst(&L1,P1);
        P = next(P);
        }
        if(z==1)
        {
            DelAll(&L1);
            first(L1) = Nil;
            return (L1);
        }
    return (L1);
    }
}

void CopyList (List *L1,List * L2)
{
    first(*L2)=first(*L1);
}

List FCopyList (List L)
{
   address P,P1;
    List L1;
    int z=0;

    if (first(L) == Nil)
    {
        first(L1)=Nil;
    }
    else
    {
        P = first(L);
        first(L1) = Nil;
        while (P != Nil)
        {
            P1 = Alokasi(info(P));
            if (P1 == Nil)
            {
                 z=1;
            }
            InsertLast(&L1,P1);
            P = next(P);
        }
        if(z==1)
        {
            DelAll(&L1);
            first(L1) = Nil;
            return (L1);
        }
    return (L1);
    }
}

void CpAlokList (List Lin , List * Lout )
{
    address P,P1;
    int z=0;

    if (first(Lin) == Nil)
    {
        first(*Lout)=Nil;
    }
    else
    {
        P = first(Lin);
        first(*Lout) = Nil;
        while (P != Nil)
        {
            P1 = Alokasi(info(P));
            if (P1 == Nil)
            {
                z=1;
            }
            InsertLast(&(*Lout),P1);
            P = next(P);

        }
        if(z==1)
        {
            DelAll(&Lout);
            first(*Lout) = Nil;
        }
    }
}

void Konkat (List L1,List L2 ,List * L3 )
{
    address P,P1;
    int z=0;

    if ((first(L1)&&first(L2)) == Nil)
    {
        first(*L3)=Nil;
    }
    else
    {
        if(first(L1)!=Nil)
    {
        P = first(L1);
        first(*L3) = Nil;
        while (P != Nil)
        {
            P1 = Alokasi(info(P));
            if (P1 == Nil)
            {
                 z=1;
            }
            InsertLast(&(*L3),P1);
            P = next(P);
        }
    }
        else
        {
            first(*L3)=Nil;
        }
        if(first(L2)!=Nil)
        {
            P = first(L2);
            while (P != Nil)
            {
                P1 = Alokasi(info(P));
                if (P1 == Nil)
                {
                     z=1;
                }
            InsertLast(&(*L3),P1);
            P = next(P);
            }
        }

        if(z==1)
        {
            DelAll(&L3);
            first(*L3) = Nil;
        }
    }
}

void Konkat1 (List * L1,List * L2,List * L3)
{
    address P,P1;
    int z=0;

    if ((first(*L1)&&first(*L2)) == Nil)
    {
        first(*L3)=Nil;
    }
    else
    {
        if(first(*L1)!=Nil)
        {
            P = first(*L1);
            first(*L3) = Nil;
            while (P != Nil)
            {
                P1 = Alokasi(info(P));
                if (P1 == Nil)
                {
                     z=1;
                }
                InsertLast(&(*L3),P1);
                P = next(P);
            }
        }
        else
        {
            first(*L3)=Nil;
        }
        if(first(*L2)!=Nil)
        {
            P = first(*L2);
            while (P != Nil)
            {
                P1 = Alokasi(info(P));
                if (P1 == Nil)
                {
                    z=1;
                }
                InsertLast(&(*L3),P1);
                P = next(P);
            }
        }

        if(z==1)
        {
            DelAll(&L3);
            first(*L3) = Nil;
        }
    }
    DelAll(&(*L1));
    DelAll(&(*L2));
}

void PecahList (List *L1,List *L2,List L)
{
    address P;
    int l1, l2;

    l1 = NbElmt(L)/2;
    l2 = NbElmt(L) - l1;
    P = first(L);
    if(P==Nil)
    {
        first(*L1) = first(*L2);
    }
    else
    {
        while(l1>0)
        {
            if(P==first(L))
            {
                InsVFirst(&(*L1),info(P));
                l1--;
                P = next(P);
            }
            else
            {
                InsVLast(&(*L1),info(P));
                l1--;
                P = next(P);
            }
        }
        InsVFirst(&(*L2),info(P));
        l2--;
        P = next(P);
        while(l2>0)
        {
            InsVLast(&(*L2),info(P));
            l2--;
            P = next(P);
        }
    }
}

address FindGenap (List L){
    address pe;
    pe = first(L);

    if (info(pe)%2 == 0){
        return (pe);
    }
}
