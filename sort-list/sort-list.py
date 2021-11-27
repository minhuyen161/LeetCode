# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def sortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        listnode_before = head
        arr_sort = []
        while listnode_before:
            arr_sort.append(listnode_before.val)
            listnode_before = listnode_before.next
        arr_sort.sort()
        tail = head = ListNode(0)
        for temp in arr_sort:
            tail.next = ListNode(temp)
            tail = tail.next
        return head.next
            