#include<bits/stdc++.h>
using namespace std ; 
typedef long long ll ;  
struct node{
    int data ; 
    node *next ;
    node *prev ;  
    node(int x){
        data = x ; 
        next = NULL ; 
        prev = NULL ; 
    }
}; 
void insert(int x , node *&head) {
    node *NewNode = new node(x) ; 
    if(head == NULL ){
        head = NewNode ; 
        return ; 

    }
    else{
        NewNode->next = head ; 
        head->prev = NewNode ;
        head =NewNode ; 
        return ;
    }
}
int count_triplets(node *head){
    head = head->next ; 
    int sum = 0 ; 
    while(head->next != NULL){
        int check = head->data + head->next->data + head->prev->data ; 
        if(check == 0 ) sum++ ; 
        head = head->next ; 
    }
    return sum ;
}
int main(){
    int n  ; cin >> n ; 
    node *head = NULL ; 
    while(n--){
        int x ; cin >> x; 
        insert(x , head) ; 
    }
    cout << count_triplets(head) ; 
}