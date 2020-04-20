----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    03/31/2020 
-- Design Name: 
-- Module Name:    driver_7seg - Behavioral 
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

library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;    -- Provides unsigned numerical computation

------------------------------------------------------------------------

entity driver_7seg is
port (
    clk_i    : in  std_logic;
    srst_n_i : in  std_logic;   -- Synchronous reset (active low)
    data0_i  : in  std_logic_vector(4-1 downto 0);  -- Input values
    data1_i  : in  std_logic_vector(4-1 downto 0);
    data2_i  : in  std_logic_vector(4-1 downto 0);
    data3_i  : in  std_logic_vector(4-1 downto 0);
    dp_i     : in  std_logic_vector(4-1 downto 0);  -- Decimal points
    
    dp_o     : out std_logic;                       -- Decimal point
    seg_o    : out std_logic_vector(7-1 downto 0);
    dig_o    : out std_logic_vector(4-1 downto 0)
);
end entity driver_7seg;

------------------------------------------------------------------------

architecture Behavioral of driver_7seg is
    signal s_en  : std_logic;
    signal s_hex : std_logic_vector(4-1 downto 0);
    signal s_cnt : std_logic_vector(2-1 downto 0) := "00";
begin

    --------------------------------------------------------------------
    -- Sub-block of clock_enable entity. Create s_en signal.
    CLOCK_EN : entity work.clock_enable
		generic map (
		g_NPERIOD => x"0028")
		port map (
	 srst_n_i => srst_n_i,
	 clk_i => clk_i,
	 clock_enable_o => s_en);


    --------------------------------------------------------------------
    -- Sub-block of hex_to_7seg entity
	 HEXTO7SEG : entity work.hex_to_7seg
	 port map (
	 hex_i => s_hex,
	 seg_o => seg_o);


    --------------------------------------------------------------------
    -- p_select_cnt:
    -- Sequential process with synchronous reset and clock enable,
    -- which implements an internal 2-bit counter s_cnt for multiplexer 
    -- selection bits.
    --------------------------------------------------------------------
    p_select_cnt : process (clk_i)
    begin
        if rising_edge(clk_i) then  -- Rising clock edge
            if srst_n_i = '0' then  -- Synchronous reset (active low)
                 s_cnt <= (others => '0');
            elsif s_en = '1' then
                s_cnt <= s_cnt + 1 ;
            end if;
        end if;
    end process p_select_cnt;

    --------------------------------------------------------------------
    -- p_mux:
    -- Combinational process which implements a 4-to-1 mux.
    --------------------------------------------------------------------
    p_mux : process (s_cnt)
    begin
        case s_cnt is
        when "00" =>
            s_hex <= data0_i;
				dp_o <= dp_i(0);
				dig_o <= "1110";
        when "01" =>
            s_hex <= data1_i;
            dp_o <= dp_i(1);
            dig_o <= "1101";
        when "10" =>
            s_hex <= data2_i;
            dp_o <= dp_i(2);
            dig_o <= "1011";
        when others =>
            s_hex <= data3_i;
            dp_o <= dp_i(3);
            dig_o <= "0111";
        end case;
    end process p_mux;

end architecture Behavioral;