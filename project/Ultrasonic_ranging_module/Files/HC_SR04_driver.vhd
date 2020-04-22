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

port(
			srst_n_i : in  STD_LOGIC; -- synchronous reset
			clk_i : in std_logic;  -- 1 MHz
			echo_i  : in std_logic;  -- reading time between sent and deflected signal
			echo_time : out std_logic_vector(15-1 downto 0); -- time in us
			trigg_o : out std_logic := '0' -- 10us signal 
	 );
end HC_SR04_driver;

------------------------------------------------------------------------------------------------

architecture Behavioral of HC_SR04_driver is
	
	type t_state is (trigg, pending, echo);
	signal s_state : t_state;
	signal s_cnt : unsigned (15-1 downto 0);
	signal s_time :unsigned (15-1 downto 0);
	--signal s_time_divided : unsigned (12-1 downto 0);
	constant trigtime : unsigned(4-1 downto 0) := "1010";
	
begin

measurement : process(clk_i)
	
	begin
		
		if rising_edge(clk_i) then
			if srst_n_i = '0' then
				s_cnt <= (others => '0');
				s_state <= trigg;
			else
				case s_state is 
					
					when trigg =>
					
						if s_cnt < trigtime then
								trigg_o <= '1';
								s_cnt <= s_cnt + 1;
						else
								trigg_o <= '0';
								s_cnt <= (others => '0');
								s_state <= pending;
						end if;
					
					when echo =>
					
						if echo_i = '1' then
								s_cnt <= s_cnt +1;
						else
								s_state <= pending;
								s_time <= s_cnt;
						end if;
						
					when pending =>
					
						if s_cnt > 0 then
								s_state <= trigg;
								s_cnt <= (others => '0');
						elsif ((s_cnt = 0) and (echo_i = '1')) then
								s_state <= echo;
						else
								s_state <= pending;
						end if;
					end case;
				end if;
			end if;
		end process measurement;
		
	--	division : process(clk_i)
		
--			begin 
--				if rising_edge(clk_i) then
--					s_time_divided <= s_time / 2;
--				end if;
--		end process division;
		
		echo_time <= std_logic_vector(s_time /2);
		
end Behavioral;

