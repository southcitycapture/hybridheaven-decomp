
NOTE: this is an escalation. A cheaper model already tried this function and got close but not to a match.
Its best attempt is in `previous.c` (switched to context.h). Start from it: read target.s carefully, find what
still differs (types and signedness, statement order, temporaries, loop shape, struct offsets), and get it to MATCH.
`./check` verifies every instruction and every address exactly.
