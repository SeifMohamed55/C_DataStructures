#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>

void createLinkedlist(Linkedlist *l )
{
    l->head = NULL ;
    l->size = 0;
}

void insertLinkedlist(Type item,int location,Linkedlist *l)
{
    if(location >=0  && location <= l->size)
    {
        Node *new;
        new = (Node *) malloc(sizeof (Node));
        new->info = item;


        if(location == 0)
        {
            new->next = l->head; //اللي كان الهيد بيشاور عليه خلي الجديدة تشاور عليه
            l->head = new;
        }
        else
        {
             Node *iterator; int i;
            for (iterator = l->head , i=0; i < location-1 ; i++) { // loop until the last element i want to insert before
                iterator = iterator->next;

            }

             new->next  = iterator->next ;  // اللي القديمة بتشاور عليه خلي الجديدة تشاور عليه
             iterator->next = new;

        }
        l->size++;

    }
    else
    {
        printf("Can't insert in that location\n");
    }



}

Type retrieveitemLinkedlist(int location,Linkedlist *l)
{

    if(isLinkedlistempty(*l))
    {
        printf("can't retrieve empty list\n");
        return -1;
    }
    else
    {
        if(location >=0  && location < l->size)
        {

            Type item;
            Node *temp;

            if (location == 0)
            {
                item = l->head->info;
                temp = l->head;
                l->head = l->head->next;
                free(temp);

            }
            else
            {
                int i; Node *iterator;
                for (iterator = l->head , i=0; i < location-1; i++ ) {
                    iterator = iterator->next;
                }
                item = iterator->next->info;
                temp = iterator->next;
                iterator->next = temp->next;
                free(temp);

            }
            l->size--;

            return item;

        }
        else
        {
            printf("invalid location cant retrieve\n");
            return -1;
        }

    }


}


void clearLinkedlist(Linkedlist *l)
{
    Node *clearer;
    while (l->head) // not null
    {
        clearer = l->head;
        l->head = l->head->next;
        free(clearer);

    }
    l->size=0;

}

int Linkedlistsize (Linkedlist l)
{
    return l.size;

}


int isLinkedlistempty(Linkedlist l)
{
    return l.head == NULL ;
}

int isLinkedlistfull(Linkedlist l)
{
    return 0;

}


void joinList(Linkedlist *L,Linkedlist *n){
    int s= L->size;
    Node *temp = L->head;
    for(int i=0;i<s;i++){
        insertLinkedlist(temp->info,n->size,n);
        temp=temp->next;
        L->size++;
    }
}
