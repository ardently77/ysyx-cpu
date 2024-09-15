sim0:
	verilator --trace -cc --top-module cpu_top ./vsrc/*.v --exe ./csrc/soc_tb.cpp
sim1:
	make -C ./obj_dir -f Vcpu_top.mk Vcpu_top
run:
	./obj_dir/Vcpu_top
run1:
	gtkwave wave.vcd
clean:
	rm -rf obj_dir
