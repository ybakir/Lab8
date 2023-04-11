#ifndef MEMBER_H
#define MEMBER_H

#include "Photo.h"


class member:public Photo
{

private:
	int id;
	string name;
	string address;
	string contact;

public:

	member(int id, string n, string a, string c,int photoid,string title,string photoremarks,string type,string privacy) : Photo(photoid, title, photoremarks, type, privacy)
	{
		this->id = id;
		this->name = name;
		this->address = address;
		this->contact = contact;
	}


	void SetName(string n)
	{
		this->name = n;
	}

	void SetAddress(string a)
	{
		this->address = a;
	}

	void SetContact(string c)
	{
		this->contact = c;
	}


	string GetName() const
	{
		return name;
	}

	string GetAddress() const 
	{
		return address;
	}

	string GetContact() const
	{
		return contact;
	}
};












#endif