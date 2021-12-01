// Includes
#include "template.h"

// Namespace
using namespace AGK;
// https://steamcommunity.com/app/325180/discussions/0/141136086934977747/
app App;
void app::Begin(void)
{
	agk::SetFolder("/media");
	int DeviceDPI=agk::GetDeviceDPI();
	int DeviceHeight = agk::GetDeviceHeight();
	int DeviceWidth = agk::GetDeviceWidth();

	agk::SetVirtualResolution (agk::GetMaxDeviceWidth(), agk::GetMaxDeviceHeight());
    agk::SetClearColor( 64,64,64 ); // light blue
    agk::SetSyncRate(60,0);
    agk::SetScissor(0,0,0,0);
	agk::UseNewDefaultFonts(1);
}

int app::Loop (void)
{
	agk::Print( agk::ScreenFPS() );
	agk::Print( agk::GetMaxDeviceWidth());
	agk::Print( agk::GetMaxDeviceHeight());
	agk::Sync();

	return 0;
}


void app::End (void)
{
    
}
