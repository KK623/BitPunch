OPTIONS="-npcs -npsl -l80 -i4 -bad -bap -brs -br -brf -nut"
find ../lib -name '*.[ch]' -not -path ../lib/src/include/bitpunch/version.h -exec indent $OPTIONS {} \;
