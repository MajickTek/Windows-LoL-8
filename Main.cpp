/*
GNOT General Public License!
(c) 1995-2011 Microsoft Corporation
*/
 
#include "dos.h"
#include "win95.h"
#include "win98.h"
#include "sco_unix.h"
#include "metro.h" //windows 8
 
class Windows8 extends WindowsSeven implements Nothing {
   
    int totalNewFeatures = 6; //task manager, ribbon, new bsod =D, new WAT, metro, linux_block
    int totalWorkingFeatures = 1; //bsod
    float bugCount = 345889E+09;
    bool readyForRelease = FALSE;
   
    void main() {
        while (!CRASHED) {
            if (first_time_install) {
                if (installedRAM < 2GB || processorSpeed < 4GHz || videoCard < 1) { //requires video card
                    MessageBox("Hardware incompatibility error.");
                    GetKeyPress();
                    //BSOD();
                    BSOD2(); //windows 8
                }
            }
            Make10GBswapfile();
            SearchAndDestroy(FIREFOX|OPENOFFICEORG|ANYTHING_GOOGLE|LINUX_PARTITION|GRUB); //new features (linux & grub)
            AddRandomDriver();
            MessageBox("Driver incompatibility error.";
            GetKeyPress();
            //BSOD();
            BSDO2(); //windows 8
        }
   
        //printf("Welcome to Windows 2000");
        //printf("Welcome to Windows XP");
        //printf("Welcome to Windows Vista");
        //printf("Welcome to Windows 7");
        printf("Welcome to Windows 8"); //8 : official name?
       
        goto check_license;
       
        goto start_metro; //windows 8 exclusive!! remove it on future versions
       
        start_metro:
            StartMetroUI();
            if (WindowsStartMenuClick == 1)
            {
                goto start_metro;
            }
            else
            {
                if (TryingToRemoveMetroUsingRegedit == 1)
                {
                    goto start_metro;
                }
            }
           
        if (still_not_crashed) {
            //CheckUserLicense();
            //DoubleCheckUserLicense();
            //TripleCheckUserLicense();
            goto check_license;
           
            check_license:
#ifdef NEED_LICENSE    //DO_NOT_REMOVE, ALWAYS NEED A LICENSE
#include "string.h"
#endif
                if (strlen(LicenseInput) < 10 || CheckOEMLicense(LicenseInput) < 1)
                {
                    MessageBox("License is already in use or invalid.");
                    GetKeyPress();
                    //BSOD();
                    BSOD2(); //windows 8
                }
                else
                {
                    goto start_metro;
                }
           
            RelayUserDeatilsToRedmond();
            DisplayFancyGraphics();
            FlickerLED(hard_drive);
            //SetTheme(WindowsVista);
            SetTheme(WindowsSeven);
            RunWindowsSeven();
        }
    }
   
    return LotsMoreMoney;
}
