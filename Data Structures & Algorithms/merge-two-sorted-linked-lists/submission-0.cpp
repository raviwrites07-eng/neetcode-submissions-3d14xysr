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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* modify=NULL;
        ListNode* pre=new ListNode  (-1);
        ListNode* current1=list1;
        ListNode* current2=list2;
        ListNode* next1=NULL,next2=NULL;
        modify=pre;
        while(current1!=NULL&& current2 !=NULL){
            if(current1->val<=current2->val){
                modify->next=current1;
                current1=current1->next;
                modify = modify->next;
            }
            else{
                modify->next=current2;
                current2=current2->next;
                modify = modify->next;
            }
        }
        if(current1 != NULL){
            modify->next=current1;
        }
         if(current2 != NULL){
            modify->next=current2;
        }
        return pre->next;
    }
};