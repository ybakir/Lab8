#ifndef LOCATION_H
#define LOCATION_H

#include "Photo.h"


class location:public Photo
{

private:
	int id;
	string name;
	string remarks;


public:

	location(string name,int id,string remarks,int photoid,string title,string photoremarks,string type,string privacy):Photo(photoid,title, photoremarks,type,privacy)
	{
		this->name = name;
		this->id = id;
		this->remarks;

	}

	void SetName(string n)
	{
		this->name = n;
	}

	void SetID(int i)
	{
		this->id = i;
	}

	void SetRemarks(string r)
	{
		this->remarks = r;
	}

	
	string GetName() const
	{
		return name;
	}

	string GetRemarks() const
	{
		return remarks;
	}

	int GetID() const
	{
		return id;
	}




};

#endif