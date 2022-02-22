/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bonus.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-wij <mvan-wij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/26 20:31:26 by mvan-wij      #+#    #+#                 */
/*   Updated: 2022/02/22 17:27:33 by mvan-wij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_H
# define BONUS_H

# include "constants.h"

typedef struct s_complex
{
	double	re;
	double	im;
}	t_complex;

// t_complex	complex_mult(t_complex a, t_complex b);
t_complex	complex_from_angle(double a, double m);
double		complex_mag(t_complex c);
t_complex	complex_pow(t_complex c, double p);

#endif
