/*
Updated problem name

Moving people

Updated problem statement

The people of your city are living in a N x M grid. 
If a person is out of the grid after multiple instructions, 
then that person is not counted in further steps.
*/

#include <stdio.h>

static int parseNum() {
	int c, n;
	int neg = 1;
	n = getchar_unlocked();

	if (n == '-') {
		neg = -1;
		n = getchar_unlocked() - '0';
	} 
	else {
		n = n - '0';
	}
	while ((c = getchar_unlocked()) >= '0')
	n = 10 * n + c - '0';
	n *= neg;
	return n;
}
int grid[1000][1000];

void removeCol(int actualX, int* total, int row, int col) {
	if (actualX > 0) {
		actualX -=1;
	} 
	else {
		actualX += col;
	}
	if (actualX < 0 || actualX >= col) {
		return;
	}
	for (int y = 0; y < row; y++) {
		(*total) -= grid[actualX][y];
		grid[actualX][y] = 0;
	}
}
void removeRow(int actualY, int* total, int row, int col) {
	if (actualY > 0) {
		actualY -=1;
	} 
	else {
		actualY += row;
	}
	if (actualY < 0 || actualY >= row) {
		return;
	}
	for (int x = 0; x < col; x++) {
		(*total) -= grid[x][actualY];
		grid[x][actualY] = 0;
	}
}
int to = 0;

int main() {
	int n, m, q;
	int actualX = 0, actualY = 0;
	int total = 0;
	int xMin = 0;
	int yMin = 0;
	int xMax = 0;
	int yMax = 0;

	n = parseNum();
	m = parseNum();
	q = parseNum();
	// printf("%d %d %d\n", n,m,q);
	// xMax = m - 1;
	// yMax = n - 1;

	for (int y = 0; y < n; y++) {
		for (int x = 0; x < m; x++) {
			grid[x][y] = getchar_unlocked() - '0';
			if (grid[x][y] == 1) {
				total++;
			}
		}
		getchar_unlocked();
	}

	for (int qc = 0; qc < q; qc++) {
		int instruct = parseNum();
		// printf("instruct: %d\n", instruct);
		if (instruct == 1) {
			int tempX = parseNum();
			int tempY = parseNum();
			// printf("%d,%d\n", tempX, tempY);

			actualX += tempX;
			actualY += tempY;

			if (actualX < xMax) {
				for (int r = actualX; r < xMax; r++) {
					removeCol(r, &total, n, m);
				}
				xMax = actualX;
			}

			if (actualY < yMax) {
				for (int r = actualY; r < yMax; r++) {
					removeRow(r, &total, n, m);
				}
				yMax = actualY;
			}

			if (actualX > xMin) {
				for (int r = actualX; r > xMin; r--) {
					removeCol(r, &total, n, m);
				}
				xMin = actualX;
			}

			if (actualY > yMin) {
				for (int r = actualY; r > yMin; r--) {
					removeRow(r, &total, n, m);
				}
				yMin = actualY;
			}
		} 
		else if (instruct == 2) {
			printf("%d\n", total);
		}
		// getchar_unlocked();
	}

	return 0;
} 