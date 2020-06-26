/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmathebu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 10:26:43 by tmathebu          #+#    #+#             */
/*   Updated: 2020/06/26 13:56:19 by tmathebu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(){

   char *t = "thabo mathebula";
   char *s;
   int i;
   scanf("%d",&i);
   s = ft_strncpy(s, t, i);
   printf("Final copied string : %s\n", s);
   printf("%c",'\n');
	return 0;

}

char *ft_strncpy(char *dest, char *src, unsigned int n){
	int i;
	int j;
	i = 0;
	j = 0;
	while(src[i] != '\0'){
		i++;
	}
	dest = (char *)malloc(sizeof(char)*n);
	while(j < n){
	*(dest + j) = src[j];
		j++;
	}
	*(dest + j) = '\0';

	return dest;
}
