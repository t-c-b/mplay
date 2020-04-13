
OBJS = Build/sound_driver.o
all: $(OBJS) Source/main.cxx
	$(CXX) $(CXXFLAGS) $(LDFLAGS) Source/main.cxx $(OBJS) -o mplay

Build/%.o: Source/%.cxx
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm mplay Build/*
