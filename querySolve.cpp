#include<bits/stdc++.h>
using namespace std;

int main() {

int N, Q, lastAnswer = 0;
int queryNo, index, value;
cin >> N >> Q;

list<list<int>> seqList(N);

for(int i = 0; i < Q; i++) {
	cin >> queryNo >> index >> value;
	
	if (queryNo == 1)
		solveQueryOne();
	else
		solveQueryTwo();
}

return 0;
}

	
