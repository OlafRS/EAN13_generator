#include <iostream>
#include <iomanip>

#include <fstream>

bool ean13code[95];
std::string structureOfFirstGroup;
int placeOnArray;
std::string ean13in;


void L_code(int num, int placeOnArray)
{
    switch (num)
    {
    case 0:
        ean13code[placeOnArray] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        placeOnArray++;
        break;
    case 1:
        ean13code[placeOnArray] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        placeOnArray++;
        break;
    case 2:
        ean13code[placeOnArray] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        placeOnArray++;
        break;
    case 3:
        ean13code[placeOnArray] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        placeOnArray++;
        break;
    case 4:
        ean13code[placeOnArray] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        placeOnArray++;
        break;
    case 5:
        ean13code[placeOnArray] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        placeOnArray++;
        break;
    case 6:
        ean13code[placeOnArray] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        placeOnArray++;
        break;
    case 7:
        ean13code[placeOnArray] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        placeOnArray++;
        break;
    case 8:
        ean13code[placeOnArray] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        placeOnArray++;
        break;
    case 9:
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

void G_code(int num, int placeOnArray)
{
    switch (num)
    {
    case 0:
        ean13code[placeOnArray] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        placeOnArray++;
        break;
    case 1:
        ean13code[placeOnArray] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        placeOnArray++;
        break;
    case 2:
        ean13code[placeOnArray] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        placeOnArray++;
        break;
    case 3:
        ean13code[placeOnArray] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        placeOnArray++;
        break;
    case 4:
        ean13code[placeOnArray] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        placeOnArray++;
        break;
    case 5:
        ean13code[placeOnArray] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        placeOnArray++;
        break;
    case 6:
        ean13code[placeOnArray] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        placeOnArray++;
        break;
    case 7:
        ean13code[placeOnArray] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        placeOnArray++;
        break;
    case 8:
        ean13code[placeOnArray] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        placeOnArray++;
        break;
    case 9:
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

void R_code(int num, int placeOnArray)
{
    switch (num)
    {
    case 0:
        ean13code[placeOnArray] = 1;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 0;
        placeOnArray++;
        break;
    case 1:
        ean13code[placeOnArray] = 1;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 0;
        placeOnArray++;
        break;
    case 2:
        ean13code[placeOnArray] = 1;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        placeOnArray++;
        break;
    case 3:
        ean13code[placeOnArray] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 0;
        placeOnArray++;
        break;
    case 4:
        ean13code[placeOnArray] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        placeOnArray++;
        break;
    case 5:
        ean13code[placeOnArray] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 0;
        placeOnArray++;
        break;
    case 6:
        ean13code[placeOnArray] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        placeOnArray++;
        break;
    case 7:
        ean13code[placeOnArray] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        placeOnArray++;
        break;
    case 8:
        ean13code[placeOnArray] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 1;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        ean13code[placeOnArray++] = 0;
        placeOnArray++;
        break;
    case 9:
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
    for (int i = 1; i < 7; i++)
    {
        if (char(sequence[i - 1]) == 'L')
        {
            L_code(int(ean13in[i]), placeOnArray);
        }
        else if(char(sequence[i - 1]) == 'G')
        {
            G_code(int(ean13in[i]), placeOnArray);
        }

    }
}

void encodeSecondGroup()
{
    for (int i = 7; i < 13; i++)
    {
        R_code(int(ean13in[i]), placeOnArray);
    }
}


int main()
{
    std::cout << "Choose a sequence of 13 numbers:\n";
    std::cin >> ean13in;
    
    switch (int(ean13in[0]))
    {
    case 0:
        structureOfFirstGroup = "LLLLLL";
        break;
    case 1:
        structureOfFirstGroup = "LLGLGG";
        break;
    case 2:
        structureOfFirstGroup = "LLGGLG";
        break;
    case 3:
        structureOfFirstGroup = "LLGGGL";
        break;
    case 4:
        structureOfFirstGroup = "LGLLGG";
        break;
    case 5:
        structureOfFirstGroup = "LGGLLG";
        break;
    case 6:
        structureOfFirstGroup = "LGGGLL";
        break;
    case 7:
        structureOfFirstGroup = "LGLGLG";
        break;
    case 8:
        structureOfFirstGroup = "LGLGGL";
        break;
    case 9:
        structureOfFirstGroup = "LGGLGL";
        break;
    }

    encodeMarkers();
    placeOnArray = 3;
    encodeFirstGroup(structureOfFirstGroup);
    placeOnArray += 5;
    encodeSecondGroup();


    /*
    std::fstream file;
    file.open("EAN13.html", std::ios::out);
    file << "<!DOCTYPE html>" << std::endl;
    file << "<html><head><meta charset=\"UTF-8\"></head>" << std::endl;
    file << "<body bgcolor=\"white\"><center>" << std::endl;
    */

}

