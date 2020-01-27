`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:14:22 12/02/2019 
// Design Name: 
// Module Name:    cam_read 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module cam_read #(
		parameter AW = 15 // Cantidad de bits  de la dirección 
		)(
		input pclk,
		input rst,
		input vsync,
		input href,
		input [7:0] px_data,

		output reg [AW-1:0] mem_px_addr = 0,
		output reg [7:0]  mem_px_data = 0,
		output reg px_wr = 0
   );

reg [0:0] C = 0;

always @ (negedge px_wr) begin
	if(vsync == 0) begin
		mem_px_addr = mem_px_addr + 1;
		end
	else begin 
		mem_px_addr = 0;
	end
end

always @ (posedge pclk) begin
		if(href == 1) begin
			if(C == 0) begin
				px_wr = 0;
				mem_px_data[7] = px_data[7];
				mem_px_data[6] = px_data[6];
				mem_px_data[5] = px_data[5];
				mem_px_data[4] = px_data[2];
				mem_px_data[3] = px_data[1];
				mem_px_data[2] = px_data[0];
				C = 1;
			end else
			if(C == 1) begin
				mem_px_data[1] = px_data[4];
				mem_px_data[0] = px_data[3];
				C = 0;
				px_wr = 1;
			end
		end
end

endmodule
