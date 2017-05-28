{ 
 if(floor(random 3) == 1) 
 then { 
  deleteVehicle  _x; 
 };
} forEach units group hotelBoys;