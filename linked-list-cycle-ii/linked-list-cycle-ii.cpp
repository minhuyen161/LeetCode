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
    ListNode *detectCycle(ListNode *head) {
        if(head== nullptr || head-> next == nullptr){ return nullptr;}
        ListNode *low = head;
        ListNode *fast = head;
        while(fast != nullptr && fast-> next != nullptr){
            low = low->next;
            fast = fast -> next -> next;;
            if(low == fast){
                fast = head;
                while(low != fast){
                    low = low -> next;
                    fast = fast -> next;
                }
                return low;                
            }
        }
        return nullptr;
    }
};