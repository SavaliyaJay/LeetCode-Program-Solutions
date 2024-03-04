class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* f = head;
        ListNode* s = head;
        
        while( f!=NULL && f->next != NULL){
            s = s->next;
            f = f->next->next;
        }
        return s;
    }
};