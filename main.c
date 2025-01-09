/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaynar <skaynar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 19:27:53 by skaynar           #+#    #+#             */
/*   Updated: 2025/01/09 16:53:37 by skaynar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int main(int ac ,char **av)
{   
    int i;
    i = 1;
    if(ac < 2)
        return (0);
    if(i < ac)
        control(av[i++]);
        
    return (0);

}

// stack a ve b yi oluştur
// oluşturulan stackler pushlama ksımında kullanılcak
// arügmnları al
// her agümanı splitle
// argğmanları atoi
// atoiden dönen değeri kontrol et
// eğer tüm değerler oekyse pushla