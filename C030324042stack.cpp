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

