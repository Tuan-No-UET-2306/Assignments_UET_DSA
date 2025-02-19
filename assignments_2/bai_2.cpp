#include<bits/stdc++.h>
using namespace std ; 
typedef long long ll ;  
struct node{
    int data ; 
    node *next ; 
    node(int x){
        data = x ; 
        next = NULL ; 
    }
};  
void insert(int p , int x , node *&head ){
    node *Newnode = new node(x) ; 
    if(head == NULL){
        head = Newnode ; 
        return ; 
    }
    if(p == 0 ){
        Newnode->next = head; 
        head = Newnode ; 
        return; 
    }
    else{
        node *tmp = head ;
        for(int i = 0 ; i < p - 1 ; i++){
            tmp = tmp->next ; 
        }
        Newnode->next = tmp->next ; 
        tmp->next = Newnode ; 
        return ; 

    }
}
void Delete (int p , node *&head){
    node *tmp = head ; 
    if(head == NULL) return ;
    else if(p == 0 ){
        head = head->next; 
        delete tmp ; 
        return ;
    }
    else{
        for(int i = 0 ; i < p -1 ; i++){
            tmp = tmp->next; 
        }
        node *xoa = tmp->next ; 
        tmp->next = tmp->next->next ; 
        delete xoa ; 
        return ; 
    }

}
void duyet(node *head){
    while(head != NULL){
        cout << head->data << " " ; 
        head = head->next ; 
    }
}
int main(){
    int n ; cin >> n ; 
    node *head = NULL ; 
    while(n--){
        string tt ; 
        cin >> tt ; 
        if(tt == "insert"){
            int p , x; cin >> p >> x ;
            insert(p, x ,head) ; 
        }
        else{
            int p ; cin >> p ; 
            Delete(p , head  ) ; 
        }
    }
    duyet(head) ; 
}