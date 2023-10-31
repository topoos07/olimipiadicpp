#include<iostream>
#include<string>
#include<vector>

#define N 4

using namespace std;
 
int main()
{
	int a[N],i, j, temp;

	cout<<"Inserisci gli elementi:\n"; 
	for(i=0;i<N;i++)
		cin>>a[i];
			
	for(j=0;j<N-1;j++)
		for(i=0;i<N-1;i++)
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
	
	cout<<"Array ordinato con bubble sort:";
	for(i=0;i<N;i++)
		cout<<"\t"<<a[i];
		
	return 0;
}
