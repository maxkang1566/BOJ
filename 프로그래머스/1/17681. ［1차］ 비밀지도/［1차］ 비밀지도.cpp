#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
	vector<string> answer;
	for (int i = 0; i <n; i++) {
		arr1[i] = arr1[i] | arr2[i];
		string ans = "";
		for (int j = 0; j<n; j++) {
			if (arr1[i] % 2 == 0) 
				ans = " " + ans; //엥 반대아님?ans = " " + ans; 이게 뭐지?? 이걸 질문 해야
			else ans = "#" + ans;
			
			arr1[i] = arr1[i] >> 1; //지정한 수 만큼 비트들을 왼쪽으로 이동.
		}
		answer.push_back(ans);
		arr1[1];
	}

	return answer;
}