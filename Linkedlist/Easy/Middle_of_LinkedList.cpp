//https://leetcode.com/problems/middle-of-the-linked-list/

// using two pointer approach(slow-fast pointer)

/*class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *slow=head, *fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};*/