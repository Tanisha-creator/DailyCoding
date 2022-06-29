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

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=123;
    int obv=n;
    int ans=0;
    //cout<<obv<<" ";
    while(n>0){
        int rem=n%10;
        ans = (ans*10)+rem;
        n=n/10;
        cout<<n<<" ";
        cout<<ans<<" ";
    }
    if(obv==ans)
    cout<<"yes";
    else
    cout<<"no";
}