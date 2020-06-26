/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmathebu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 14:17:36 by tmathebu          #+#    #+#             */
/*   Updated: 2020/06/26 14:31:24 by tmathebu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_strcmp(char *s1, char *s2);

int main (){
	
}

int ft_strcmp(char *s1, char *s2){
	int i;
	int j;
	i = 0;
	j = 0;
	while(s1[i] != '\0'){
		i++;:
	}
	while(s2[j] != '\0'){
		j++;
	}
	if(i > j){
		return 1;
	}
	else if(i < j){
		return -1;
	}
	else{
		return 0;
	}
}

