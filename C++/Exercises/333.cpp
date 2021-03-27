#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

template <typename T>
    vector<size_t> sort_indexes_e(vector<T> &v)
    {
        vector<size_t> idx(v.size());
        iota(idx.begin(), idx.end(), 1);
        sort(idx.begin(), idx.end(),greater<T>());
        return idx;
    }

int main()
{
    int n;
    int k1, n1, res1;
    vector<int> k;
    vector<int> t;
    vector<int> res;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> k1 >> n1;
        k.push_back(k1);
        t.push_back(n1);
        res.push_back(k1 * n1);
    }
    
    vector<size_t> idx;
    idx = sort_indexes_e(res);
    for(int i=0;i<idx.size();i++)
    cout<<idx[i]<<" ";
}