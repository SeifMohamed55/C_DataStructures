
#ifndef MAIN_C_LINKEDLIST_H
#define MAIN_C_LINKEDLIST_H


typedef int Type;
typedef struct nodeT {

    Type info;
    struct nodeT *next;


}Node;


typedef struct
{
    Node *head;
    int size;

}Linkedlist;

void createLinkedlist(Linkedlist *l );
void insertLinkedlist(Type item,int location,Linkedlist *l);
Type retrieveitemLinkedlist(int location,Linkedlist *l);
int isLinkedlistfull(Linkedlist l);
int isLinkedlistempty(Linkedlist l);
void clearLinkedlist(Linkedlist *l);
int Linkedlistsize (Linkedlist l);
void joinList(Linkedlist *L,Linkedlist *n);

#endif //MAIN_C_LINKEDLIST_H
