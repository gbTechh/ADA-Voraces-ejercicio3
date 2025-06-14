#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
	 
int maxContenedores(int k, vector<int> &arr){
	sort(arr.begin(), arr.end());
	if (arr.size() == 2) return 2;
	int c = 0;
	
	for (size_t i = 0; i < arr.size(); ++i) {
		if(k - arr[i] > 0) {
			k = k - arr[i];
			c++;
		}
	}	
	return c;
}

int maxToneladas(int k , vector<int> &arr){
	sort(arr.begin(), arr.end());
	if (arr.size() == 2) return 2;
	int c = 0;
	
	for (int i = arr.size() - 1; i >= 0; --i) {
		if(k - arr[i] >= 0) {
			k = k - arr[i];
			c = c + arr[i];
		}
	}	
	return c;
}
	
int main() {
	//1.a
	int k = 0;
	cin >> k;
	vector<int> arr = {1,2,3,4,5,6};
	int n = maxContenedores(k, arr);
	cout<<n<<"\n";
	
	//1.b
	k = 0;
	cin >> k;
	vector<int> arr2 = {1,2,3,4,5,6};
	int n2 = maxToneladas(k, arr2);
	cout<<n2<<"\n";
	
	return 0;
}


