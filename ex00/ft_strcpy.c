/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmathebu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:16:17 by tmathebu          #+#    #+#             */
/*   Updated: 2020/06/25 15:48:09 by tmathebu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

char *ft_strcpy(char *dest, char *src);

int main(){
  /* char *t = "thabo mathebula";
   char *s;
   s = ft_strcpy(s, t);
   printf("Final copied string : %s\n", s);
   printf("%c",'\n');
  */
   return 0;
}

char *ft_strcpy(char *dest, char *src){
	int i;
	int j;
	i = 0;
	j = 0;
	while(src[i] != '\0'){
		i++;
	}
	dest = (char *)malloc(sizeof(char)*i);;
	while(src[j] != '\0'){
	*(dest + j) = src[j];
		j++;
	}
	*(dest + j) = '\0';

	return dest;
}

