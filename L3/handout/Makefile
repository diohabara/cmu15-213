.PHONY: help run-ctarget run-rtarget gdb-ctarget gdb-rtarget

help:
	@printf "Targets:\n"
	@printf "  make run-ctarget  # run ctarget with -q\n"
	@printf "  make run-rtarget  # run rtarget with -q\n"
	@printf "  make gdb-ctarget  # open gdb on ctarget -q\n"
	@printf "  make gdb-rtarget  # open gdb on rtarget -q\n"

run-ctarget:
	./ctarget -q

run-rtarget:
	./rtarget -q

gdb-ctarget:
	gdb --args ./ctarget -q

gdb-rtarget:
	gdb --args ./rtarget -q
