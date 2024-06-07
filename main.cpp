#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt, int size){
	if(M - size == 0){
		for(auto i : vec){
			cout << i;
		}
		cout << " ";
		return;
	}
	if(N - cnt == M - size){
		for(int i = cnt + 1; i <= N; ++){
			vec.push_back(i);
		}
		for(auto i : vec){
			cout << i;
		}
		cout << " ";
		for(int i = cnt + 1; i <= N; i++){
			vec.pop_back();
		}
		return;
	}
	vec.push_back(cnt + 1);
	func(cnt + 1, size + 1);
	vec.pop_back();
	func(cnt + 1, size);
}

int main(){
	cin >> N >> M;
	func(0, 0);
}
