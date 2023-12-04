// Created by m on 18/10/2022. queue.c
#include "queue.h"
#include <stdio.h>
void createQueue(Queue *s)
{

    s -> front = 0;
    s -> rear  = 0;
    s -> size = 0;

}
int isQueueEmpty (Queue s)
{
//    if( s.top == -1)
//        return 1;
//    else
//        return 0;
    return s.size == 0; // abbreviation
}
int isQueueFull (Queue s)
{
//    if (s.top == MAX-1)
//        return 1;
//    else
//        return 0;
    return s.size == MAX;

}

void enqueue (Type item ,Queue *s )
{
    if (isQueueFull(*s))  //we use *s to get the value in the struct and not the address
        printf("Queue overflow can't add items\n");
    else
    {
        s->items[s->rear++] = item; // s-> rear = (s->rear+1)%MAX
        s->size += 1;
        if(s->rear == MAX )
            s->rear = 0;

    }


}
Type dequeue (Queue *s)
{
    Type item;
    if (isQueueEmpty(*s))
    {
        printf("Queue is empty can't Dequeue\n");

    }

    else
    {
        s->size -= 1;
        item = s->items[s->front++];
        if(s->front == MAX )
            s->front = 0;

       return item;

    }

}

int queueSize (Queue q)
{
    return q.size;
}
void traverseQueue (Queue *s , void(*f)(Type *)) //لازم الفانكشن اللي ابعتها مواصفاتها تكون مطابقة للبروتوتايب
//it takes a function from data type void and have only 1 parameter from data type Type as argument
{
    int i,count;
    for (i=s->front , count=0; count < s->size ; count++)
    {

        (*f) /*value inside function address */ (& s -> items[i]); // by reference


        i = (i+1)% MAX;

    }
}
Type lastelement(Queue q)
{
    return q.items[q.front + q.size - 1];
}

Type firstelement (Queue q)
{
    if (!isQueueEmpty(q))
        return q.items[q.front];
    else
        printf("Queue is empty no elements");



}
void destroyQueue(Queue *s)
{
    s -> front = 0;
    s -> rear  = 0;
    s -> size = 0;

}
void cpyqueue (Queue q , Queue *h , int *c)
{
    h-> front = q.front;
    h -> rear  = 0;
    h -> size = 0;

    for (int i = 0; i < q.size; ++i)
    {
       h->items[h->rear++] = q.items[q.front++]  ;
       h->size++;
        if (h->rear == MAX)
            h->rear = 0;

    }
    *c = h->size;
}





