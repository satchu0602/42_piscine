/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skameyam <skameyam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 03:12:33 by skameyam          #+#    #+#             */
/*   Updated: 2023/03/02 21:46:17 by skameyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_zeroone(int board[10][10]);
int		is_safe(int board[10][10], int row, int col);
void	solve(int board[10][10], int col, int *res);
void	print_ans(int board[10][10]);

int	ft_ten_queens_puzzle(void) {
	int	board[10][10];
	int	res;

	res = 0;
	ft_zeroone(board);
	solve(board, 0, &res);
	return (res);
}

void	solve(int board[10][10], int col, int *res) {
	int	i;

	if (col >= 10)
	{
		print_ans(board);
		*res = *res + 1;
		return ;
	}
	i = 0;
	while (i < 10)
	{
		if (is_safe(board, i, col) == 1)
		{
			board[i][col] = 1;
			solve(board, col + 1, res);
		}
		board[i][col] = 0;
		i++;
	}
}

int	is_safe(int board[10][10], int row, int col) {
	int	i;
	int	j;

	j = 0;
	while (j < col)
	{
		if (board[row][j] == 1)
			return (0);
		j++;
	}
	i = row - 1;
	j = col - 1;
	while (i >= 0 && j >= 0)
	{
		if (board[i--][j--] == 1)
			return (0);
	}
	i = row + 1;
	j = col - 1;
	while (i < 10 && j >= 0)
	{
		if (board[i++][j--] == 1)
			return (0);
	}
	return (1);
}

void	ft_zeroone(int board[10][10]) {
	int	i;
	int	j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	print_ans(int board[10][10]) {
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			c = '0' + j;
			if (board[i][j] == 1)
				write(1, &c, 1);
			j++;
		}
		i++;
	}
	write(1, &"\n", 1);
}

int main()
{
	ft_ten_queens_puzzle();
}
