#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(int argc, _TCHAR* argv[])
{
	int n;
	while(cin>>n){
		vector<string> strs;
		while(n--){
			string temp;
			getline(cin,temp);
			if(temp.length()<=0){
				getline(cin,temp);
			}
			strs.push_back(temp);
		}
		vector<string> result=getResult(strs);
		for(int i=0;i<result.size();i++){
			cout<<result[i]<<endl;
		}
	}
	return 0;
}
