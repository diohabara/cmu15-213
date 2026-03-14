.PHONY: help run gdb disasm

help:
	@printf "Targets:\n"
	@printf "  make run     # run the public self-study bomb\n"
	@printf "  make gdb     # open gdb on the bomb\n"
	@printf "  make disasm  # dump assembly to bomb.asm\n"

run:
	./bomb

gdb:
	gdb ./bomb

disasm:
	objdump -d ./bomb > bomb.asm
