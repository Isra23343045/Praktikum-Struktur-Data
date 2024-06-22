#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 5

struct Vertex
{
      char label;
      bool visited;
};

//stack variables

int stack[MAX];
int top = -1;

//graph variables

//array of vertices
struct Vertex* IstVertices[MAX];

//adjaacency matrix
int adjMatrix[MAX][MAX];

//vertex count
int vertexCount = 0;

//stack functions

void push(int item)
{
      stack[++top] = item;
}

int pop()
{
      return stack[top--];
}

int peek()
{
      return stack[top];
}

bool isStackEmpty()
{
      return top == -1;
}

//graph functions

//add vertex to the vertex list
void addVertex(char label)
{
      struct Vertex* vertex = (struct Vertex*) malloc(sizeof(struct Vertex));
      vertex->label = label;
      vertex->visited = false;
      IstVertices[vertexCount++] = vertex;
}

// add edge to edge array
void addEdge(int start, int end)
{
      adjMatrix[start][end] = 1;
      adjMatrix[end][start] = 1;
}

//display the vertex
void displayVertex(int vertexindex)
{
      printf("%c",IstVertices[vertexindex]->label);
}

//get the adjacent unvisited vertex
int getAdjUnvisitedVertex(int vertexIndex)
{
      int i;
      for(i = 0; i < vertexCount; i++)
      {
            if(adjMatrix[vertexIndex][i] == 1 && IstVertices[i]->visited == false)
            {
                  return i;
            }
      }

      return -1;
}

void depthFirstSearch()
{
      int i;

      //mark first node as visited
      IstVertices[0]->visited = true;

      //display the vertex
      displayVertex(0);

      //push vertex index in stack
      push(0);

      while(!isStackEmpty())
      {
            //get the unvisited vertex of vertx which is at top of the stack
            int unvisitedVertex = getAdjUnvisitedVertex(peek());

            //no adjacent vertex found
            if(unvisitedVertex == -1)
            {
                  pop();
            }
            else
            {
                  IstVertices[unvisitedVertex]->visited = true;
                  displayVertex(unvisitedVertex);
                  push(unvisitedVertex);
            }
      }

      //stack is empty, search is complete, reset the visited flag
      for(i = 0; i < vertexCount; i++)
      {
            IstVertices[i]->visited = false;
      }
}

int main()
{
      int i,j;

      for(i = 0; i < MAX; i++) // set adjacency
      {
            for(j = 0; j < MAX; j++)
            {
                  adjMatrix[i][j] = 0;
            }
      }

      addVertex('S'); //0
      addVertex('A'); //1
      addVertex('B'); //2
      addVertex('C'); //3
      addVertex('D'); //4

      addEdge(0, 1); // S - A
      addEdge(0, 2); // S - B
      addEdge(0, 3); // S - C
      addEdge(1, 4); // A - D
      addEdge(2, 4); // B - D
      addEdge(3, 4); // C - D

      printf("Depth First search: ");
      depthFirstSearch();

      return 0;
}