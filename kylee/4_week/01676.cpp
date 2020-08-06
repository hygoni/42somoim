/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01676.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kylee <kylee@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 19:13:53 by kylee             #+#    #+#             */
/*   Updated: 2020/08/05 19:18:17 by kylee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main(void)
{
	int n, ret;
	cin >> n;
	ret = 0;
	while (n)
	{
		ret += (n % 5 == 0) ? 1 : 0;
		ret += (n % 25 == 0) ? 1 : 0;
		ret += (n % 125 == 0) ? 1 : 0;
		n--;
	}
	cout << ret;
}