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
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {       
        ListNode* res = new ListNode();
        ListNode* nums = res;
        while((l1!=nullptr)||(l2!=nullptr)){
             if( l1 == nullptr){
                nums -> next = l2;
                 nums = nums->next;
                l2 = l2 -> next;
            }
            else if(l2 == nullptr){
                nums -> next = l1;
                nums = nums -> next;
                l1 = l1 -> next;
            }
            else if(l1->val <= l2-> val){
                nums -> next = l1;
                nums = nums -> next;
                l1 = l1 -> next;
            }
            else if(l1-> val > l2 -> val){
                nums -> next = l2;
                nums = nums -> next;
                l2 = l2-> next;
            }
        }
        return res -> next;
    }
};