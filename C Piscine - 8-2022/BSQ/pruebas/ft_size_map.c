/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmoren <migmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:45:16 by alflores          #+#    #+#             */
/*   Updated: 2022/08/31 02:28:17 by migmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include"ft_point.h"

//t_point ft_row_map(int fd, t_point coords, char *map_str);
//void ft_fill_matrix(char *map_str, char **matrix, t_point tonto);

t_point ft_row_map(int fd, t_point coords, char *map_str)
{
	char	reader;
	int		i;
	int		j;
	int		k;
	
	reader = 48;
	i = 0;
	j = 0;
	k = 0;
	while (reader != '\0' && reader != '\n')
	{
		while (reader != '\0' && reader != '\n')
		{
			read(fd, &reader, 1);
			map_str[j++] = reader;
			if (i > j)
			{
				coords.cols = coords.cols + 1;
				j = i;
			}
		}
		if (i > 1)
			map_str[k++] = reader;
		coords.rows = coords.rows + 1;	
		i++;
		read(fd, &reader, 1);
	}
	coords.rows = coords.rows - 1;
	return (coords);
}


void ft_fill_matrix(char *map_str, char *matrix_row, t_point tonto)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (map_str[i] != '\n')
	{
		matrix_row[i] = map_str[i];
		i++;
	}

	printf("%s", matrix_row);
	
}





int main()//testing sus
{
	int fd = open("map.mp", O_RDONLY);
	char **map;
	int	i;
	int	j;
	char reader;
	t_point	coord;
	char	*map_str;

	if (fd < 0)//sus
		return (1);	
		
	i = 0;
	coord.cols = 0;
	coord.rows = 0;

	map_str = (char *)malloc(999);

	coord = ft_row_map(fd, coord, map_str);

	map = (char **)malloc(sizeof(char) * coord.rows);
	
	printf("filas = %d, columnas = %d\n", coord.rows, coord.cols);	//PRINTF!!!!
	printf("%s", map_str);

	while (i < coord.rows)// ASIGNACION DE MEMORIA Y RELLENO DE MATRIZ
	{
		map[i] = malloc(sizeof(char) * coord.cols);
		ft_fill_matrix(map_str, map[i], coord);
		i++;
	}
	i = 0;
	while (i < coord.rows)// ASIGNACION DE MEMORIA Y RELLENO DE MATRIZ
	{
		j = 0;
		while(j < coord.cols)
			printf("%c", map[i][j++]);
		i++;
	}
	/*i = 0;//			PRINTF!!!! COMPROBACION DE QUE SE HA LLENADO BIEN
	while (i < coord.rows)
	{
		j = 0;
		while (j < coord.cols)
			printf("%c", map[i][j++]);
		i++;
	}*/
	



/*
	//char a[20][20];//el array vacia que voy a llenar 
	char **a;
	int fd = open("map.mp", O_RDONLY);//file descriptor;
	char reader;//va a recibir el fd y lo va a almacenar hasta que fd == 0;
	int	i;//filas
	int	j;//colum
	int	k;//comprobador de límites
	int cont; 

	a = (char **)malloc(20);
	i = 1;//i = 0 es donde se muestra las columnnas
	j = 0;
	k = 0;
	if (fd == -1)//sus
		return(1);
	while (i < 10)
		a[i++] = (char *)malloc(20);
	while (read(fd, &reader, 1)  > 0)//Para que lea la información sacada del fd
	{
		k++;
		if (k == 9)//sus la idea esk esto nos lea solo la línea gracias a la k
		{
			i++;
			j = 0;
			k = 0;
		}
		a[i][j] = reader;
		//write(1, &a[i][j], 1);
		j++;
	}
	i = 1;
	while (i <= 20)//para que recorra todo el mapa PORQUE LO TENEMOS
	{
		j = 0;
		while (j <= 20)
			write (1, &a[i][j++], 1);
		i++;
	}*/
}

//sus reglas: no vale leer mas de una vez el fd