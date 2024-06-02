#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 6
char stack[SIZE];
int top = -1;


void push(char data){

    if (top == SIZE - 1)
    {
        printf("\n OverFlow");;
        return;
    }
    top++;
    stack[top] = data;
    
}//push

void display(){
    
    int i;
    printf("\n");
    for(i = top ; i >= 0 ; i --){

        printf("%c ",stack[i]);
    }
    printf("\n\n\n");
}

void  pop()
{
    
    if (top == -1 ){
        printf("\nStack is UnderFlow");
    }//if

    printf("\n Popped Item  : %c",stack[top] );
    top--;

}//pop

void  peek(){

    if(top == -1){
        printf("\n Stack is Empty");
        return ;
    }
    printf("\n %c ", stack[top]);
    
}

int main()
{
    int choice;
    int i ;
    char str[6];
    while(1)
    {
        printf("\n1 . push \n2. display \n3. POP \n4.Peek \nEnter Your Choice\n ");
        scanf("%d",&choice );

        switch(choice){

            case 1: printf("\nEnter String : ");
                    scanf("%s",str);
                    for(i = 0 ; i < strlen(str) && i <= SIZE  ; i ++){
                         push(str[i]);
                    }
                    break;
            case 2 : printf("\n!!!Display!!!");
                     display();
                     break;
            case 3 : pop();
                     break;

            case 4: peek();
                    break;
            default : exit(0);
        }

    }

    return 0;

}