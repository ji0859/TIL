//숫자로 삼각형 출력하기 
#include <iostream>
using namespace std;

int main(){
	int a,b;
	cout << "출력할 삼각형의 수를 입력하시오:";
	cin >>a;
	for(int i = 0;i< a; i++){
		cout << "삼각형의 크기를 입력하시오:";
		cin >> b;
		for(int j = 1; j<=b;j++){
			cout << j <<' ';
			for(int h = 1; h<j; h++){
				cout << (j+a-1+h)<<' ';
			
			}
			cout << "\n";
		}
	}
	return 0;
}

