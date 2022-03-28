#include "Solution463.h"


int Solution463::islandPerimeter(std::vector<std::vector<int>>& grid) {
	int row = grid.size();
	int col = grid.at(0).size();

	int land_num = 0;     // ͳ��½�صĸ���
	int border_row = 0;   // ���������ڵĸ���
	int border_col = 0;   // ���������ڵĸ���

	// �����ϵ�����
	for (int i = 0; i < row; ++i) {
		int first_val = grid[i][0];
		if (first_val == 1) {
			land_num++;
		}
		for (int j = 1; j < col; ++j) {
			if (grid[i][j] == 0) {
				first_val = grid[i][j];    // continue֮ǰҲӦ�ðѵ�һ��ֵ������
				continue;
			}
			else {
				land_num++;
				if (first_val == grid[i][j]) {
					border_row++;
				}
			}
			first_val = grid[i][j];
		}
	}

	// �����ϵ�����
	for (int i = 0; i < col; ++i) {
		int first_val = grid[0][i];
		for (int j = 1; j < row; ++j) {
			if (grid[j][i] == 0) {
				first_val = grid[j][i];    // continue֮ǰҲӦ�ðѵ�һ��ֵ������
				continue;
			}
			else {
				if (first_val == grid[j][i]) {
					border_col++;
				}
			}
			first_val = grid[j][i];
		}
	}

	int res = land_num * 4 - ((border_col + border_row) - 1) * 2;
	return res;
}
