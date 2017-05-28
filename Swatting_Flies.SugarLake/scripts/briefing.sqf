// Script to handle initial mission briefings
// General guidelines would be to include briefings for the following
// Situation, Mission, and Assets
// Briefings are listed in the opposite order that they are written below. New diaryRecords are always placed at the top of the list.
// https://community.bistudio.com/wiki/createDiaryRecord


player createDiaryRecord ["Diary", ["Changelog", "
	v1.2<br/>
	-Fixed intel tasks<br/>
	-Fixed ending only being serverside<br/>
	-Edited AI loadouts to make the ballistic shield more effective<br/>
	-Replaced all saigas with Steyr AUGA1 5.56 carbines<br/>
	-Tony Pajamas now escapes without need of zeus remote controlling him<br/>
	-EMTs are now CLSs, and have a full pack of medical supplies<br/>
	-Added some more boats for respawning players<br/>
	v1.1<br/>
	-Tweaked AI placement<br/>
	-Fixed certain map markers<br/>
	v1.0<br/> 
	-Initial Release"]];

player createDiaryRecord ["Diary", ["Assets", "Your available assets for this mission are:<br/>
	- 2x Armed RHIBs (.50 Cal)<br/>
	- 6x Unarmed RHIBs<br/>
	- 6x Police Speedboats<br/>
	- 6x Police Offroads<br/>"]];

player createDiaryRecord ["Diary", ["Mission", "Our mission is to neutralize (capture or kill) the drug lord known as Tony Pajamas. We've located one of the smuggling dens that his cartel uses, and we hope that some
 information on his location might be found there. Get your men ready and assault Dewey's Landing. Wipe out any smugglers or drugs you find, and sweep the area for intel regarding Tony Pajamas."]];

player createDiaryRecord ["Diary", ["Situation", "President Rodrigo Duterte has been sworn in as the 16th president of the Philipines, and his first order of business is exterminating the cartels
which for so long have poisoned the people of the Philipines with their deadly products. Our team has been delegated with taking down one of the cartel kingpins, known as 'Tony Pajamas'"]];