#include<bits/stdc++.h>
using namespace std;

int fact(int n){
	return n*fact(n-1);
}
int func(vector<char> arr, string word){
	int n=arr.size(),index,size=n;
	int count=1;
	sort(arr.begin(),arr.end());
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(word[i]==arr[j])
			index=j;
		}
		count+=(index-i)*fact(size-1);
		size--;
	}
	return count;
	
}

int main(){
	int n;
	cin>>n;
	vector<char> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	string word;
	cin>>word;
	int result;
	result=func(arr,word);
	cout<<result;
	
}
