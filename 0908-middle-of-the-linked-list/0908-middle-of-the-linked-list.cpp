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
        ListNode*temp1 = head;
        ListNode*temp2 = head;
        int count =1;
        if(head->next==NULL) return head;
        while(temp1->next!=NULL){
            count++;
            temp1= temp1->next;
        }
        int mid = count/2;
        if(count%2==0){
            for(int i =1;i<=mid;i++){
                temp2 = temp2->next;
            }
            return temp2;
        }
        else{
            for(int i =1;i<mid+1;i++){
                temp2= temp2->next;
                
            }
            return temp2;
        }
        
    }
};