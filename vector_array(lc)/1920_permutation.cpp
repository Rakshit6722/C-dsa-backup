#include <iostream>
#include <vector>
using namespace std;

vector<int> buildArray(vector<int>& nums)
{
    int l = nums.size();
    vector<int> ans(l, 0);

    for (int i = 0; i < nums.size(); i++)
    {
        ans[i] = nums[nums[i]];
    }

    return ans;
}

int main()
{

    int n;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }

    vector<int> ans = buildArray(arr);

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}
