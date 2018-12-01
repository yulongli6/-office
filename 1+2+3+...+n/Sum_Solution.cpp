#include <iostream>
using namespace std;

class Solution{
public:
    class Sum{
    public:
        Sum(){
            ++_n;
            _sum+=_n;
            }
        static void Reset(){
            _n = 0;
            _sum = 0;
            }
        static int Getsum(){
            return _sum;
        }
    };
    int Sum_Solution(int n){
        Sum::Reset();
        Sum* p = new Sum[n];
        delete[] p;
        p = NULL;
        return Sum::Getsum();
    }
private:
    static int _n;
    static int _sum;
};

int Solution::_n= 0;
int Solution::_sum = 0;


int main()
{
    int n = 5;
    Solution s1;
    cout<<s1.Sum_Solution(n)<<endl;
    return 0;
}
