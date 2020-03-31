#include<stdio.h>
#include<stdlib.h>

   struct  nod {
                int info;
                struct nod *back;
                };
 struct nod *varf,*varf2;

struct nod* adaugare(struct nod *v,int x)
{    struct nod *c;

    if(v==NULL)
    {
        v=(struct nod*)malloc(sizeof(struct nod));
        v->info=x;
        v->back=NULL;
    }
    else
    {
        c=(struct nod*)malloc(sizeof(struct nod));
        c->info=x;
        c->back=v;
        v=c;
    }
    return v;

}

void afisare(struct nod *v)
{   struct nod *c;

    c=v;

    while(c!=NULL)
    {
        printf("%d ",c->info);
        c=c->back;
    }

}
void stergere(struct nod *v,struct nod *v2)
{
    v2->back=v->back;


    return v;
}
int binar(int x)
{   /*if(x==0)
    return 0;*/

    if(x==1)
    return 1;

    return binar(x/2)*10+x%2;
}
void adaug_st2()
{
    struct nod *c,*c2=NULL;
    int ok;

    c=varf;

    while(c->back!=NULL)
    {   ok=0;
        if(prim(c->info)==1)
            {
            varf2=adaugare(varf2,binar(c->info));
            if(c2!=NULL)
            stergere(c,c2);

            }

        c2=c;
        c=c->back;


    }

}

int prim(int x)
{
    int d;

    if(x==1)
    return 0;

    if(x==2)
        return 1;

    for(d=2;d<=x/2;d++)
        if(x%d==0)
        return 0;

return 1;
}

int main()
{   int i;

    for(i=1;i<=50;i++)
    {
       varf=adaugare(varf,i);

    }

    afisare(varf);
    printf("\n\n");
    adaug_st2();
    afisare(varf2);
    printf("\n\n");
    afisare(varf);


}
