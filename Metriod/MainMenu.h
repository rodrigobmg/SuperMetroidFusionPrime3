///////////////////////////////////////////////////////////////////////
//	File	:	"MainMenu.h"
//
//	Author	:	Keith Morgado
//
//	Purpose	:	Contains the inforamtion for the Main Menu of my game.
//				This Menu also acts as a pause menu.
///////////////////////////////////////////////////////////////////////

#ifndef MAINMENU_H_
#define MAINMENU_H_
#include "cbase.h"
#include "MoreMenu.h"
#include "CSGD_Direct3D.h"

class CMainMenu :
	public CBase
{
private:
	//Main Menu and Pause
	bool m_bVisible;
	bool m_bPaused;
	int m_nSelected;
	int m_nMetriodID;
	int m_nPauseID;
	int m_nBGSound;
	int m_nMetriodSound;
	bool m_bKey;

	//More
	CMoreMenu *pMore;

public:
	CMainMenu(void);
	~CMainMenu(void);

	//////////////////////////////////////////////////////////////////////////////////////////////////////
	//  Function: Accessors
	//
	//  Purpose : Returns specified type.
	///////////////////////////////////////////////////////////////////////////////////////////////////////
	bool GetVisible(void);
	bool GetPaused(void);
	int GetSelected(void);
	int GetMImageID(void);
	int GetPImageID(void);
	bool GetSomeKeys(void);

	///////////////////////////////////////////////////////////////////////////////////////////////////////
	// Function: Modifiers
	//
	//  Purpose: Modifies specified type.
	////////////////////////////////////////////////////////////////////////////////////////////////////////
	void SetVisible(bool bVisible);
	void SetPaused(bool bPaused);
	void SetSelected(int nSelected);
	void SetMImageID(int nID);	
	void SetPImageID(int nID);
	void SetSomeKeys(bool bKey);

	///////////////////////////////////////////////////////////////////////////////////////////////////////
	// Function: Update
	//
	//  Purpose: Updates the class members, Uses a time variable to update
	////////////////////////////////////////////////////////////////////////////////////////////////////////
	bool Update(double dElapsedTime);

	///////////////////////////////////////////////////////////////////////////////////////////////////////
	// Function: Render
	//
	//  Purpose: Draws class data to the screen.
	////////////////////////////////////////////////////////////////////////////////////////////////////////
	bool Render(void);
	
	///////////////////////////////////////////////////////////////////////////////////////////////////////
	// Function: Pause
	//
	//  Purpose: Draws the Pause menu to the screen, separate from the main menu
	////////////////////////////////////////////////////////////////////////////////////////////////////////
	bool Pause(void);

	///////////////////////////////////////////////////////////////////////////////////////////////////////
	// Function: Waitforit
	//
	//  Purpose: Wait for the key to be hit
	////////////////////////////////////////////////////////////////////////////////////////////////////////
	int Waitforit(void);
};
#endif