DOXY_FILE = traffic-signal-system
BUILD_FILE = html

FixPath = $(subst /,\,$1)

doc:
	doxygen ./$(DOXY_FILE)

clean:
	rm -rf $(call FixPath,$(BUILD_FILE)/*)
