#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int,int> posmap;
        for( int i=0;i<nums.size();i++)
        {
            auto it=posmap.find(target-nums[i]);
            if(it!=posmap.end())
            {
                result.push_back(it->second);
                result.push_back(i);
                break;
            }
            else
            {
                posmap.insert({nums[i],i});
            }
        }
        return result;

    }
};
int main()
{
	Solution sa;
	vector<int> nums,result;
	int target;
	int n;
	cout<<"enter nums array size"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>> temp;
		nums.push_back(temp);
	}
	cout<<"enter the target"<<endl;
	cin>> target;
	result=sa.twoSum(nums,target);
	if(result.size()==0)
		cout<<"not macthing"<<endl;
	else
		cout<<result[0]<<"  "<<result[1]<<endl;
		
	return 0;
}
