#include "fiostream_x86.h"

int main()
{
    int a, b;
    fin >> a >> b; // Reading integers using fistream
    fout << "Sum is: " << (a + b) << fendl; // Writing output using fostream
    return 0;
}