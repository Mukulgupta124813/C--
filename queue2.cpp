
#include <bits/stdc++.h>
using namespace std;

void printKMax(int arr[], int n, int k)
{
	std::deque<int> Qi(k);

	int i;
	for (i = 0; i < k; ++i)
	{
		while ((!Qi.empty()) && arr[i] >=arr[Qi.back()])
			Qi.pop_back();
		Qi.push_back(i);
	}
	for (; i < n; ++i){
    cout << arr[Qi.front()] << " ";
    while ((!Qi.empty()) && Qi.front() <=i - k)
		Qi.pop_front();
    while ((!Qi.empty()) && arr[i] >= arr[Qi.back()])
        Qi.pop_back();
    Qi.push_back(i);
	}

	cout << arr[Qi.front()];
}
int main()
{
	int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
	int k ;
    cin>>k;
	printKMax(arr, n, k);
	return 0;
}
