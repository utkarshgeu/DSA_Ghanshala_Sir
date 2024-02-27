#include<stdio.h>
#define MAX 10

void PUSH(int [], int*);
void POP(int [], int*);
void DISPLAY(int [], int);

int main(){

    int stack[MAX];
    int top = -1;
    int ch;
    do{
         printf("\nPlease Enter your choice \n1. PUSH\n2. POP\n3.DISPLAY\n4.Exit\n");
         scanf("%d",&ch);
         switch(ch){
            case 1: PUSH(stack,&top);
                    break;
            case 2: POP(stack,&top);
                    break;
            case 3: DISPLAY(stack,top);
                    break;                        
         }
      
    }while(ch<4);
     
    return 0;
}


void PUSH(int stack[], int *top){
    int val = 0;
    if(*top == MAX-1){
        printf("\nStack is Full!!!");
    }else{
        printf("\nEnter an element to insert in stack :-");
        scanf("%d",&val);
        *top = *top + 1;
        stack[*top] = val;
    }
}

void POP(int stack[], int *top){

    if(*top == -1){
        printf("\nStack is Empty!!!");
    }else{
        printf("\nPoped element is : %d",stack[*top]);
        *top = *top - 1;
    }
}    

void DISPLAY(int stack[], int top){
    if(top == -1){
        printf("\nStack is Empty!!!");
    }else{
        int temp = top;
        while(temp >=0){
              printf("\n\t%d",stack[temp]);
              temp--;
        }
    }
}