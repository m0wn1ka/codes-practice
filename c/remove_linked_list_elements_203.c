/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode *temp=(struct ListNode *)malloc(sizeof(struct ListNode));
    while(temp!=NULL){
        if(temp->next->val!=NULL && temp->next->val==val){
            temp->next=temp->next->next;

        }
        else{
        temp=temp->next;
        }

    }
    return head; 

    
}