/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

int lengthOfLinkedList(ListNode *head){
    ListNode *temp=head;
    int length=0;
    
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    
    return length;
}
class Solution {
public:
    ListNode *removeNthFromEnd(ListNode *head,int n){
        int length=lengthOfLinkedList(head);
        n=length-n;
        
        if(n==0){
            return head->next;
        }
        
        ListNode *temp=head,*prevNode=NULL;
        
        while(n){
            prevNode=temp;
            temp=temp->next;
            n--;
        }
        
        prevNode->next=temp->next;
        return head;
    }
};
