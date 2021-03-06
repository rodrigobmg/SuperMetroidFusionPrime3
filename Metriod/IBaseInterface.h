///////////////////////////////////////////////////////////////////////
//	File	:	"IBaseInterface.h"
//
//	Author	:	Keith Morgado
//
//	Purpose	:	My Base interface class for all of my derived classes.
//				This has Smart pointer functionality.
///////////////////////////////////////////////////////////////////////
#pragma once

#include "CSGD_DirectInput.h"
#include "CSGD_TextureManager.h"
#include "CSGD_WaveManager.h"
#include <Windows.h>

class IBaseInterface
{
	protected:
		unsigned int m_unRefCount;		//	Reference Counter. Count how many pointers
										//	are currently pointing to this memory
										//	address.

	public:
		IBaseInterface() { m_unRefCount = 1; }
		virtual ~IBaseInterface() {}

		///////////////////////////////////////////////////////////////////////////////////////////////////////
		// Function: AddRef
		//
		//  Purpose: Add a reference to the game
		////////////////////////////////////////////////////////////////////////////////////////////////////////
		virtual void AddRef(void) = 0;

		///////////////////////////////////////////////////////////////////////////////////////////////////////
		// Function: Release
		//
		//  Purpose: Releases the objects
		////////////////////////////////////////////////////////////////////////////////////////////////////////
		virtual void Release(void) = 0;

		///////////////////////////////////////////////////////////////////////////////////////////////////////
		// Function: Update
		//
		//  Purpose: Updates the game
		////////////////////////////////////////////////////////////////////////////////////////////////////////
		virtual bool Update(double dElapsedTime) = 0;
		///////////////////////////////////////////////////////////////////////////////////////////////////////
		// Function: Render
		//
		//  Purpose: Renders the game
		////////////////////////////////////////////////////////////////////////////////////////////////////////
		virtual bool Render(void) = 0;
};