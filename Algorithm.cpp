#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <queue>
#define SIZE 4
using namespace std;

class Maze
{
private:
	int x;
	int y;
	bool visited[SIZE][SIZE];
	vector<vector<int>> map = { {1,1,1,1},{ 0,0,0,1 },{1,1,1,1},{1,0,0,1} };
public:
	Maze()
	{
		for (int i = 0; i < SIZE; i++)
		{
			for (int j = 0; j < SIZE; j++)
			{
				visited[i][j] = false;
			}
		}


	}

	bool arrive(int x, int y)
	{
	
	

		if (visited[y][x])
		{
			return false;
		}

		if (x == 3 && y == 3)
		{
			cout << "Yes" << endl;
			return true;
		}


		if (map[y][x] < map[y - 1][x])
		{
			if (x < 0 || y < 0)
			{
				return false;
			}
		}
		if (map[y][x] > map[y + 1][x])
		{

		}
		if (map[y][x] > map[y][x - 1])
		{

		}
		if (map[y][x] > map[y][x + 1])
		{



		}

		else
		{
			cout << "No" << endl;
			return false;
		}
	}

	void showmap()
	{
		for (int i = 0; i < SIZE; i++)
		{
			for (int j = 0; j < SIZE; j++)
			{
				cout << map[i][j];
			}
			cout << endl;
		}
	}
};

int main()
{

	Maze maze;

	maze.showmap();
	//maze.arrive(0, 0);

	return 0; 
}

