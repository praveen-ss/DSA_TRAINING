
class Solution {
public:
    int length(ListNode* head){
        int len =0;
        ListNode* temp = head;
        while(temp){
            len++;
            temp = temp -> next;
        }
        return len;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL )
            return head;
        int len = length(head);
        if(len == 1)
            return head;
        ListNode* temp = head;
        k = k % len;
        while(k > 0){
            ListNode* first = head;
            ListNode* before_last = NULL;
            while(temp ->next){
                before_last = temp;
                temp = temp -> next;
            }
            head = temp;
            temp -> next = first;
            before_last -> next = NULL;
            k--;
        }
        return head;
    }
};
