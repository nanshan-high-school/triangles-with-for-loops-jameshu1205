#include <iostream>
using namespace std;
int main(){
    int i = 0, high, choose;
	cout << "�n��ܭ��@�ؤT����?\n1.�����T����(�a��)\n2.�����T����(�a�k)\n3.�˪����T����\n�п�J:";
	cin >> choose;
	
    cout << "�n��ܦh�����T����:";
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

