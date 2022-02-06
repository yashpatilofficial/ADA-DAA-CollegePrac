#include <stdio.h> 
#include <conio.h> 
#include <stdlib.h> 
#define size 20 
#define TRUE 1 
#define FALSE 0 
int g[size][size]; 
int visit[size]; 
int Q[size]; 
int front, rear; 
int n; 
int main () 
{ 
int v1, v2; 
char ans ='y'; 
void create(),bfs(int v1);  
create(); 
 
printf("The Adjacency Matrix for the graph is \n"); 
for ( v1 = 0; v1 < n; v1++) 
{ 
for ( v2 = 0; v2 < n; v2++) 
printf(" %d ",g[v1][v2]); 
printf("\n"); 
} 
getch(); 
do 
{ 
for ( v1 = 0; v1 < n; v1++) 
visit[v1] = FALSE; 
 
printf("Enter the Vertex from which you want to traverse: "); 
scanf("%d", &v1); 
if ( v1 >= n )
printf("Invalid Vertex\n"); 
else 
{ 
printf("The Breadth First Search of the Graph is\n"); 
bfs(v1); 
getch(); 
}
printf("\nDo you want to traverse from any other node?"); 
ans=getche(); 
}while(ans=='y'); 
exit(0); 
return 0;
} 
void create() 
{ 
int v1, v2; 
char ans='y'; 
printf("\n\t\t This is a Program To Create a Graph"); 
printf("\n\t\t The Display Is In Breadth First Manner"); 
printf("\nEnter no. of nodes "); 
scanf("%d",&n); 
for ( v1 = 0; v1 < n; v1++) 
for ( v2 = 0; v2 < n; v2++) 
g[v1][v2] = FALSE; 
printf("\nEnter the vertices no. starting from 0: "); 
do 
{ 
printf("\nEnter the vertices v1 & v2: "); 
scanf("%d%d", &v1, &v2); 
if ( v1 >= n || v2 >= n) 
printf("Invalid Vertex Value\n " ); 
else 
{ 
g[v1][v2] = TRUE; 
g[v2][v1] = TRUE; 
} 
printf("\n\n Add more edges?(y/n) "); 
ans=getche(); 
}while(ans=='y'); 
} 
void bfs(int v1) 
{
int v2; 
visit[v1] = TRUE; 
front = rear = -1; 
Q[++rear] = v1; 
while ( front != rear ) 
{ 
v1 = Q[++front]; 
printf("%d\n", v1); 
for ( v2 = 0; v2 < n; v2++) 
{ 
if(g[v1][v2] == TRUE && visit[v2] == FALSE) 
{ 
Q[++rear] = v2; 
visit[v2] = TRUE; 
} 
} 
} 
}

