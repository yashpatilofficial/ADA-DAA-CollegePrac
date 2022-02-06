#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		if (arr[mid] == x)
			return mid;

		
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

	
		return binarySearch(arr, mid + 1, r, x);
	}

	return -1;
}

int main(void)
{
	for(;;){
	int n,x;
	cout<<"\nEnter the number of elements: "<<endl;
	cin>>n;
	int arr[n];

	cout<<"Enter the elements: "<<endl;
	
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"Enter the element to find: "<<endl;
	cin>>x;
	
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1) ? cout << "\nElement is not present in array\n"
				: cout << "\nElement is present at index " << result;
}
	return 0;
}
