#pragma once
class GameService {
  private:
	  void intialize(); // handle game intialization
	  void destroy(); // Handle cleanup task
   public:
	   GameService(); // Constructor of Intializing game service object
	   ~GameService(); // Destructor of cleaning up resources upon object deletion


};

