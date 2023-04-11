#ifndef TAG_H
#define TAG_H

#include "Photo.h"


class tag:public Photo
{

private:
	int id;
	string name;
	string remarks;
	


public:

	tag(int i, string n, string r) : Photo(id, " ", remarks, "", " " )
	{
		this->id = i;
		this->name = n;
		this->remarks = r;
	}


	void SetID(int i)
	{
		this->id = i;
	}

	void SetName(string n)
	{
		this->name = n;
	}

	void SetRemarks(string r)
	{
		this->remarks = r;
	}

	string GetRemarks()
	{
		return remarks;
	}

	string GetRemarks()
	{
		return remarks;
	}


	string GetRemarks()
	{
		return remarks;
	}




};

#endif

