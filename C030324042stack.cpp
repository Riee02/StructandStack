#include <iostream>
#define MAXSTACK 5
using namespace std;

typedef int ItemType;

typedef struct{
    ItemType Item[MAXSTACK];
    int count;
} Stack;

void InitializeStack(Stack *S){
    S->count = 0;
}

int Full(Stack *S){
    return(S->count==MAXSTACK);
}
int Empty(Stack *S){
    return(S->count==0);
}

void Pop(Stack *S,ItemType *X){
    if(S->count == 0){
        cout<<"Stack nya masih kosong mas"<<endl;
    } else {
        --(S->count);
        *X=S->Item[S->count];
    }
}