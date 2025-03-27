CC := gcc

football.exe: # fill in files here
	# fill in commands here
	$(CC) $(CFLAGS) football_main.c football.c -o football.exe

temperature.exe: # fill in files here
	# fill in commands here
	$(CC) $(CFLAGS) temperature_main.c temperature.c -o temperature.exe

# Clean up binaries
clean:
	rm -f *.exe