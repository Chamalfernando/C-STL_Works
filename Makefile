# Makefile

##############################################################################
###########################   MAKEFILE VARIABLES   ###########################
##############################################################################

# Compiler to use
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -std=c++11

# The directory that would be build in the compilation
BUILD_DIR = build

# Executable name
TARGET = output

# Target Executable
EXEC = output.exe

# Automatically find all .cpp files in the current directory
SRCS = $(wildcard *.cpp)

# Source files
SRCSFILES = main.cpp vectorChamal.cpp

# Object files (generated from source files)
OBJS = $(SRCS:%.cpp=$(BUILD_DIR)/%.o)
# OBJS = $(SRCSFILES:.cpp=.o) # previously there was no directory

##############################################################################
###########################   RULES TO BUILD   ###############################
##############################################################################

# Rule to build the target executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^
# $(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS) # previously with indentation.

# Rule to compile source files to object files in the build directory
# %.o: %.cpp # previously.
$(BUILD_DIR)/%.o: %.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to create the build directory if it doesn't exist
$(BUILD_DIR):
	mkdir $(BUILD_DIR)

# Run target (execute the compiled program)
run: $(EXEC)
	./$(EXEC)

# Clean rule to remove generated object files
clean:
ifeq ($(OS),Windows_NT)
# del /Q $(BUILD_DIR)\*.o $(TARGET)
	rmdir /S /Q $(BUILD_DIR)
# del /Q $(EXEC) 
# del /Q $(OBJS) $(TARGET)
else
	rm -f $(BUILD_DIR)/*.o $(TARGET)
	rm -rf $(BUILD_DIR)
# rm -f $(OBJS) $(TARGET)
endif

# remove the executable file.
remove:
ifeq ($(OS),Windows_NT)
	del /Q $(EXEC) 
else
	rm -rf $(EXEC)
endif

##############################################################################
################################## COMMANDS ##################################
##############################################################################

################## make  			|  			 Build the project.
################## make run         |         Run the executable.
################## make clean       |       Clean intermediate object files.
################## make remove      |      Remove the compiled executable. 