class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = NULL;

        while(temp){
            ListNode* nextnode = temp -> next;
            temp -> next = prev;
            prev = temp;
            temp = nextnode;
        }
        return prev;
    }
};
