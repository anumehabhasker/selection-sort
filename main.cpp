#include<iostream>
#include<algorithm>

using namespace std;

//find the smallest element and do a linear scan and move it to the front. Then find the second smallest and move it, again doing a linear 
//scan.Continue till all sorted. 

int main()
{
	int arr[]={2,1,4,7,6,3,5};
	int size=7;

	//print original
	cout<<"\n original array \n";
	for(int i=0; i<size;i++)
	{
		cout<<" "<<arr[i]<<"\t";

	}

	//selection sort
	for(int i=0; i<size-1; i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
				swap(arr[i],arr[j]);
		}
	}

	//print new array
	cout<<"\n selection sorted array \n";
	for(int i=0; i<size;i++)
	{
		cout<<" "<<arr[i]<<"\t";

	}

	return 0;

}
