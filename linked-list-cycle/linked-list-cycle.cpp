/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *low = head;
        while(fast!=nullptr){
            fast = fast -> next;
            if(fast==nullptr){ return false;}
            fast = fast -> next;
            low = low -> next;
            if(low == fast){
                return true;
            }
        }
        return false;
    }
};