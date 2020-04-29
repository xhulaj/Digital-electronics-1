----------------------------------------------------------------------------------
-- Company: 		 VUT BRNO
-- Engineer: 
-- 
-- Create Date:    12:53:58 03/31/2020 
-- Design Name: 
-- Module Name:    clock_enable - Behavioral 
-- Project Name: 	 Ultrasonic_range_detector
-- Target Devices: CoolRunner-II CPLD starter board
-- Tool versions: 
-- Description: 
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
use ieee.std_logic_unsigned.all;

entity clock_enable is
	generic (
		g_NPERIOD : std_logic_vector(16-1 downto 0) := x"0064"
	);
	Port ( clk_i : in  STD_LOGIC; -- 1Mhz
          srst_n_i : in  STD_LOGIC; 
          clock_enable_o : out  STD_LOGIC);
end clock_enable;

architecture Behavioral of clock_enable is
	signal s_cnt : std_logic_vector(16-1 downto 0) := x"0000";
begin
--------------------------------------------------------------------
    -- p_clk_enable:
    -- Generate clock enable signal instead of creating another clock 
    -- domain. By default enable signal is low and generated pulse is 
    -- always one clock long.
    --------------------------------------------------------------------
    p_clk_enable : process(clk_i)
    begin
        if rising_edge(clk_i) then  -- Rising clock edge
            if srst_n_i = '0' then  -- Synchronous reset (active low)
                s_cnt <= (others => '0');   -- Clear all bits
                clock_enable_o <= '0';
            else
                if s_cnt >= g_NPERIOD-1 then
                    s_cnt <= (others => '0');
                    clock_enable_o <= '1';
                else
                    s_cnt <= s_cnt + x"0001";
                    clock_enable_o <= '0';
                end if;
            end if;
        end if;
    end process p_clk_enable;

end Behavioral;

