#!/usr/bin/python3
"""Module that calculates the perimeter of an island in a grid
"""


def water_area(grid, m, n):
    """Returns the number of water neighbors in a grid
    """
    num = 0
    if m > 0 and not grid[m - 1][n]:
        num += 1
    if j > 0 and not grid[m][n - 1]:
        num += 1
    if n < len(grid[m]) - 1 and not grid[m][n + 1]:
        num += 1
    if m < len(grid) - 1 and not grid[m + 1][n]:
        num += 1
    return num

def island_perimeter(grid):
    """Returns the perimeter of island"""
    perimeter = 0
    for cell in range(len(grid)):
        for j in range(len(grid[cell])):
            if grid[cell][j]:
                perimeter += water_area(grid, cell, j)

    return perimeter


if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print("The perimeter of the island is:", island_perimeter(grid))
