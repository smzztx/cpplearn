#ifndef WORDQUERY_H_
#define WORDQUERY_H_

#include <string>
#include "Query_base.h"
#include "Query.h"

class WordQuery : public Query_base
{
	friend class Query;
public:
	WordQuery(const std::string &s) : query_word(s) { }
	QueryResult eval(const TextQuery &t) const { return t.query(query_word); }
	std::string rep() const { return query_word; }
	std::string query_word;
};

#endif