CXX      = clang++
CC       = clang
INCLUDES = -I. -I/usr/local/include/SDL2
CFLAGS   = $(INCLUDES) -DNDEBUG
CXXFLAGS = $(CFLAGS) -std=c++14
LDFLAGS  = -L/usr/local/lib -lSDL2 -lSDL2_net
TARGET   = AAServer
OBJS     = AAServer.o PACKETPR.o

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) $(LDFLAGS) -o $(TARGET)

AAServer.o: AAServer.cpp
	$(CXX) $(CXXFLAGS) -c AAServer.cpp -o AAServer.o

PACKETPR.o: PACKETPR.C
	$(CC) $(CFLAGS) -c PACKETPR.C -o PACKETPR.o

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: clean
