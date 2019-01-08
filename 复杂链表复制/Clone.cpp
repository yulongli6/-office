class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead)
    {
        if(pHead==NULL)return NULL;
        RandomListNode* cur = pHead;
        RandomListNode* newNode;
        while(cur != NULL)
        {
            newNode = new RandomListNode(cur->label);
            newNode->next = cur->next;
            cur->next = newNode;
            cur = newNode->next;

        }

        复制random
            cur = pHead;
        while(cur != NULL)
        {
            newNode = cur->next;
            if(cur->random != NULL)
                newNode->random = cur->random->next;
            cur = cur->next->next;

        }

        RandomListNode* newNext;
        RandomListNode* curNext;
        RandomListNode* ret = pHead->next;
        cur = pHead;
        while(cur != NULL)
        {
            newNode = cur->next;
            curNext = newNode->next;
            if(curNext != NULL)
                newNext = curNext->next;
            else
                newNext = NULL;
            cur->next = curNext;
            newNode->next = newNext;

            cur = curNext;

        }

        return ret;

    }

};
