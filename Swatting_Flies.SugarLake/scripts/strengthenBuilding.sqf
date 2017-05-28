if (!isServer) exitWith {};
//Makes the yellow building on the western side of Dewey's Landing not collapse when the drugs inside are blown up
_nObject = nearestObject [[7486, 7945], "Land_Sara_domek_zluty"];
_nObject allowDamage false;