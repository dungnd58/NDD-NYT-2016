/*
Owner: Ngo Duc Dung
Added: 21/06/2016
Last update: 21/06/2016
*/

#ifndef MANAGE_FILE_H
#define MANAGE_FILE_H

/* Class: include objects to manage input and ouput with File */
class FileManager {
	public:
		FileManager();
		
		void writeToFile(double* nums);
		void readFromFile(double* nums);	
};

#endif
