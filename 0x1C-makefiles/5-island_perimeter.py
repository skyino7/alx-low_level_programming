#!/usr/bin/python3

def island_perimeter(grid):
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if i == len(grid)-1 or grid[i + 1][j] == 0:
                    perimeter += 1
                if j == len(grid[i])-1 or grid[i][j + 1] == 0:
                    perimeter += 1

    return perimeter
