#ifndef BULK_QUOTE_H_
#define BULK_QUOTE_H_

#include "Quote_ex11.h"
#include <string>
#include <iostream>

class Bulk_quote : public Quote
{
public:
	Bulk_quote() = default;
	Bulk_quote(const std::string &book, double p, std::size_t qty, double disc) : Quote(book, p), min_qty(qty), discount(disc) { }
	double net_price(std::size_t) const override;
	void debug() const override;
private:
	std::size_t min_qty = 0;
	double discount = 0.0;
};

double Bulk_quote::net_price(size_t cnt) const
{
	if(cnt >= min_qty) return cnt * (1 - discount) * price;
	else return cnt * price;
}

void Bulk_quote::debug() const
{
	Quote::debug();
	std::cout << "; min_qty: " << min_qty
	<< "; discount: " << discount;
}

#endif