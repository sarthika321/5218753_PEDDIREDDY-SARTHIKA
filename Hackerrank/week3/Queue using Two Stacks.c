#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


typedef struct {
    int a[100000];
    int top;
}Stack;

void init(Stack* s){
    s->top=-1;
}

void push(Stack* s,int value){
    s->a[++(s->top)]=value;
}

int pop(Stack* s){
    return s->a[(s->top)--];
}

int isEmpty(Stack* s){
    return s->top==-1;
}

int peek(Stack* s){
    return s->a[s->top];
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q;
    scanf("%d",&q);
    
    Stack s1,s2;
    init(&s1);
    init(&s2);
    
    while(q--){
        int option;
        scanf("%d",&option);
        
        if(option==1){
            int x;
            scanf("%d",&x);
            push(&s1,x);
        }
        else if (option==2) {
            if(isEmpty(&s2)){
                while (!isEmpty(&s1)) {
                    push(&s2, pop(&s1));
                }
            }
            pop(&s2);
        }
        else if (option==3) {
            if (isEmpty(&s2)) {
                while (!isEmpty(&s1)) {
                    push(&s2, pop(&s1));
                }
            }
            printf("%d\n",peek(&s2));
        }
    } 
    return 0;
}
