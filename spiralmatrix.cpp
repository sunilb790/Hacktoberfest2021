#include<iostream>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int a[n][m];
	cout<<"enter the matrix"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cin>>a[i][j];
		
	}
		cout<<"print matrix"<<endl;
	
		for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		
			cout<<a[i][j]<<" ";
	}
		cout<<endl;
	}
cout<<endl;

	int col,row,r_start=0,r_end=n-1,c_start=0,c_end=m-1;
	while(r_start<=r_end && c_start<=c_end)
	{
		//for  row
		for(col=c_start;col<=c_end;col++)
		
			
				cout<<a[r_start][col]<<" ";
	
			r_start++;
			//for  colum
				for(row=r_start;row<=r_end;row++)
			cout<<a[c_end][row]<<" ";
		
			c_end--;
				for(col=c_end;col>=c_start;col--)
			cout<<a[r_end][col]<<" ";
		
			r_end--;
				for(row=r_end;row>=r_start;row--)
	
					cout<<a[c_start][row]<<" ";
	
			c_start++;
	}
	
	return 0;
}
