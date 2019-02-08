#include <AnvelApiFcns.h>

int main( int argc, char** argv )
{
	ANVELCom anv;
	anv.client->LoadEnvironment("LargeParkingLot.env");

	return 0;
}