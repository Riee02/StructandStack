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
        cout<<"Data pop "<<*X<<endl;
    }
}

void Push(Stack *S,ItemType X){
    if(S->count==MAXSTACK){
        cout<<"Stack nya sudah penuh"<<endl;
    } else {
        S->Item[S->count]=X;
        ++(S->count);
         cout<<"Data "<<X<<" berhasil di push."<< endl;
    }
}


int main(){
    Stack S; //Biar simpel
    ItemType X; //atas
    InitializeStack(&S); 
    Push(&S,11);
    Push(&S,22);
    Push(&S,33);
    Push(&S,44);
    Push(&S,55);
    Push(&S,66); //Pengujian stack penuh

    Pop(&S,&X);
    Pop(&S,&X);
    Pop(&S,&X);
    Pop(&S,&X);
    Pop(&S,&X);
    Pop(&S,&X); //Sama

    return 0;
}