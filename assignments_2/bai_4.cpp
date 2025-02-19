#include<bits/stdc++.h>
using namespace std ; 
typedef long long ll ; 
struct Queue{
    int data ; 
    Queue *next ; 
    Queue(int x){
        data = x ; 
        next = NULL ; 
    }
};   
void enqueue(int x , Queue *&head){
    Queue *tmp = head; 
    Queue *newQueue = new Queue(x) ; 
    if(head == NULL) {
        head = newQueue ;
        return ; 
    }
    while(tmp->next != NULL){
        tmp = tmp->next; 
    }
    tmp ->next = newQueue ; 
    return ; 
}     
void dequeue(Queue *&head){
    Queue  *tmp = head; 
    if(head == NULL) return ; 
    else{
        head = head->next ;
        delete tmp ; 
    }
    
}
void duyet(Queue *head){
    while(head != NULL){
        cout << head->data << " " ; 
        head = head->next ; 
    }
}
int main(){
    int n ;cin >> n ; 
    Queue *head = NULL ;
    while(n--){
        string tt ;cin >> tt ; 
        if(tt== "enqueue"){
            int x ; cin >> x ;
            enqueue(x , head) ; 
        }
        else{
            dequeue(head) ; 
        }
    }
    duyet(head) ; 
}