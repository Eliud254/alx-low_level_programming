#!/usr/bin/python3
"""
creating the perimeter of an island
"""


def island_perimeter(grid):
    """
    Compute the perimeter of the island described in the grid.

    Args:
    - grid: a list of list of integers
        0 represents a water zone
        1 represents a land zone

    Returns:
    - int: the perimeter of the island
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
