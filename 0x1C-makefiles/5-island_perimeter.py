#!/usr/bin/python3
""" Island Perimeter """

def island_perimeter(grid):
    """ find the perimeter of the island """
    size = len(grid)
    length = len(grid[0])
    i = j = 0
    perimeter = 0
    total = 0
    for i in range(size):
        for j in range(length):
            if grid[i][j] == 1:
                if grid[i][j-1] == 0:
                    perimeter += 1
                if grid[i][j+1] == 0:
                    perimeter += 1
                if grid[i-1][j] == 0:
                    perimeter += 1
                if grid[i+1][j] == 0:
                    perimeter += 1
                total += 1
    if total == 0:
        return 0
    else:
        return perimeter
