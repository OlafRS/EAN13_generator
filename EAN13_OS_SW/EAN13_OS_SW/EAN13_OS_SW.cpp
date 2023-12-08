#include <iostream>
#include <string>
#include <iomanip>

#include <fstream>

bool ean13code[95];
std::string structureOfFirstGroup;
int placeOnArray;
std::string ean13in;


void L_code(char num)
{
	switch (num)
	{
	case '0':
		ean13code[placeOnArray] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		placeOnArray++;
		break;
	case '1':
		ean13code[placeOnArray] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		placeOnArray++;
		break;
	case '2':
		ean13code[placeOnArray] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		placeOnArray++;
		break;
	case '3':
		ean13code[placeOnArray] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		placeOnArray++;
		break;
	case '4':
		ean13code[placeOnArray] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		placeOnArray++;
		break;
	case '5':
		ean13code[placeOnArray] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		placeOnArray++;
		break;
	case '6':
		ean13code[placeOnArray] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		placeOnArray++;
		break;
	case '7':
		ean13code[placeOnArray] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		placeOnArray++;
		break;
	case '8':
		ean13code[placeOnArray] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		placeOnArray++;
		break;
	case '9':
		ean13code[placeOnArray] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		placeOnArray++;
		break;
	}
}

void G_code(char num)
{
	switch (num)
	{
	case '0':
		ean13code[placeOnArray] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		placeOnArray++;
		break;
	case '1':
		ean13code[placeOnArray] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		placeOnArray++;
		break;
	case '2':
		ean13code[placeOnArray] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		placeOnArray++;
		break;
	case '3':
		ean13code[placeOnArray] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		placeOnArray++;
		break;
	case '4':
		ean13code[placeOnArray] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		placeOnArray++;
		break;
	case '5':
		ean13code[placeOnArray] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		placeOnArray++;
		break;
	case '6':
		ean13code[placeOnArray] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		placeOnArray++;
		break;
	case '7':
		ean13code[placeOnArray] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		placeOnArray++;
		break;
	case '8':
		ean13code[placeOnArray] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		placeOnArray++;
		break;
	case '9':
		ean13code[placeOnArray] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		placeOnArray++;
		break;
	}
}

void R_code(char num)
{
	switch (num)
	{
	case '0':
		ean13code[placeOnArray] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		placeOnArray++;
		break;
	case '1':
		ean13code[placeOnArray] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		placeOnArray++;
		break;
	case '2':
		ean13code[placeOnArray] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		placeOnArray++;
		break;
	case '3':
		ean13code[placeOnArray] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		placeOnArray++;
		break;
	case '4':
		ean13code[placeOnArray] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		placeOnArray++;
		break;
	case '5':
		ean13code[placeOnArray] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		placeOnArray++;
		break;
	case '6':
		ean13code[placeOnArray] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		placeOnArray++;
		break;
	case '7':
		ean13code[placeOnArray] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		placeOnArray++;
		break;
	case '8':
		ean13code[placeOnArray] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		placeOnArray++;
		break;
	case '9':
		ean13code[placeOnArray] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 1;
		ean13code[placeOnArray++] = 0;
		ean13code[placeOnArray++] = 0;
		placeOnArray++;
		break;
	}
}

void encodeMarkers()
{
	//start marker
	ean13code[0] = 1;
	ean13code[1] = 0;
	ean13code[2] = 1;

	//center marker
	ean13code[45] = 0;
	ean13code[46] = 1;
	ean13code[47] = 0;
	ean13code[48] = 1;
	ean13code[49] = 0;

	//end marker
	ean13code[92] = 1;
	ean13code[93] = 0;
	ean13code[94] = 1;
}

void encodeFirstGroup(std::string sequence)
{
	for (int i = 0; i < 6; i++)
	{
		if (char(sequence[i]) == 'L')
		{
			L_code(ean13in[i+1]);
		}
		else if (char(sequence[i]) == 'G')
		{
			G_code(ean13in[i+1]);
		}

	}
}

void encodeSecondGroup()
{
	for (int i = 7; i < 13; i++)
	{
		R_code(ean13in[i]);
	}
}


int main()
{
	std::cout << "Choose a sequence of 12 numbers:\n";
	std::cin >> ean13in;

	int checksum = 10-((ean13in[11] - '0') * 3 + (ean13in[10] - '0') + (ean13in[9] - '0') * 3 + (ean13in[8] - '0')+ (ean13in[7] - '0') * 3 + (ean13in[6] - '0') + (ean13in[5] - '0') * 3 + (ean13in[4] - '0') + (ean13in[3] - '0') * 3 + (ean13in[2] - '0') + (ean13in[1] - '0') * 3 + (ean13in[0] - '0'))%10;
	ean13in[12] = (checksum + '0');

	switch (ean13in[0])
	{
	case '0':
		structureOfFirstGroup = "LLLLLL";
		break;
	case '1':
		structureOfFirstGroup = "LLGLGG";
		break;
	case '2':
		structureOfFirstGroup = "LLGGLG";
		break;
	case '3':
		structureOfFirstGroup = "LLGGGL";
		break;
	case '4':
		structureOfFirstGroup = "LGLLGG";
		break;
	case '5':
		structureOfFirstGroup = "LGGLLG";
		break;
	case '6':
		structureOfFirstGroup = "LGGGLL";
		break;
	case '7':
		structureOfFirstGroup = "LGLGLG";
		break;
	case '8':
		structureOfFirstGroup = "LGLGGL";
		break;
	case '9':
		structureOfFirstGroup = "LGGLGL";
		break;
	}

	encodeMarkers();
	placeOnArray = 3;
	encodeFirstGroup(structureOfFirstGroup);
	placeOnArray += 5;
	encodeSecondGroup();

	char help = '"';

	std::fstream file;
	file.open("EAN13.html", std::ios::out);
	file << "<!DOCTYPE html>" << std::endl;
	file << "<html><head><meta charset=\"UTF-8\"></head>" << std::endl;
	file << "<body bgcolor=\"white\"><center>" << std::endl;

	file << "<svg height=\"210\" width=\"100\">" << std::endl;

	
	for (int i = 0; i < 95; i++)
	{
		if (ean13code[i] == 1)
		{
			file << "<line x1=" << help << i+1 << help << " y1=\"0\" x2=" << help << i+1 << help << " y2=\"210\" style=\"stroke:rgb(0,0,0);stroke - width:1\" />" << std::endl;
		}
	}

	file << "</svg>" << std::endl;

	file << "</body>" << std::endl;
	file << "</html>" << std::endl;
	file.close();

	std::cout << "Checksum is: " << ean13in[12];

	std::cout << ean13code[85] << std::endl;
	std::cout << ean13code[86] << std::endl;
	std::cout << ean13code[87] << std::endl;
	std::cout << ean13code[88] << std::endl;
	std::cout << ean13code[89] << std::endl;
	std::cout << ean13code[90] << std::endl;
	std::cout << ean13code[91] << std::endl;
}

