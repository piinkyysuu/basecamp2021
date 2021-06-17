/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 09:53:42 by thle              #+#    #+#             */
/*   Updated: 2021/06/06 16:41:41 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> //rmb to delete
#include <stdlib.h> 

void	ft_putstr(char *str);

void	testing_str(char **sudoku, char **sudoku_checked)
{
	int index = 0;
	while (sudoku[index] != '\0')
	{
		printf("%s\n", sudoku[index]);
		index++;
	}
	printf("\n");
	
	index = 0;
	while (sudoku_checked[index]!= '\0')
	{
		printf("%s\n", sudoku_checked[index]);
		index++;
	}
	printf("\n");
}

void print(int **sudoku, int row_size, int col_size)
{
     for (int i = 0; i < row_size; i++)
      {
        for (int j = 0; j < col_size; j++)
            printf("%d ",sudoku[i][j]);
         printf("\n");
       }
}

int		is_safe(int **sudoku, int row, int col, int value)
{
	int count;

	count = 0;
	while (count < 9)
	{
		if (count == col)
			count++;
		if (sudoku[count][col] == value)
			return (0);
		count++;
	}
	count = 0;
	while (count < 9)
	{
		if (count == row)
			count++;
		if (sudoku[row][count] == value)
			return (0);
		count++;
	}
	return (1); 
}

int solveSuduko(int **grid, int row, int col, int row_size, int col_size)
{     
    // Check if we have reached the 8th row
    // and 9th column (0
    // indexed matrix) , we are
    // returning true to avoid
    // further backtracking
    if (row == row_size - 1 && col == col_size - 1)
        return 1;
 
    //  Check if column value  becomes 9 ,
    //  we move to next row and
    //  column start from 0
    if (col == col_size - 1)
    {
        row++;
        col = 0;
    }
   
    // Check if the current position
    // of the grid already contains
    // value >0, we iterate for next column
    if (grid[row][col] > 0)
	{
		return solveSuduko(grid, row, col + 1, row_size, col_size);
	}
 
    for (int num = 1; num <= 9; num++)
    {
         
        // Check if it is safe to place
        // the num (1-9)  in the
        // given row ,col  ->we move to next column
        if (isSafe(grid, row, col, num)==1)
        {
            /* assigning the num in the
               current (row,col)
               position of the grid
               and assuming our assined num
               in the position
               is correct     */
            grid[row][col] = num;
           
            //  Checking for next possibility with next
            //  column
            if (solveSuduko(grid, row, col + 1, row_size, col_size)==1)
                return 1;
        }
       
        // Removing the assigned num ,
        // since our assumption
        // was wrong , and we go for next
        // assumption with
        // diff num value
        grid[row][col] = 0;
    }
    return 0;
}

int		main(int argc, char **argv)
{
	//printf("argv %s\n", argv[1]);
	int **sudoku;
	char **sudoku_checked;
	int row_size = 0;
	int col_size = 0;
	sudoku = malloc(200 * sizeof(int*));

	int index = 1;
	int a = 0;
	while(index < argc)
	{
		row_size++;
		col_size=0;
		a = 0;
		sudoku[index-1] = malloc(9 * sizeof(int));
		while (argv[index][a] != '\0')
		{
			col_size++;
			if (argv[index][a] >= '1' && argv[index][a] <= '9')
			{
				sudoku[index-1][a] = argv[index][a] - '0';
			}
			else
			{	
				sudoku[index-1][a] = 0;
			}
			a++;
		}
		//sudoku[index-1][a] = '\0';
		index++;
	}
	sudoku[index-1] = NULL;

	
	//printf("colsize: %d\n", col_size);
	if (solveSuduko(sudoku, 0, 0, row_size, col_size)==1)
        print(sudoku, row_size, col_size);
    else
        printf("No solution exists");
	
	//printf("sudoku %d\n", sudoku[7][8]);
	return (0);
}

