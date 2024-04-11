#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h> 
using namespace std;

struct sea
{
	int m_osx; //
	int m_osy; //
	int m_ship; //
	int m_vermax; //
	int m_vermid; //
	int m_vermin; //

	sea() = default;
	sea(int osx, int osy, int ship, int vermax, int vermid, int vermin)
	{
		m_osx = osx;
		m_osy = osy; //
		m_ship = ship; //
		m_vermax = vermax; //
		m_vermid = vermid; //
		m_vermin = vermin; //
	}
};
struct boat
{
	int m_lenght;
	int m_turn;
	bool sunk;

};

struct destroyer
{
	int m_lenght [2];
	int m_turn;
	bool sunk;

};


struct cruiser
{
	int m_lenght[3];
	int m_turn;
	bool sunk;

};

struct battleship
{
	int m_lenght[4];
	int m_turn;
	bool sunk;

};

void ai_fleet ()
{



};

int main()
{



	return 0;
}