bool ge_clk(int ps_clk, int count, int ps_clk_period){
	if(count % ps_clk_period == 0)
		ps_clk = 1 ^ ps_clk;

	return ps_clk;
}

bool send(int up, int ps_data, int num, char code[15]){

	if(up)
		ps_data = code[num] - '0';

	return ps_data;
}
