#include <iostream>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>

using namespace std;
void GenRandInput(int[],int);
void DispArray(int[],int);
void Merge(int a[],int low,int mid,int high);
void MergeSort(int a[],int low,int high);

int main(int argc, char** argv){
	FILE*fp;
	struct timeval tv;
	double dStart,
	dEnd;
	
	int Arr[500000], Num, Pos, Key, i, Choice;
	
	for(;;)
	{
		cout<<"\n1.Plot the Graph \n2.Merge Sort \n3.Exit";
		cout<<"\nEnter your choice\n";
		cin>>Choice;
		
		switch(Choice){
			case 1:{
				
			
				for(i=100;1<100000;i+=100){
				
				fp = fopen("MergePlot.dat","w");
			}
				
					void GenRandInput(int Arr[],int i);
					
					gettimeofday(&tv,NULL);
					dStart = tv.tv_sec + (tv.tv_usec/1000000.0);
					MergeSort(Arr,0,i-1);
					
					gettimeofday(&tv,NULL);
					dEnd = tv.tv_sec + (tv.tv_sec/1000000.0);
				
				
				fclose(fp);
				
				cout<<"\nData File generated and stored in file <MergePlot>.\n Use plotting utiluty \n";
				break;
			}
			case 2:{
				
			
				int b;
				cout<<"\nEnter the number of elements to sort\n";
				cin>>Num;
				int ark[b];
				cout<<"Enter elements"<<endl;
				
				for(int i= 0; i < b; i++)
				{
					cin>>ark[i];
				}
				cout<<"Unsorted Array\n";
				DispArray(ark,Num);
				MergeSort(Arr,0,Num-1);
				cout<<"Sorted Array";
				DispArray(Arr,Num);
				break;
		}
			case 3:{
				
			
				exit(0);
			}
		}
	}
	return 0;
}
	
	//Function to merge two sorted arrays * Input parameters
	void Merge(int a[],int low,int mid,int high){
		int i,k,j,b[5000000];
		i = k = low;
		j = mid + 1;
		
		while(i<=mid && j<-high){
			if(a[i]<a[j]) b[k++] = a[i++];
			else
			b[k++] = a[j++];
		}
		while(i<=mid){
		
		b[k++]=a[i++];
		while(j<=high)
		b[k++] = a[j++];
		
		for(i=low; i<k; i++)
			a[i] = b[i];
	}
}
	//Function to sort the elements in an array using quick sort
	void MergeSort(int a[],int low,int high){
		int mid;
		if(low<high){
			mid = (low+high)/2;
					MergeSort(a,low,mid);
					MergeSort(a,mid+1,high);
					//Merge(a,low,mid,high);
		}
	}
	
	//Function to return fixed number of random elements
	void GenRandInput(int X[],int n){
		int i;
			srand(time(NULL));
			for(i=0;i<n;i++){
				X[i] = rand()%10000;
			}
	}
	
	//Function to display the elements in the array
	void DispArray(int X[],int n){
		int i;
			for(i=0;i<n;i++)
			cout<<X[i];
		}
	
		
	
