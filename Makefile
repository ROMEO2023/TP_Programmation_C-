# Makefile with dependencies management (Q4)

CXX        = g++
CXXFLAGS   = -Wall  -Wextra -std=c++11
DEPFLAGS   = -MMD
LDFLAGS    =
SRCS       = date.cpp main.cpp livre.cpp auteur.cpp lecteur.cpp emprunt.cpp bibliotheque.cpp
OBJS       = $(SRCS:.cpp=.o)
TARGET     = app
DEPS	   = $(OBJS:.o=.d)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(DEPFLAGS) -c  $<

clean:
	rm -f *.o *.d

mrproper: clean
	rm -f $(TARGET)

exe: $(TARGET)
	./$(TARGET)

-include $(DEPS)
