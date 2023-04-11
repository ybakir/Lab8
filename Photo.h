#ifndef PHOTO_H
#define PHOTO_H

#include<iostream>
using namespace std;


class Photo
{

private:
	int id;
	string title;
	string remarks;
	string type;
	string privacy;

public:

	Photo(int id,string title,string remarks,string type,string privacy)
	{
		this->id = id;
		this->title = title;
		this->remarks = remarks;
		this->type = type;
		this->privacy = privacy;

	}

	


	void SetId(int i)
	{
		this->id = i;
	}

	void SetTitle(string t)
	{
		this->title = t;
	}

	void SetRemarks(string r)
	{
		this->remarks = r;
	}

	void SetType(string tt)
	{
		this->type = tt;
	}

	void SetPrivacy(string p)
	{
		this->privacy = p;
	}


	int GetId() const
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

	string GetType() const 
	{
		return type;
	}

	string GetPrivacy() const
	{
		return privacy;
	}




};




























#endif