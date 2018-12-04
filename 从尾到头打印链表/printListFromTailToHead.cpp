class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> v;
        for(ListNode* cur = head; cur != nullptr; cur = cur->next)
            v.push_back(cur->val);
        reverse(v.begin(),v.end());
        return v;

    }

};
