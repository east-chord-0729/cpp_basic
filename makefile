# Compiler
CXX := g++

# Compiler flags
CXXFLAGS := -std=c++11 -Wall -Wextra

# Directories
SRCDIR := src
BUILDDIR := build
TARGET := $(BUILDDIR)/__run

# Source files
SRCS := $(wildcard $(SRCDIR)/*.cpp)

# Object files
OBJS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SRCS:.cpp=.o))

# Default rule
all: $(TARGET)

# Rule to link object files into executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Rule to compile source files into object files
$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(BUILDDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule
clean:
	@rm -rf $(BUILDDIR) $(TARGET)

.PHONY: all clean

