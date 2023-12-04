/*list.c*/
#include "list.h"
#include <stdio.h>
void createList(List *x)
{
    x->size = 0;
}
void insertitem(Type item,int location,List *x)
{

    if(!islistfull(*x))
    {
        if(x->size == 0)
        {
            if(location >=0  && location <= (x->size))
            {
                x->List[location] = item;
                x->size++;
            }
            else
                printf("can't insert in that location\n");

        }
        else
        {
            if(location >=0  && location <= (x->size))
            {
                if(location != x->size)
                {
                    for (int i = x->size; i >= location  ; --i)
                    {
                        Type temp;
                        temp = x->List[i];
                        x->List[i] = x->List[i+1];
                        x->List[i+1] = temp;

                    }
                    x->List[location] = item;
                    x->size++;
                }
                else
                {
                    x->List[location] = item;
                    x->size++;
                }
            }
            else
            {
                printf("can't insert in that position\n");
            }
        }

    }
    else
        printf("list is full can't insert\n");
}


Type retrieveitem(int location,List *x)
{
    if(!islistempty(*x))
    {
        Type item;
        if (location >= 0 && location < x->size)
        {
            item = x->List[location];
            for (int i = location; i < x->size ; ++i) {
                Type temp;
                temp = x->List[i+1];
                x->List[i+1] =x->List[i];
                x->List[i] = temp;
            }
            x->size--;
            return item;
        }
        else
        {
            printf("can't retrieve item in this location\n");
            return -1;

        }


    }
    else
    {
        printf("can't retrieve list is empty\n");
        return -1;
    }

}

int islistfull (List x)
{
    return x.size == MAX-1 ;


}


int islistempty (List x)
{
    return x.size == 0 ;
}

int listsize (List x)
{
    return x.size;
}