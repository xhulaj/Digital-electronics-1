----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:39:40 04/28/2020 
-- Design Name: 
-- Module Name:    top - RTL	 
-- Project Name: 	 Ultrasonic_range_detector
-- Target Devices: CoolRunner-II CPLD starter board
-- Tool versions: 
-- Description: 	 Instantiation of Ultrasonic range detector
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity top is
	port(	s_clk_i, s_srst_n_i, echo : in std_logic;
			s_trigg  : out std_logic;
			s_seg_o  : out std_logic_vector(7-1 downto 0);
			s_dig_o  : out std_logic_vector(4-1 downto 0);
			s_dp_o   : out std_logic
			);
end top;

architecture RTL of top is

	signal s_distance : std_logic_vector(14-1 downto 0);
	signal s_data0, s_data1, s_data2, s_data3, s_dec_point : std_logic_vector(4-1 downto 0);

	
begin
	
		HC_SR04_driver : entity work.HC_SR04_driver(Behavioral)
			port map(
							clk_i => s_clk_i,
							srst_n_i => s_srst_n_i,
							echo_i => echo,
							distance => s_distance,
							trigg_o => s_trigg
						);
		
		bin_to_bcd : entity work.bin_to_bcd(Behavioral)
			port map(
							distance => s_distance,
							data0_o => s_data0,
							data1_o => s_data1,
							data2_o => s_data2,
							data3_o => s_data3,
							dec_point => s_dec_point
						);
		driver_7seg : entity work.driver_7seg(Behavioral)
			port map(
							clk_i => s_clk_i,
							srst_n_i => s_srst_n_i,
							data0_i => s_data0,
							data1_i => s_data1,
							data2_i => s_data2,
							data3_i => s_data3,
							dp_i => s_dec_point,
							seg_o => s_seg_o,
							dp_o => s_dp_o,
							dig_o => s_dig_o
						);

end RTL;

