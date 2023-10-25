#!/usr/bin/python3
"""Module that calculates the perimeter of an island in a grid."""


def island_perimeter(grid):
    if not grid:
        return 0

    perimeter = 0

    def dfs(i, j):
        if i < 0 or i >= len(grid) or j < 0 or j >= len(grid[0]) or grid[i][j] == 0:
            return 1
        if grid[i][j] == -1:
            return 0

        grid[i][j] = -1  # Mark as visited
        neighbors = [(1, 0), (-1, 0), (0, 1), (0, -1)]

        for di, dj in neighbors:
            perimeter += dfs(i + di, j + dj)

        return 0

    for i in range(len(grid)):
        for j in range(len(grid[i]):
            if grid[i][j] == 1:
                perimeter += dfs(i, j)

    return perimeter
