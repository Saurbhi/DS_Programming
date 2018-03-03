#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll N;

void solveQueryOne(ll index, ll value, ll lastAnswer, vector<vector<ll> > &seqList) {
	ll seq;
	seq = (index ^ lastAnswer) % N;
	seqList[seq].push_back(value);
}

ll solveQueryTwo(ll index, ll value, ll lastAnswer, vector<vector<ll> > seqList) {
	ll seq;
	seq = (index ^ lastAnswer) % N;
	return seqList[seq][value % seqList[seq].size()];
}

int main() {

ll lastAnswer = 0;
ll Q, queryNo;
ll index, value;
cin >> N >> Q;

vector<vector<ll> > seqList(N);

for(ll i = 0; i < Q; i++) {
	cin >> queryNo >> index >> value;
	
	if (queryNo == 1) {
		solveQueryOne(index, value, lastAnswer, seqList);
		
	}	
	else {
		lastAnswer = solveQueryTwo(index, value, lastAnswer, seqList);
		cout << lastAnswer <<endl;
	}
}

return 0;
}
