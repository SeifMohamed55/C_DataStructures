#include "stack.h"
#include <stdio.h>
void CreateStack (Stack *s)
{
    // (*s).top = -1;
    s -> top = -1;

}
int isStackEmpty (Stack s)
{
//    if( s.top == -1)
//        return 1;
//    else
//        return 0;
    return s.top == -1 ; // abbreviation
}
int isStackFull (Stack s)
{
//    if (s.top == MAX-1)
//        return 1;
//    else
//        return 0;
    return s.top == MAX-1;

}

void push (Type item ,Stack *s )
{
    if (s -> top == MAX - 1)  //isStackFull (*s) we use *s to get the value in the struct and not the address
        printf("Stack overflow can't add items");
    else
        s->items[++s->top] = item;

}

Type pop (Stack *s)
{
    Type item;
    if (s->top == -1) //isStackEmpty(*s)
    {
        printf("Stack is empty can't pop");

    }

    else{
        item = s->items[s->top--];
        return item ;
    }

}



Type peak (Stack s)
{
    if (s.top == -1)
    {
        printf("Stack is empty no peak");

    }
    else
       return s.items[s.top];

}

int stackSize (Stack s)
{
    return (s.top)+1;
}

Type stackBot (Stack s)
{
    if (!isStackEmpty(s))
         return s.items[0];


}

void destroyStack (Stack *s)
{
    s ->top = -1;
}

void copyStack (Stack s ,Stack *s2)
{
     int size = s.top;
     s.top = 0;
     s2->top = -1;

    while (s.top < size)
        s2->items[++s2->top] = s.items[s.top++];



}

