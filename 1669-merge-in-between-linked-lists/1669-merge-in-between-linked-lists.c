/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeInBetween(struct ListNode* list1, int a, int b, struct ListNode* list2){
    struct ListNode *head;
    head = list1;
    struct ListNode *prev = head;

    for(int i = 0; i < a - 1; i ++) {
        prev = prev -> next;
    }

    struct ListNode *curr = prev -> next;
    for (int i = 0; i < b - a + 1; i ++){
        struct ListNode *temp = curr -> next;
        curr = temp;
    }
    prev -> next = list2;
    while(list2 -> next != NULL) {
        list2 = list2 -> next;
    }
    list2 -> next = curr;
    return head;
}