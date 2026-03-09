#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int knapsack01(int w,vector<int>& weight,vector<int>& values){
    int n=weight.size();
    vector<vector<int>> dp(n,vector<int>(w+1,0));
    for(int j=weight[0];j<=w;j++){
        dp[0][j]=values[0];
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<=w;j++){
            if(j<weight[i]){
                dp[i][j]=dp[i-1][j];
            }else{
                dp[i][j]=max(dp[i-1][j],values[i]+dp[i-1][j-weight[i]]);
            }
        }
    }
    return dp[n-1][w];
}