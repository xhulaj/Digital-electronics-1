----------------------------------------------------------------------------------
-- Company: 		 VUT BRNO
-- Engineer: 
-- 
-- Create Date:    01:27:00 04/05/2020 
-- Design Name: 	 
-- Module Name:    HC_SR04_driver - Behavioral 
-- Project Name: 	 Ultrasonic_range_detector
-- Target Devices: CoolRunner-II CPLD starter board
-- Tool versions: 
-- Description:    Driver for HC_SR04 module computing distance out of echo pulse duration
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

use IEEE.NUMERIC_STD.ALL;

entity HC_SR04_driver is
generic(

);
port(
			srst_n_i : in  STD_LOGIC; -- synchronous reset
			start_stop : in std_logic;  -- active low, for initiating measuring process
			clk_i : in std_logic;  -- 1 MHz
			echo  : in std_logic;
			data0_o : out std_logic_vector(4-1 downto 0);
			data1_o : out std_logic_vector(4-1 downto 0);
			data2_o : out std_logic_vector(4-1 downto 0);
			data3_o : out std_logic_vector(4-1 downto 0);
			dp_o    : out std_logic_vector(4-1 downto 0);
			trigg_o : out std_logic := '0'
	 );
end HC_SR04_driver;

------------------------------------------------------------------------------------------------

architecture Behavioral of HC_SR04_driver is
signal status : std_logic := '0';  -- states whether measuring is turned on or off
begin

	p_ctrl_unit : process(clk_i, srst_n_i)
		begin 
			if rising_edge(clk_i) then
				if srst_n_i = '1' then
						status = '0';
				elsif start_stop = '0' then
					status = not(status);
				end if;
			end if;
		end process p_ctrl_unit;
	
	p_sensor_trigg : process(clk_i)
		begin 
			if rising_edge(clk_i) then
				if status = '1' then
					trigg_o = '1'
					
				
	
	measuring : process(clk_i)
			variable meas_time : std_logic_vector(6-1 downto 0) := ( others => '0'); -- time of signal echo in microseconds
		begin	
	


end Behavioral;

