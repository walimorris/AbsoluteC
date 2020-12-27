/**
 * Write a program that determines whether a meeting room is 
 * in violation of the fire regulations regarding the maximum
 * room capacity and the number of people to attend the meeting.
 * If the number of people is less than or equal to the maximum 
 * room capacity, the program announces that it is legal to hold
 * the meeting and tells how many additional people may legally
 * attend. If the number of people exceeds the maximum room 
 * capacity, the program announces that the meeting cannot be held 
 * as planned due to fire regulations and tells how many people 
 * must be excluded in order to meet the fire regulations. 
 *
 * By: Wali Morris 
 */ 

#include<iostream> 
#include<string> 

using namespace std; 

int main() { 

    const int MAX_ROOM_CAPACITY = 250; 
    int actualRoomCount; 
    int roomCountDifference; 

    cout << "Enter the room count: "; 
    cin >> actualRoomCount; 

    if(actualRoomCount <= MAX_ROOM_CAPACITY) {
	roomCountDifference = MAX_ROOM_CAPACITY - actualRoomCount;  
        
	cout << "It is legal to hold this meeting.\n" 
	     << roomCountDifference << " seats to fill legal capacity."
             << endl; 
    } else { 
        roomCountDifference = actualRoomCount - MAX_ROOM_CAPACITY; 

        cout << "This meeting would be an illegal fire code hazard!\n"
	     << "There are " << roomCountDifference
             << " attendees over capacity to hold a legal meeting." 
             << endl; 
    }

    return 0; 
}     



