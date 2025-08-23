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
	vector<vector<bool>> visited;
	vector<vector<int>> map;
public:
	Maze(int x, int y) : x(x), y(y), visited(y, vector<bool>(x, false)), map(y, vector<int>(x, 1))
	{

		for (int i = 0; i < y; i++)
		{
			for (int j = 0; j < x; j++)
			{

				if (i >= 1 && i < y - 2)
				{
					for (int k = 0; k < x - 1; k++)
					{
						map[i][k] = 0;
					}

				}
				if (i == y - 1)
				{
					for (int f = 1; f < x - 1; f++)
					{
						map[i][f] = 0;
					}
				}
			}
		}


	}

	bool arrive(int a, int b)
	{
		if (a < 0 || b < 0 || a >= y || b >= x || map[a][b] == 0 || visited[a][b])
		{
			return false;
		}

		visited[a][b] = true;


		if (a == y - 1 && b == x - 1)
		{
			cout << "Yes" << endl;
			return true;
		}

		if (arrive(a - 1, b))
		{
			return true;
		}
		if (arrive(a + 1, b))
		{
			return true;
		}
		if (arrive(a, b - 1))
		{
			return true;
		}
		if (arrive(a, b + 1))
		{
			return true;
		}


		return false;
	}

	void print()
	{
		for (int i = 0; i < y; i++)
		{
			for (int j = 0; j < x; j++)
			{
				cout << map[i][j];
			}
			cout << endl;
		}
	}

};

int main()
{



	Maze maze(5, 5);
	maze.print();
	if (!maze.arrive(0, 0))
	{
		cout << "No" << endl;

	}
	return 0;
}

