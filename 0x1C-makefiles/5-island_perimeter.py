#!/usr/bin/python3
"""Module that calculates the perimeter of an island
"""


def water_areas(grid, icell, j):
    """Returns the number of water areas in a grid
    """

    num = 0
    if cell <= 0 or not grid[cell - 1][j]:
        wa += 1
    if j <= 0 or not grid[cell][j - 1]:
        wa += 1
    if j >= len(grid[cell]) - 1 or not grid[cell][j + 1]:
        wa += 1
    if cell >= len(grid) - 1 or not grid[cell + 1][j]:
        wa += 1
    return wa


def island_perimeter(grid):
    """Returns the perimeter of the island in grid."""

    perimeter = 0
    for cell in range(len(grid)):
        for j in range(len(grid[cell])):
            if grid[cell][j]:
                perimeter += water_areas(grid, cell, j)

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

