

#ifndef MAIN_C_Queue_H
#define MAIN_C_Queue_H

#define MAX 10

typedef int Type;

typedef struct {
    int rear;
    int front;
    int size;
    Type items[MAX];

}Queue;

void createQueue (Queue *s);
void enqueue (Type item , Queue *s);
Type dequeue (Queue *s);
int isQueueFull (Queue s);
int isQueueEmpty (Queue s);
void traverseQueue (Queue *s , void(*f)(Type *));
int queueSize (Queue q);
Type lastelement(Queue q);
Type firstelement (Queue q);
void destroyQueue(Queue *s);
void cpyqueue (Queue q , Queue *h , int *c);


#endif //MAIN_C_QUEUE_H
