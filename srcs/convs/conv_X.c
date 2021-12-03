/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:59:30 by jmaia             #+#    #+#             */
/*   Updated: 2021/12/03 14:07:13 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv_XX.h"

int	conv_X(t_dynamic_buffer *output_line_buffer, t_options *options,
		unsigned int param)
{
	const unsigned char	*raw_data;

	raw_data = ft_itoa_base(param, "0123456789ABCDEF");
	if (!raw_data)
		return (1);
	return (apply_general_options(output_line_buffer, options, raw_data));
}