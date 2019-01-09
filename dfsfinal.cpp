#include<iostream>
#include<stdlib.h>
using namespace std;
void dfs(int m,int n,int *adj[],bool*visited)
{
	visited[m]=true;
	cout<<m;
	
	for(int i=0;i<n;i++)
	{
		if(visited[i]!=1&&adj[m][i]==1)
		{
			dfs(i,n,adj,visited);
		}
	}
}
int main()
{
	int n,src,dest,i,j,m;

	cout<<"enter the no of vetrices";cout<<"\n";
	cin>>n;
		int *adj[n];
	for( i=0;i<n;i++)
	{
		adj[i]=new int [n];
	}
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		adj[i][j]=0;
		}
		
	}
	for( i=0;i<n;i++)
	{
		cout<<"enter the src and destination";
		cin>>src>>dest;
		adj[src][dest]=1;
		adj[dest][src]=1;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<adj[i][j];
			cout<<" ";
		}
		cout<<"\n";
	}
	bool visited[n];
	for(i=0;i<n;i++)
	{
		visited[i]=false;
	}
	cout<<"enter the start vertex";
	cout<<"\n";
	cin>>m;
	dfs(m,n,adj,visited);
}
