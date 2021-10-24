#ifndef CZAS
#define CZAS

#include <string>

struct Czas
{
	public:
		Czas(int godzina, int minuta, int sekunda);
		int godzina;
		int minuta;
		int sekunda;
		
		std::string toString() const;
};

#endif
