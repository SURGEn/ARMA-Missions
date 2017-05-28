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
	class tonyNeutralized
	{
		title = "MISSION COMPLETE"; // Main text that appears for the closing shot (ex: MISSION COMPLETED)
		subtitle = "We got him boys"; // Subtitle below the title when the closing shot is triggered
		description = "Tony won't be peddling any more coke, and we've dealt a serious blow to the cartels."; // Description visible on the debriefing screen after the closing shot
		//pictureBackground = ""; // Image file used as a background on the debriefing screen
		//picture = ""; // Icon used for the closing shot
		//pictureColor[] = {1,1,1,1}; // Colour of the icon during the closing shot. Leave as default most of the time
	};
	class tonyEscaped
	{
		title = "MISSION FAILED"; // Main text that appears for the closing shot (ex: MISSION COMPLETED)
		subtitle = "Tony Pajamas managed to escape"; // Subtitle below the title when the closing shot is triggered
		description = "Tony Pajamas has escaped, and while we killed many of his men, he'll rebuild his drug empire soon."; // Description visible on the debriefing screen after the closing shot
		//pictureBackground = ""; // Image file used as a background on the debriefing screen
		//picture = ""; // Icon used for the closing shot
		//pictureColor[] = {1,1,1,1}; // Colour of the icon during the closing shot. Leave as default most of the time
	};
};