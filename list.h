/*list.h*/
#ifndef MAIN_C_LIST_H
#define MAIN_C_LIST_H

#define MAX 10
typedef int Type;
typedef struct
{
    Type List[MAX];
    int size ;

}List;

void createList(List *x);
void insertitem(Type item,int location,List *x);
Type retrieveitem(int location,List *x);
int islistfull (List x);
int islistempty (List x);
int listsize (List x);






#endif //MAIN_C_LIST_H
