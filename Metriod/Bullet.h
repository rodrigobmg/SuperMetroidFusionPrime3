///////////////////////////////////////////////////////////////////////
//	File	:	"Bullet.h"
//
//	Author	:	Keith Morgado
//
//	Purpose	:	Contains the inforamtion for any bullet in my game.
///////////////////////////////////////////////////////////////////////

#ifndef BULLET_H_
#define BULLET_H_
#include "IListener.h"
#include "CBase.h"
#include "CSGD_MessageSystem.h"

class CBullet :
	public IListener, public CBase
{
private:
	int m_nWaveID;
	int m_nPlasmaID;
	int m_nIceID;
	int m_nSpazerID;

public:
	CBullet(void);
	~CBullet(void);

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
	// Function: HandleEvent
	//
	//  Purpose: Handles any Event the class is in charge of
	////////////////////////////////////////////////////////////////////////////////////////////////////////
	void HandleEvent(CEvent *pEvent);
};
#endif