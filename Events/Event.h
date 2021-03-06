#ifndef __EVENT_H_
#define __EVENT_H_

#include "..\Defs.h"

class Restaurant; //Forward declaration

//The base class for all possible events in the system (abstract class)
class Event
{
protected:
	int eventTime; //Timestep when this event takes place
	int orderID;   //each event is related to certain order
public:
	Event(int eTime, int ordID);
	int getEventTime() const;
	int getOrderID() const;
	virtual ~Event();

	virtual void readData(ifstream &inFile) = 0;
	virtual void execute(Restaurant *pRest) = 0; ////a pointer to "Restaurant" and events need it to execute
};

#endif