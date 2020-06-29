// ms
#include<iostream>
#include<algorithm>
using namespace std;




void merge(int *a, int *x, int *y, int s,int e,int mid){
    int i=s;
    int j=mid+1; //start of y
    int k=s;

	while(i<=mid && j<=e){
		if(x[i]<y[j]){
			a[k]=x[i];
			k++;
			i++;
		}
		else{
			a[k]=y[j];
			k++;
			j++;
		}
	}
	while(i<=mid){
		a[k]=x[i]; //when x array is not finished
		i++;
		k++;
	}
	//when y array is not finished
	while(j<=e){
		a[k]=y[j];
		k++;
		j++;
	}
	return;
}
void mergesort(int *a,int s, int e, int n){

	//base
	if(s>=e){
		return;
	}
	//rec
int x[2001];
int y[2001];
	int mid=(s+e)/2;
	for(int i=s;i<=mid;i++){
		x[i]=a[i];
	}

	for(int i=mid+1;i<=e;i++){
		y[i]=a[i];
	}

	//rec ka kaam
	mergesort(x,s,mid,n);
	mergesort(y,mid+1,e,n);

	//merge 2 sorted arrays
	merge(a,x,y,s,e,mid);
}
int main() {
	int n;
	cin>>n;
	int a[2001];
	for(int m=0;m<n;m++){
		cin>>a[m];
	}

    //sort(a,a+n);
	mergesort(a,0,n-1,n);

	
	for(int m=0;m<n;m++){
		cout<<a[m]<<" ";
	}
	return 0;
}