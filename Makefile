# Warsaw University of Technology
# The Faculty of Electronics and Information Technology
#
# Object-Oriented Programming Lab 3 - Tower Defense
#
# Makefile
#
# @author Michal Swietochowski 

# compiler
CXX=g++

# dirs
BINDIR=bin
BUILDDIR=build
SRCDIR=src

# target
TARGET=$(BINDIR)/td

# settings
CXXFLAGS=-g
SOURCES=$(SRCDIR)/*.cpp

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)

clean:
	rm -rf bin/*

.PHONY: all clean
