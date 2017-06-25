// Mission endings
// Handles the mission ending screen
// https://community.bistudio.com/wiki/Debriefing

class cfgDebriefing
{
	class example
	{
		title = "Example Ending"; // Main text that appears for the closing shot (ex: MISSION COMPLETED)
		subtitle = "The mission maker should change this"; // Subtitle below the title when the closing shot is triggered
		description = "This should be changed before the mission is finished"; // Description visible on the debriefing screen after the closing shot
		//pictureBackground = ""; // Image file used as a background on the debriefing screen
		//picture = ""; // Icon used for the closing shot
		//pictureColor[] = {1,1,1,1}; // Colour of the icon during the closing shot. Leave as default most of the time
	};
	class majorLoss
	{
		title = "COMPLETE MISSION FAILURE"; // Main text that appears for the closing shot (ex: MISSION COMPLETED)
		subtitle = "We're definitely getting fired for this"; // Subtitle below the title when the closing shot is triggered
		description = "We failed almost all our objectives, heavy civilian casualties and millions in damages have been reported."; // Description visible on the debriefing screen after the closing shot
		//pictureBackground = ""; // Image file used as a background on the debriefing screen
		//picture = ""; // Icon used for the closing shot
		//pictureColor[] = {1,1,1,1}; // Colour of the icon during the closing shot. Leave as default most of the time
	};
	class minorLoss
	{
		title = "MISSION FAILURE"; // Main text that appears for the closing shot (ex: MISSION COMPLETED)
		subtitle = "While we did save a few lives, it wasn't enough"; // Subtitle below the title when the closing shot is triggered
		description = "We accomplished too few of our objectives, ISIS still sent their message."; // Description visible on the debriefing screen after the closing shot
		//pictureBackground = ""; // Image file used as a background on the debriefing screen
		//picture = ""; // Icon used for the closing shot
		//pictureColor[] = {1,1,1,1}; // Colour of the icon during the closing shot. Leave as default most of the time
	};
	class minorVictory
	{
		title = "VICTORY"; // Main text that appears for the closing shot (ex: MISSION COMPLETED)
		subtitle = "We managed to stop most of the terrorists"; // Subtitle below the title when the closing shot is triggered
		description = "Although we accomplished most of our objectives, innocent lives were still lost."; // Description visible on the debriefing screen after the closing shot
		//pictureBackground = ""; // Image file used as a background on the debriefing screen
		//picture = ""; // Icon used for the closing shot
		//pictureColor[] = {1,1,1,1}; // Colour of the icon during the closing shot. Leave as default most of the time
	};
	class majorVictory
	{
		title = "COMPLETE VICTORY"; // Main text that appears for the closing shot (ex: MISSION COMPLETED)
		subtitle = "We fucked ISIS up, long live Duterte"; // Subtitle below the title when the closing shot is triggered
		description = "We accomplished our objectives with minimal losses, and sent ISIS home with their tails between their legs."; // Description visible on the debriefing screen after the closing shot
		//pictureBackground = ""; // Image file used as a background on the debriefing screen
		//picture = ""; // Icon used for the closing shot
		//pictureColor[] = {1,1,1,1}; // Colour of the icon during the closing shot. Leave as default most of the time
	};
};