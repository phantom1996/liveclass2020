// spiralpr
#include <iostream>
using namespace std;

void inputarray(int a[][500],int r,int c){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
	}
}
void spiralpr(int a[][500],int r,int c){
	int sr=0;
	int sc=0;
	int er=r-1;
	int ec=c-1;

	int totalelementprinted = 0;

	while(totalelementprinted < r*c){
		//pehla loop

		for(int i=sc ;i <=ec ;i++){
			cout<<a[sr][i]<<" ";
			totalelementprinted++;
		}
		sr++;

		if(totalelementprinted == r*c){
			break;
		}

		//2 loop

		for(int i=sr ;i<=er;i++){
			cout<<a[i][ec]<<" ";
			totalelementprinted++;
		}
		ec--;
		
		if(totalelementprinted == r*c){
			break;
		}
		//3llop

		for(int i=ec; i>=sc; i--){
			cout<<a[er][i]<<" ";
			totalelementprinted++;
		}
		er--;
		
		if(totalelementprinted == r*c){
			break;
		}
		//4loop
		for(int i=er;i>=sr;i--){
			cout<<a[i][sc]<<" ";
			totalelementprinted++;
		}
		sc++;

	}

}


int main()
{

	int a[500][500],r,c;
	
	cin>>r>>c;

	inputarray(a,r,c);

	spiralpr(a,r,c);

	
	return 0;
}