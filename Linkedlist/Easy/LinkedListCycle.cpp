//https://leetcode.com/problems/linked-list-cycle/

//Approach 1 unordered map

/*class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*, bool>mp;
        ListNode* temp=head;
        while(temp){
            if(mp[temp]==true)
                return true;
            else{
                mp[temp]=true;
                temp=temp->next;
            }
        }
        return false;
    }
};*/


//Approach 2: fast-slow pointer
/*class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head or !head->next)
            return false;
        ListNode *slow=head,*fast=head;
        while(fast->next && fast->next->next){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow)
                return true;
        }return false;
    }
};*/