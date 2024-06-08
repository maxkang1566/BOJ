#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	while(1) {
		int ans = 0;
		string str;
		getline(cin, str);
		
		if(str=="#")
			break;
		
		for(auto i : str){
			if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u' ||i=='A' || i=='E' || i=='I' || i=='O' || i=='U')
				ans++;
		}
		
		cout<<ans<<'\n';
		
	}
	
	return 0;
}
