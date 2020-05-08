#include <bits/stdc++.h>
using namespace std;

int main() {
   int testcase;
   char temp;
   cin>>testcase;
   vector<char>* ptr = new vector<char>[testcase];
   for(int i=0;i<testcase;i++){
		temp = 0;
		cin>>temp;
		while(temp != '\n') {
			ptr[i].push_back(temp);
			cin>>temp;
		}
   }
   for(int i=0;i<testcase;i++){
   }
    return 0;
}
