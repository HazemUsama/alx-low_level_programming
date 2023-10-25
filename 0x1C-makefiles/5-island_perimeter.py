#!/usr/bin/python3

def island_perimeter(grid):
        ans = 0
        row = [1, 0, -1, 0]
        column = [0, 1, 0, -1]

        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if grid[i][j] == 0:
                    continue
                for k in range(4):
                    try:
                        r = i + row[k]
                        c = j + column[k]
                        if grid[r][c] == 0 or r < 0 or c < 0:
                            ans += 1
                    except:
                        ans += 1
        return ans
