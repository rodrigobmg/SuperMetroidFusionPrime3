///////////////////////////////////////////////////////////////////////
//	File	:	"IListener.h"
//
//	Author	:	Keith Morgado
//
//	Purpose	:	Interface class for use with the Event Handling System.
///////////////////////////////////////////////////////////////////////		

#pragma once

#include "CEvent.h"

//	An interface that allows the Dispatcher to send events to an object.
class IListener
{
	public:
		IListener() {}
		~IListener() {}

		//////////////////////////////////////////////////////////////////////////////////////////////////////
		// Function: HandleEvent
		//
		//  Purpose: Handles events for the class
		////////////////////////////////////////////////////////////////////////////////////////////////////////
		virtual void HandleEvent(CEvent *pEvent) = 0;
};