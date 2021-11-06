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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp = head;
        ListNode *list;
        int mid = 0;
        int len = 0;
        while (temp != NULL) {
            temp = temp->next;
            len++;
        }
        mid = len/2 + len%2;
        temp = head;
        for (int i = 1; i < len - mid + 1; i++)
            temp = temp->next;
            
    return temp;
    }
};