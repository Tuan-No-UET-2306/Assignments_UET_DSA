#include<bits/stdc++.h>
using namespace std ; 
typedef long long ll ; 
struct Stack{
    int data ; 
    Stack *next ; 
    Stack(int x){
        data = x ; 
        next = NULL ; 
    }
};   
void push(int x , Stack *&head){
    Stack *newStack = new Stack(x) ; 
    if(head == NULL) {
        head = newStack ;
        return ; 
    }
    else{
        newStack->next = head;
        head = newStack ;
        return ; 
    }
    
}     
void pop(Stack *&head){
    Stack  *tmp = head; 
    if(head == NULL) return ; 
    else{
        head = head->next ;
        delete tmp ; 
    }
    
}
void duyet(Stack *head){
    while(head != NULL){
        cout << head->data << " " ; 
        head = head->next ; 
    }
}
int main(){
    int n ;cin >> n ; 
    Stack *head = NULL ;
    while(n--){
        string tt ;cin >> tt ; 
        if(tt== "push"){
            int x ; cin >> x ;
            push(x , head) ; 
        }
        else{
            pop(head) ; 
        }
    }
    duyet(head) ; 
}