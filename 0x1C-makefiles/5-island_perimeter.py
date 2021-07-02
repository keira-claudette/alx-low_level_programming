#!/usr/bin/python3
""" This module computes the perimeter of an island"""


def island_perimeter(grid):
    """ island_perimeter:
                    Args: grid, a list of list of integers
                    Return: perimeter of the island described in grid
    """

    n_cells = 0
    list_1 = []

    for items in range(len(grid)):
        if items == 0 or items == len(grid):
            continue
        for cell in range(len(grid[items])):
            if grid[items][cell] == 1:
                if grid[items][cell + 1] == 0:
                    if grid[items][cell - 1] == 1:
                        n_cells = n_cells + 1
                    else:
                        continue
                else:
                    list_1.append(cell)
                    n_cells = n_cells + 1
            else:
                continue
    perimeter = 4 * n_cells
    return perimeter
