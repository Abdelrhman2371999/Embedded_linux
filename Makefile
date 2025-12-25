CC = gcc
CFLAGS = -Wall -Wextra -O2
TARGETS = binary_search capslock_control capslock_toggle

all: $(TARGETS)

binary_search: binary_search.c
	$(CC) $(CFLAGS) -o $@ $<

capslock_control: capslock_control.c
	$(CC) $(CFLAGS) -o $@ $<

capslock_toggle: capslock_toggle.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(TARGETS)

install_scripts:
	chmod +x *.sh

.PHONY: all clean install_scripts
