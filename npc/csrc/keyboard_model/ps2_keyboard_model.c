bool ge_clk(int ps_clk, int count, int ps_clk_period, bool en){
	if(count % (ps_clk_period / 2) == 0 && en)
		ps_clk = 1 ^ ps_clk;
	else
		ps_clk = 1;
	return ps_clk;
}

bool send(int up, int ps_clk_period, int count, int ps_data, int num, const char code[15], bool en){

	if((count % ps_clk_period == 0)  && up && en)
		ps_data = code[num] - '0';
	else
		ps_data = 1;
	return ps_data;
}

