export EXE := dayOfWeek

default: $(EXE)

export SOURCE_FILES := $(wildcard *.cpp)
export OBJ_FILES :=$(patsubst %.cpp, %.o, $(SOURCE_FILES))

$(EXE) : $(OBJ_FILES)
	@g++ $^ -o$@

.PHONY: clean
clean:
	rm $(OBJ_FILES) $(EXE)

.PHONY: test
test:
	./$(EXE)