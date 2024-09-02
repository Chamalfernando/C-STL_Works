# STL in C++

## C++ Standard Template Library is a library that includes a collection of templates representing containers, iterators, algorithms and function objects. This is the repository I have created in order to give some idea about STL.


# Instructions to run the program.

## 1. Clone the git repository using the link.

### [clone_link](https://github.com/Chamalfernando/C-STL_Works.git)

##### Note that I have used only one entry point which is main.cpp in this case in order to run the program. Main method would be defined only there and I have included the header.hpp in all the other files in order to access all the other methods which are defined in each other files.
## 2. Go to the terminal in the relevant project path and enter the following commands.

#### > make

##### This will create a directory named "build" which contains all the object files related to all the .cpp files in the file path. It will also create the "output.exe" file which is the executable file in this project.

#### > make run

##### This command will run the executable file which was created in the earlier step, and it will prompt any error while running the executable.

#### > make clean

##### This command will clean the "build" directory which includes all the intermediate object files which are unnecessary for this project in this case.

#### > make remove 

##### This command will remove the "output.exe" file from the file path.