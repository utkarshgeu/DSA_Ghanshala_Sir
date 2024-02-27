#include<stdio.h>
#include <stdlib.h>
typedef struct node{
    int info;
    struct node *next;

}Node;

int main(){

 Node *head = NULL;

 Node *newNode = (Node*)malloc(sizeof(Node*));

 newNode->info = 10;
 newNode->next = NULL;

 printf("\n%d\n",newNode->info);


}