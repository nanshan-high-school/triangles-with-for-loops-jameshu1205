#include <iostream>
using namespace std;
int main(){
    int i = 0, high, choose;
	cout << "要顯示哪一種三角形?\n1.直角三角形(靠左)\n2.直角三角形(靠右)\n3.倒直角三角形\n請輸入:";
	cin >> choose;
	
    cout << "要顯示多高的三角形:";
    cin >> high;
    
	if(choose == 1){
    	for(; i < high ; i++){
    	
    		int j = 0;
    	
			while(j <= i){
				cout << (char)42;
				j++;
			
    		}
    	cout << "\n";
	}
	}else if(choose == 2){
		for(; i < high; i++) {

			int j = 0, k = 0;

			while(k < high-i){
				cout << (char)22;
				k++;
			}
			while (j <= i) {
				cout << (char)42;
				j++;
			}
			cout << "\n";
		}
	}
	else if (choose == 3) {
			
		while(high > 0){
			int j = high;

			while (j > 0) {
				cout << (char)42;
				j--;
				}
			high--;

		cout << "\n";
		}
	}
	return 0;
}

