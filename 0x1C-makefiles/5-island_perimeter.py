#!/usr/bin/python3
"""Find the perimeter of grid."""


def island_perimeter(grid):
    """Find perimeter."""
    perimeter = 0
    nc = 4
    for idx, row in enumerate(grid):
        for idy, column in enumerate(row):
            nc = 4
            if column == 1:
                if idx > 0 and grid[idx - 1][idy] == 1:
                    nc -= 1
                if idy < len(grid[idx]) - 1 and grid[idx][idy + 1] == 1:
                    nc -= 1
                if idx < len(grid) - 1 and grid[idx + 1][idy] == 1:
                    nc -= 1
                if idy > 0 and grid[idx][idy - 1] == 1:
                    nc -= 1
                perimeter += nc
    return perimeter
