#include <unistd.h>

int *grid[4][11][4];

grid[3][0][] = "1234";		// No sé si esto que quiero hacer aquí es donde se necesitaría el malloc... 
grid[2][0][] = "2134";
grid[2][1][] = "2314";
grid[2][2][] = "2341";
grid[2][3][] = "1243";
grid[2][4][] = "1324";
grid[2][5][] = "1342";
grid[1][0][] = "1423";
grid[1][1][] = "1432";
grid[1][2][] = "2143";
grid[1][3][] = "2413";
grid[1][4][] = "2431";
grid[1][5][] = "3124";
grid[1][6][] = "3214";
grid[1][7][] = "3142";
grid[1][8][] = "3241";
grid[1][9][] = "3412";
grid[1][10][] = "3421";
grid[0][0][] = "4123";
grid[0][1][] = "4132";
grid[0][2][] = "4213";
grid[0][3][] = "4231";
grid[0][4][] = "4312";
grid[0][5][] = "4321";

int	up;
int	down;
int left;
int	right;
int	optionup;
int	optiondown;
int	optionleft;
int	optionright;
int	x;
int size;
int	input;

up = '0';
down = '4';
left = '0';
right = '4';
optionup = '0';
x = '0';
size = '3'
input = '1';
ffour[0] = up;
ffour[1] = down;
ffour[2] = left;
ffour[3] = right;

int	upnbr(int *ft_col[x])
{
	if(ft_col[up] = 1)
	{
		return(0);
	}
	else if(ft_col[up] = 2)
	{
		return(1);
	}
	else if(ft_col[up] = 3)
	{
		return(2);
	}
	else
	{
		return(3);
	}
}

int	downnbr(int *ft_col[xx])
{
	if(ft_col[down] = 1)
	{
		return(0);
	}
	else if(ft_col[down] = 2)
	{
		return(1);
	}
	else if(ft_col[down] = 3)
	{
		return(2);
	}
	else
	{
		return(3);
	}
}

int	leftnbr(int *ft_row[y])
	if(ft_row[left] = 1)
	{
		return(0);
	}
	else if(ft_row[left] = 2)
	{
		return(1);
	}
	else if(ft_row[left] = 3)
	{
		return(2);
	}
	else
	{
		return(3);
	}
}

int	rightnbr(int *ft_row[yy])
	if(ft_row[right] = 1)
	{
		return(0);
	}
	else if(ft_row[right] = 2)
	{
		return(1);
	}
	else if(ft_row[right] = 3)
	{
		return(2);
	}
	else
	{
		return(3);
	}
}

int	nbrdetection(int x, int y)
{
	int	xx;

	xx = 3 - x;
	optiondown = '0';
	if(grid[upnbr][optionup][x] = grid[downnbr][optiondown][xx])
		{
		optionleft = '0';
		if(grid[upnbr][optionup][x] == grid[leftnbr][optionleft][y])
			{
				int	yy;

				yy = 3 - y;
				optionright = '0';
			if(grid[upnbr][optionup][x] == grid[rightnbr][optionright][yy])
				{
				return (grid[upnbr][optionup][x])
				}
			optionright++;
			}
		optionleft++;
		}
	optiondown++;
	}
optionup++;
}

int	grid(int A)
{
	int	x;

	x = 0;
	while(x < 4)
	{
		int y;

		y = 0;
		while(y < 4)
			{
				write(1, nbrdetection(x, y), 1);
				y++
			}
		x++
	}	
}
	if(x != 4)
	{
		x++
	}
	else	
	{
		write(1, '\n', 1);
	}
}
*/
