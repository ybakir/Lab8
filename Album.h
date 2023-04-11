#ifndef ALBUM_H
#define ALBUM_H

#include "Photo.h"


class album:public Photo
{

private:
	int id;
	string title;
	string remarks;
	


public:

	album(int i, string t,string r,string type, string privacy): Photo(0,"","",type,privacy)
	{
		this->id = i;
		this->title = t;
		this->remarks = r;
	}


	void SetTitle(string t)
	{
		this->title = t;
	}

	void SetRemarks(string r)
	{
		this->remarks = r;
	}

	void SetID(int i)
	{
		this->id = i;
	}
	
	int GetID() const
	{
		return id;
	}

	string GetTitle() const
	{
		return title;
	}

	string GetRemarks() const
	{
		return remarks;
	}




};

#endif
