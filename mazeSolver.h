#include <vector>
using namespace std;
class mazeSolver
{
	public:
		mazeSolver(const vector<vector<char>>& maze);
		void printMaze();
		int findStartX();
		int findStartY();
		int shortestPath(int row, int col);
	private:
		vector<vector<char>> maze;
		int counter;
		int min;
};