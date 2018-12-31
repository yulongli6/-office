class Solution {
public:
    int GetNumberOfK(vector<int> data ,int k) {
        int count = 0;
        for(size_t i = 0; i < data.size(); ++i)
        {
            if(k == data[i])
                count++;

        }

        return count;

    }

};


class Solution {

public:

    int GetNumberOfK(vector<int> data ,int k) {

        return biSearch(data, k+0.5) - biSearch(data, k-0.5) ;

    }

private:

    int biSearch(const vector<int> & data, double num){

        int s = 0, e = data.size()-1;

        while(s <= e){

            int mid = (e - s)/2 + s;

            if(data[mid] < num)
                s = mid + 1;
            else if(data[mid] > num)
                e = mid - 1;    
        }

                return s;

            
    }


};


class Solution {
public:
    int GetNumberOfK(vector<int> data ,int k) {
        auto resultPair = equal_range(data.begin(), data.end(),k);
        return resultPair.second - resultPair.first;

    }

};

