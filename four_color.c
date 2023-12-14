#include<stdio.h>
#include<stdlib.h>
#define V 4

int isSafe(int v,int graph[V][V],int color[],int c)
{
  for(int i=0;i<V;i++)
  {
    if(graph[V][i]&&color[i]==c)
    {
      return 0;
    }
  }

  return 1;
}

int graphColoringUtil(int graph[V][V],int m,int color[],int v)
{
  if(v==V)
  {
    return 1;
  }

  for(int c=1;c<=m;c++)
  {
    if(isSafe(v,graph,color,c))
    {
      color[v]=c;

      if(graphColoringUtil(graph,m,color,v+1))
      {
        return 1;
      }

      color[V]=0;
    }

  }

   return 0;
}

void graphColoring(int graph[V][V],int m)
{
  int color[V];

  for(int i=0;i<V;i++)
  {

    color[i]=0;

  }

  if(graphColoringUtil(graph,m,color,0))
  {

    printf("可以使用%d种颜色解决四色问题：\n",m);

    for(int i=0;i<V;i++)
    {
      printf("顶点%d->颜色%d\n",i,color[i]);
    }

  }
  else{
    printf("无法解决四射问题！\n");
  }
}

int main()
{
  int graph[V][V]={{0,1,1,1},{1,0,1,0},{1,1,0,1},{1,0,1,0}};

  int m=4;

  graphColoring(graph,m);

  system("pause");

  return 0;
}