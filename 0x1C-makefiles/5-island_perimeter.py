#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Technical interview preparation.

    The params conatin 0 = water, 1 = land.

    Args:
        list: lists, every list can have ints.
    Returns:
        The new island :).
    """
    ard = len(grid[0])
    tol = len(grid)
    hafa = 0
    hagm = 0

    for i in range(tol):
        for j in range(ard):
            if grid[i][j] == 1:
                hagm += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    hafa += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    hafa += 1
    return hagm * 4 - hafa * 2
