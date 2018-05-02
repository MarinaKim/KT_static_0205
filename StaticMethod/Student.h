#pragma once
#include<string>
#include<iostream>
using namespace std;

class Students {
private:	
	string name;
	string surname;

public:
	static int std_count;
	Students() { std_count++; }
	Students(string name, string surname) {
		this->name = name;
		this->surname = surname;
		std_count++;
	}
	static void init() { std_count = 0; }
	static int get_count() { return std_count; }
	friend istream& operator >> (istream & is, Students& s);//vozvrashaem potok vvoda
	friend ostream& operator<<(ostream& os, Students s);
	~Students() { std_count--; }//destructor rabotaet s odnim obj
};