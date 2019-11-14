#!/usr/bin/python3


def water(grid, i, j):
    c = 0
    if i <= 0 or not grid[i - 1][j]:
        c += 1
    if j <= 0 or not grid[i][j - 1]:
        c += 1
    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        c += 1
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        c += 1
    return c


def island_perimeter(grid):
    p = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                p += water(grid, i, j)
    return p
