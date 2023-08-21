// Brute-Force approach to find middle of linked list
#include<bits/stdc++.h>
using namespace std;

//Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* middleNode(ListNode* head) {
    vector<ListNode*> temp;            
    //created a vector of type ListNode pointer temp to store the nodes.
    int count = 0;                      
    //count variable.
    while(head!=NULL){
        temp.push_back(head);           
        //we keep inserting the elements from the linked-list
        // untill we reach NULL pointer.
        head=head->next;
        count++;
    }
    return temp[count/2];
}

int main(){
    
        //creating a new Linked-List.
        ListNode* list = new ListNode();
        ListNode* head = list;
        for(int i =1;i<=5;i++){
           list->next = new ListNode(i);
           list = list->next;
        }
        ListNode* ans = middleNode(head->next);
        cout<<ans->val<<endl;
        return 0;
}
