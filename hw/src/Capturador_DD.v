`timescale 1ns / 1ps

module Capturador_DD (VSYNC,HREF,PCLK,D,CBtn,data,addr,regwrite);
	
	input VSYNC;
	input HREF;
	input PCLK;
	input [7:0] D;
	input CBtn;
	output reg [7:0] data = 8'b0;
	output reg [16:0] addr = 17'b0;
	output reg regwrite = 0;
	
	reg [2:0] state = 0;
	
	always@(posedge PCLK)begin
	//Se utilizan dos case, uno para unidad de control y otro de ejecucion
	//Si se usa un solo case la ejecucion se retrasaria un ciclo
	
		//Unidad de Control
		case(state)
			0: begin //Inactivo
			if (CBtn)	state = 1;
			end
			1: begin //Iniciado
			if (VSYNC)	state = 2;
			end
			2: begin //Reset
			if (~VSYNC)	state = 3;
			end
			3: begin //Prepare
			if (VSYNC)	state = 0;
			if (HREF)	state = 4;
			end
			4: begin //Captura 1
			if (HREF)	state = 5;
			else			state = 3;
			end
			5: begin //Captura 2
			if (HREF)	state = 4;
			else			state = 3;
			end
		endcase
		
		//Ejecucion de Control
		case(state)
			2: begin //RESET
			addr = 17'b11111111111111111;
			end
			4: begin //CAPTURA 1
			regwrite = 0;
			addr = addr+1;
			data [7:2] = {D[7:5],D[2:0]};
			end
			5: begin //CAPTURA 2;
			data [1:0] = D[4:3];
			regwrite = 1;
			end
			default: begin//DEFAULT
			regwrite = 0;
			end
		endcase
		
	end
	
endmodule
