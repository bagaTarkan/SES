//
// Created by baga on 27/05/22.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define myReturn 0

struct baga{
    int x;
    struct  baga * next;
};

typedef struct baga node;


void bastır(node *r);
void ekle(node*r, int x);


int main(int argc, char *argv[], char **envp){

    printf("DEar friend\n");

    node* root;
    root=(node*) malloc(sizeof (node));
    root->next=NULL;
    root->x=500;
    int i=0;
    for(i=0;i<5;i++){
        ekle(root, i*10);
    }
    bastır(root);

    return myReturn;
}

void bastır(node *r){
    while(r!=NULL){
        printf("%d\n",r->x);
        r=r->next;
    }
}

void ekle(node* r, int x){
    while (r->next!=NULL){
        r=r->next;
    }
    r->next=(node*)malloc(sizeof (node));
    r->next->x=x;
    r->next->next=NULL;

}