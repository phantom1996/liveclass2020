// ratimaze
#include <iostream>
using namespace std;

bool ratimaze(char maze[][4],int i,int j,int n,int m,int path[][4]){

	//ase condition

	if(i==n-1 && j==m-1){
		//destination

		path[i][j] = 1;

		for(int x=0;x<n;x++){
			for(int y=0;y<m;y++){
				cout<<path[x][y]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return false;
	}

	path[i][j] = 1; 

// right move

	if( i<n && j+1<m && maze[i][j+1]!='x'){
		path[i][j+1] = 1;

		bool kyarightseansaaya =  ratimaze(maze ,i ,j+1,n,m,path);

		if(kyarightseansaaya== true){
			return true;
		}

		
	}


//down

	if(i+1<n  && j<m  && maze[i+1][j]!='x'){
		path[i+1][j] = 1;

		bool kyadownseansaaya = ratimaze(maze,i+1,j,n,m,path);
		if(kyadownseansaaya){
			return true;
		}

	}


	path[i][j] = 0;

	return false;

}






int main()
{

	char maze[4][4] = {
		{'o','o','x','o'},
		{'o','o','x','o'},
		{'x','x','o','o'},
		{'x','o','o','o'}
	};

	int path[4][4] = {0};

	 bool is_path =  ratimaze(maze,0,0,4,4,path);

	 if(is_path){
	 	cout<<"Path exist";
	 }
	 else{
	 	cout<<"Path did not  exist";
	 }
	
	return 0;
}