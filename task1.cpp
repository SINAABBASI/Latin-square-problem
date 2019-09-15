/*In The Name of ALLAH*/
#include <bits/stdc++.h>
#define MAX 101 
using namespace std;

int n,a[MAX][MAX];///the size of matrix and the matrix
int cnt = 0;////number of solutions
set<int> forwardCheckingSet[MAX][MAX];////every cell have a set of numbers can be used for set
pair<int,int> beat[MAX][MAX][MAX]; //// store the cell in (i,j) with number k  beated with cell(x,y) 

///print a matrix
void showAnswer(){
	for(int i = 1; i<= n; i++){
		for(int j = 1; j <=n ; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

////forward checking part
void forwardChecking(int x,int y,int num){
	
	for(int i = x + 1; i <= n ;i++){
		auto it = forwardCheckingSet[i][y].find(num);
		if(it != forwardCheckingSet[i][y].end()){
			beat[i][y][num] = make_pair(x,y);
			forwardCheckingSet[i][y].erase(it);
		}
	}

	for(int i = y + 1; i <= n ;i++){
		auto it = forwardCheckingSet[x][i].find(num);
		if(it != forwardCheckingSet[x][i].end()){
			beat[x][i][num] = make_pair(x,y);
			forwardCheckingSet[x][i].erase(it);
		}
	}
	
	return;
}

//// in backtracke need to restore the erased element with forward checking

void refineForwardChecking(int x,int y,int num){
	for(int i = x + 1; i <= n ;i++)
		if(beat[i][y][num] == make_pair(x,y))
			forwardCheckingSet[i][y].insert(num);

	for(int i = y + 1; i <= n ;i++)
		if(beat[x][i][num] == make_pair(x,y))
			forwardCheckingSet[x][i].insert(num);
	
	return;	
}

///backtracking fumnction to solve the problem
void backtrack(int x,int y){

	for(auto i : forwardCheckingSet[x][y]){
		a[x][y] = i;
		forwardChecking(x,y,i);
		if(y == n && x == n){
			showAnswer();
			exit(0);
			break;
		}else{
			if(y == n)backtrack(x % n + 1 , 1);
			else backtrack(x,y + 1);
			refineForwardChecking(x,y,i);
		}
	}
	if(x == n && y == n)cout<<endl;
	return;
}

////inintialisation
void initialisation(){
	
	memset(a,0,sizeof a);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n ; j++){
			for(int k = 1; k <= n; k++){
				forwardCheckingSet[i][j].insert(k);
			}
		}
	}
	return;
}


int main(){ 
	cout<<"Enter Size of Matric (n) : \n";
	cin>>n;
	initialisation();
	backtrack(1,1);
	return 0;
}