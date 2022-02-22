/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   complex.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-wij <mvan-wij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/26 11:27:49 by mvan-wij      #+#    #+#                 */
/*   Updated: 2022/02/22 17:27:28 by mvan-wij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "bonus.h"

#ifndef M_PI
# define M_PI 3.14159265358979323846264338327950288
#endif

// t_complex	complex_mult(t_complex a, t_complex b)
// {
// 	t_complex	r;

// 	r.re = a.re * b.re - a.im * b.im;
// 	r.im = a.re * b.im + a.im * b.re;
// 	return (r);
// }

t_complex	complex_from_angle(double a, double m)
{
	t_complex	r;

	r.re = cos(a) * m;
	r.im = sin(a) * m;
	return (r);
}

double	complex_sqr_mag(t_complex c)
{
	return (c.re * c.re + c.im * c.im);
}

t_complex	complex_pow(t_complex c, double p)
{
	const double	mag = sqrt(complex_sqr_mag(c));
	double			angle;

	if (mag == 0 || p == 1)
		return (c);
	if (c.im >= 0)
		angle = acos(c.re / mag);
	else
		angle = -acos(c.re / mag);
	return (complex_from_angle(angle * p, pow(mag, p)));
}
