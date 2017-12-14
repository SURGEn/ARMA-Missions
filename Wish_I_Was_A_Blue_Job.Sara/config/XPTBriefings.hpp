// Mission briefings
// Config method of creating custom briefings
/*
	CONFIG BRIEFING EXAMPLE
	The following config is an example of how your briefing should be written
	
	class example	// Config class. Used when calling XPT_fnc_briefingCreate. Needs to be unique.
	{
		category = "Diary";		// Category that the briefing goes in. Use "Diary" for the default briefing class
		entryName = "Title";	// Briefing title. This is usually something like "Situation", "Mission", "Assets", etc.
		entryText = "Text";		// Briefing text. Formatted as structured text, contains the contents of your briefing.
		onStart = 1;			// Briefing on start. Determines if the briefing should be created upon mission start. Set to 0 to disable.
		sides[] = {0,1,2,3};	// Briefing sides. Determines which sides will receive the briefing message on mission start. Good for TvTs.
	};
	
	Briefings will appear ordered from bottom to top as they're listed here.
	This is because the game adds new briefings to the top of the list, and the template adds the briefings from top to bottom.
*/

class briefings
{
	class radios	// Example situation briefing. Should include a bit of backstory to your mission.
	{
		category = "Diary";
		entryName = "Radios and Logistics";
		entryText = "Radios for each element are preset according to the markers on the map.<br /> <br />PILOTS WILL NOT HAVE A PLANE UNTIL THE AIRFIELD IS SECURED.<br /> <br />Logistics pilots are responsible for dropping troops and supplies into the AO once they have secured their planes. Squads will need to be dropped long range radios in a supply drop in order to keep in contact with command, each transport plane will have a small supply drop already loaded in when they are secured.";
		onStart = 1;
		sides[] = {0,1,2,3};
	};
	class mission	// Example mission briefing. Should include a brief overview of the player's tasks.
	{
		category = "Diary";
		entryName = "Mission";
		entryText = "Our objectives are three fold in this mission: <br /> -Kill Robert Mugabe <br /> -Rescue Ian Smith, who never died as he is Rhodesian <br /> -Raise the Rhodesian Flag over the parliamentary palace in Harare (marked as Ortega on our maps) <br /> <br />Currently we are in the northern tip of the AO, and the majority of ZANLA stands between us and our goal. Specifically, ZANLA has concentrated muck of it's forces in the town of Corazol. We do not have the manpower or firepower to deal with the force there, so we will simply avoid them. The airstrip to the north of here is lightly defended, once we take out the small ZANLA base nearby and acquire transport, taking the airstrip should be easy. We will then use the aircraft there to fly troops over Corazol, paradropping in the area around Oretega. Once we rescue Ian Smith and kill Mugabe, we will begin the final push on Harare (marked incorrectly as Ortega on our maps).";
		onStart = 1;
		sides[] = {0,1,2,3};
	};
	class situation	// Example situation briefing. Should include a bit of backstory to your mission.
	{
		category = "Diary";
		entryName = "Situation";
		entryText = "The Zimbabwean Military (or ZANLA) have attempted a coup against Robert Mugabe. We will take advantage of the confusion caused by this coup to start our own, and liberate Rhodesia once and for all.";
		onStart = 1;
		sides[] = {0,1,2,3};
	};
	
};