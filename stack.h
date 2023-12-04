

#ifndef MAIN_C_Stack_H
#define MAIN_C_Stack_H

#define MAX 8
typedef int Type;
typedef struct {
    int top;
    Type items[MAX];

}Stack; //name of the struct

void CreateStack (Stack *s);
void push( Type item, Stack *s);
Type pop (Stack *s);
int isStackEmpty (Stack s); // empty 1  notempty 0
int isStackFull (Stack s);  // full 1   notfull 0
Type peak (Stack s);
int stackSize (Stack s);
Type stackbot (Stack s);
void destroyStack (Stack *s);
void copyStack (Stack s1 ,Stack *s2);


#endif //MAIN_C_STACK_H
