#!/usr/bin/python3
""" This module computes the perimeter of an island"""


def island_perimeter(grid):
    """ island_perimeter:
                    Args: grid, a list of list of integers
                    Return: perimeter of the island described in grid
    """

    n_cells = 0
    list_1 = []

    for i in range(len(grid)):
        if i == 0 or i == len(grid):
            continue
        for c in range(len(grid[i])):
            if grid[i][c] == 1:
                if grid[i][c + 1] == 0:
                    if grid[i][c - 1] == 1:
                        list_1.append(c)
                        n_cells = n_cells + 1
                    elif grid[i + 1][c] == 1 and grid[i - 1][c] and grid[i][c + 1] == 1:
                        list_1.append(c)
                        n_cells = n_cells + 1
                        break
                    elif grid[i][c] == 1 and grid[i - 1][c] and grid[i][c + 1] == 1:
                        break
                    else:
                        continue
                else:
                    list_1.append(c)
                    n_cells = n_cells + 1
            else:
                continue
    perimeter = 4 * n_cells
    return perimeter
