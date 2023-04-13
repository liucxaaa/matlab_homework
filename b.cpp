#include<bits/stdc++.h>
using namespace std;
int main(){
    int dp[5843];
    int arr[4] = {2,3,5,7};
    int temp1 = 1;
    int temp2 = 1;
    int temp3  =1;
    int temp4  =1;
    vector<long long>arr1(4,0);
    for(int i =0;i<5842;i++){
     arr1[0] = dp[temp1]*2;
     arr1[1] = dp[temp2]*3;
     arr1[2] = dp[temp3]*5;
     arr1[3] = dp[temp4]*7;
     sort(arr1.begin(),arr1.end());
     if(arr1[0] == dp[temp1]*2){
         temp1++;
     }else if (arr1[0] == dp[temp2]*3){
         temp2++;
     }else if (arr1[0] == dp[temp3]*5){
         temp3++;
     }else{
         temp4++;
     }
     dp[i] = arr1[0];
    }
    int n;
	while(cin>>n){
		if(n == 0){
			break;
		}
		if(n%10==1 &&n!=11){
			cout<<"The "<<n<<"st humble number is "<<arr[n-1]<<".\n";
		}else if (n%10 == 2&&n!=12){
			cout<<"The "<<n<<"nd humble number is "<<arr[n-1]<<".\n";
		}else if (n%10==3&&n!=13){
			cout<<"The "<<n<<"rd humble number is "<<arr[n-1]<<".\n";
		}else{
			cout<<"The "<<n<<"th humble number is "<<arr[n-1]<<".\n";
		}
	}
    return 0;
};
