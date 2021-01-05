#include <iostream>
#define V 5
using namespace std;

class mColoring
{
private:
    bool graph[V][V];
    //
    bool isValid(int v, int color[], int c)
    {
        for (int i = 0; i < V; i++)
            if (graph[v][i] && c == color[i])
                return false;
        return true;
    }

    bool graphColoring(int colors, int color[], int vertex)
    {
        if (vertex == V) //when all vertices are considered
            return true;

        for (int col = 1; col <= colors; col++)
        {
            if (isValid(vertex, color, col))
            { //check whether color col is valid or not
                color[vertex] = col;
                //go for additional vertices
                if (graphColoring(colors, color, vertex + 1) == true) 
                    return true;

                color[vertex] = 0;
            }
        }
        return false; //when no colors can be assigned
    }
    void showColors(int color[])
    {
        cout << "Assigned Colors are: " << endl;
        for (int i = 0; i < V; i++)
            cout << color[i] << " ";
        cout << endl;
    }

public:
    mColoring(bool graph[V][V])
    {
        for (size_t i = 0; i < V; i++)
        {
            for (size_t j = 0; j < V; j++)
            {
                this->graph[i][j] = graph[i][j];
            }
        }
    }

    bool checkSolution(int m)
    {
        int *color = new int[V]; //make color matrix for each vertex

        for (int i = 0; i < V; i++)
            color[i] = 0; //initially set to 0

        if (graphColoring(m, color, 0) == false)
        { //for vertex 0 check graph coloring
            cout << "Solution does not exist.";
            return false;
        }
        showColors(color);
        return true;
    }
};

int main()
{
    std::cout << "Enter the number of colors (<=5)" << std::endl;
    int num;
    std::cin >> num;
    std::cout << "Enter the 5x5 matrix for vertices" << std::endl;
    bool ver[V][V];
    for (size_t i = 0; i < V; i++)
    {
        for (size_t j = 0; j < V; j++)
        {
            std::cin >> ver[i][j];
        }
    }

    mColoring color(ver);
    color.checkSolution(num);
}