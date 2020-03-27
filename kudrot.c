#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int q;
    struct Node *re;
}node;

node *lead;
void atend(int g)
{
    node *sub,*an;
    an=lead;
    if(lead==NULL){
        lead=(node*)malloc(sizeof(node));
        lead->q=g;
        lead->re=NULL;
    }
    else{
        sub=(node*)malloc(sizeof(node));
        sub->q=g;
        sub->re=NULL;
        while(an->re!=NULL){
            an=an->re;
        }
        an->re=sub;
    }
    return;
}
void atfirst(int a)
{
    if(lead==NULL){
        lead=(node*)malloc(sizeof(node));
        lead->q=a;
        lead->re=NULL;
        return;
    }
    node *sub;
    sub=(node*)malloc(sizeof(node));
    sub->q=a;
    sub->re=lead;
    lead=sub;
    return;
}
void atn(int v,int p)
{
    node *sub,*end=lead;
    if(lead==NULL){
        printf("List is empty. Create list by pressing 1 or 2.\n");
        return;
    }
    sub=(node*)malloc(sizeof(node));
    sub->q=v;
    if(p==1){
        sub->re=lead;
        lead=sub;
        return;
    }
    p-=2;
    while(p--){
        end=end->re;
        if(end->re==NULL)break;
    }
    sub->re=end->re;
    end->re=sub;
    return;
}
void ataftern(int v,int p)
{
    node *sub,*end=lead;
    if(lead==NULL){
        printf("List is empty. Create list by pressing 1 or 2.\n");
        return;
    }
    sub=(node*)malloc(sizeof(node));
    sub->q=v;
    if(p==1){
        sub->re=end->re;
        end->re=sub;
        return;
    }
    p-=1;
    while(p--){
        end=end->re;
        if(end->re==NULL)break;
    }
    sub->re=end->re;
    end->re=sub;
    return;
}
void eran(int d)
{
    node *nn,*sub=lead;
    if(lead==NULL)return;
    if(d==1){
        nn=lead;
        lead=nn->re;
        free(nn);
        return;
    }
    d-=2;
    while(d--){
        sub=sub->re;
        if(sub->re==NULL)break;
    }
    nn=sub->re;
    sub->re=nn->re;
    free(nn);
    return;
}
void listprint()
{
    node *sub;
    sub=lead;
    while(sub!=NULL){
        printf("%d ",sub->q);
        sub=sub->re;
    }
}


int main()
{
    lead=NULL;
    int z,w,r;
    printf("1.Value at end\n");
    printf("2.Value at first\n");
    printf("3.Value at n-th place\n");
    printf("4.Value at after n-th place\n");
    printf("5.Delete n-th node\n");
    printf("6.Delete a value\n");
    printf("7.Find a value\n");
    printf("8.Print the list\n");
    while(1){
        scanf("%d",&z);
        switch(z){
        case 1:
            scanf("%d",&w);
            atend(w);
            break;
        case 2:
            scanf("%d",&w);
            atfirst(w);
            break;
        case 3:
            printf("Value > ");
            scanf("%d",&r);
            printf("Which position > ");
            scanf("%d",&w);
            atn(r,w);
            break;
        case 4:
            printf("Value > ");
            scanf("%d",&r);
            printf("After which position > ");
            scanf("%d",&w);
            ataftern(r,w);
            break;
        case 5:
            scanf("%d",&r);
            eran(r);
            break;
        case 8:
            listprint();
            printf("\n");
            break;
        }
    }
    return 0;
}
