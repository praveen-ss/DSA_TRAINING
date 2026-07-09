class Solution {
public:

    int length(ListNode* head){
        int count = 0;
        ListNode* temp = head;
        while(temp != NULL){
            count++;
            temp = temp -> next;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        int mid = (length(head)/2)+1;

        ListNode* temp = head;
        int count = 1;
        while(temp != NULL){
            if(count < mid){
                count++;
                temp = temp -> next;
            }
            else{
                return temp;
            }
        }
        return temp;
    }
};
