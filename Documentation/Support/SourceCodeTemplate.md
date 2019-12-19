# Source Code Formatting
This document outlines the guidance for source code format.

## C++ Files
C++ files should contain only one class when possible. 

C++ files are to be formatted as follows:
 - Header Comment
 - Includes
 - Global Variables
 - Class

### Header Comment
Every Source Code file, no matter the format should have the following header: 

	/*
	* ----------------------------------------------------------
	* <filename>.<extension>
	* ----------------------------------------------------------
	* [A single sentence description for the file.]
	*
	* [Single sentence description of any definition in the file.]
	*
	* Author: <Author Name/Username>
	* Date: <Date of last change>
	*/

### Includes
Includes should be in this order.

		//C++ Includes
		#include <iostream>
	
		//Panda3d Includes
		#include "pandaFramework.h"
		#include "pandaSystem.h"

		//Everest Includes
		#include "Everest/Core.h"
### Global Variables
Global variables should be used sparingly.  Other than that use standard variable naming convention of camelCase.

			string globalString;
### Classes
Class formatting is a little more involved. Class names should be capitalized. 
The order or format goes:

 - Private Variables
 - Public Variables
 - Constructors
 - Destructors
 - Private Functions
 - Public Functions

Format:

		class <Class Name> {
			//Private Variables
			<...>
			//Public Variables
			<...>
			//Constructors
			<...>
			//Destructors
			<...>
			//Private Functions
			<...>
			//Public Functions
			<...>
		}
## Header Files
Header files are to be formatted as follows:
 - Header Comment
 - Includes
 - Class Definition

### Header Comment
Every Source Code file, no matter the format should have the following header: 

	/*
	* ----------------------------------------------------------
	* <filename>.<extension>
	* ----------------------------------------------------------
	* [A single sentence description for the file.]
	*
	* [Single sentence description of any definition in the file.]
	*
	* Author: <Author Name/Username>
	* Date: <Date of last change>
	*/

### Includes
Includes should be in this order.

		//C++ Includes
		#include <iostream>
	
		//Panda3d Includes
		#include "pandaFramework.h"
		#include "pandaSystem.h"

		//Everest Includes
		#include "Everest/Core.h"
### Class Definitions
Class definitions should follow this format:

 - Parent Classes
 - Public Members and Values
	 - Values
	 - Constructors
	 - Deconstructors
	 - Functions
- Private  Members and Values
	- Values
	- Functions

Example:

	class <class Name> : 
			<parent class>
	{
			public:
			<...>
			private:
			<...>
	}