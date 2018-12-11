class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        if(!pHead1)return pHead2;
        if(!pHead2)return pHead1;

        ListNode* ret = NULL;
        ListNode* tail = NULL;

        ListNode* cur1 = pHead1;
        ListNode* cur2 = pHead2;
        ListNode* node;
        while(cur1 != NULL && cur2 != NULL)
        {
            if(cur1->val <= cur2->val)
            {
                node = cur1;
                cur1 = cur1->next;

            }

            else
            {
                node = cur2;
                cur2 = cur2->next;

            }

            if(tail == NULL)
            {
                ret = node;
                tail = node;

            }
            else
            {
                tail->next = node;
                tail = node;

            }

        }

        if(cur1 != NULL)
            tail->next = cur1;
        if(cur2 != NULL)
            tail->next = cur2;
        return ret;

    }

};
