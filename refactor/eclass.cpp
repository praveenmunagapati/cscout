#include <iostream>
#include <map>
#include <string>
#include <deque>

#include "cpp.h"
#include "fileid.h"
#include "tokid.h"
#include "eclass.h"

Eclass *
merge(Eclass *a, Eclass *b)
{
	Eclass *small, *large;

	// It is more efficient to append the small at the end of the large one
	if (a->members.size() > b->members.size()) {
		large = a;
		small = b;
	} else {
		large = b;
		small = a;
	}

	dequeTokid::iterator i;
	for (i = small->members.begin(); i != small->members.end(); i++)
		large->add_tokid(*i);
	delete small;
	return (large);
}

void
split(Eclass *ec, int pos)
{
}

ostream&
operator<<(ostream& o,const Eclass& ec)
{
	dequeTokid::iterator i;

	// When used for real we can also open the file and print the content
	o << "len=" << ec.len << "\n";
	for (i = ec.members.begin(); i != ec.members.end(); i++)
		o << "\t" << *i << "\n";
	return o;
}

void
Eclass::add_tokid(Tokid t)
{
	members.push_front(t);
	t.set_ec(this);
}

#ifdef UNIT_TEST
// cl -GX -DWIN32 -DUNIT_TEST eclass.cpp tokid.obj fileid.obj kernel32.lib

main()
{
	Tokid a(Fileid("tokid.cpp"), 10);
	Tokid b(Fileid("./tokid.cpp"), 15);
	Eclass e1(5);

	e1.add_tokid(a);
	e1.add_tokid(b);
	cout << "e1:\n" << e1;

	Eclass e2(5);
	Tokid c(Fileid("tokid.h"), 1);
	Tokid d(Fileid("./tokid.h"), 5);
	e2.add_tokid(c);
	e2.add_tokid(d);
	cout << "e2:\n" << e2;

	Eclass *enew = merge(&e1, &e2);
	cout << "merged:\n" << *enew;

	return (0);
}
#endif /* UNIT_TEST */