#include "binaire.h"

class Header : public Binaire
{
private:
	string nom;
	string base;
	int quantieme;
	int taxid;
	string read_string();
	int read_int();
	int Hex_Int(string hex, int size);
	
public :
	Header(string adr);
	void acquiert(int offset);
	void getData();
	
	
	
};
