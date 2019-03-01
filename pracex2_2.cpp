#include<iostream>
#include<fstream>

using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] < x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	ofstream dest.open("score1.txt");
    dest << "score1.txt" << ": ";
	dest.close();
	ifstream source("result.txt");
	string line;
	while(getline(source,line)){
		cout << line << "\n";
	}
	
	
	
	//Write your code here
	
	return 0;
}

