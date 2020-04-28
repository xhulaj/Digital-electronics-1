--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:58:29 04/26/2020
-- Design Name:   
-- Module Name:   C:/.Xilinx/BINtoBCD/bin_to_bcd_tb.vhd
-- Project Name:  BINtoBCD
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: bin_to_bcd
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
--------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use ieee.numeric_std.all;
 
entity bin_to_bcd_tb is
end bin_to_bcd_tb;
 
architecture behavior of bin_to_bcd_tb is
 
					-- Component Declaration for the Unit Under Test (UUT)
 
    component bin_to_bcd
    port(
         distance : in  std_logic_vector(13 downto 0);
         data0_o : out std_logic_vector(3 downto 0);
         data1_o : out  std_logic_vector(3 downto 0);
         data2_o : out  std_logic_vector(3 downto 0);
         data3_o : out  std_logic_vector(3 downto 0);
			dec_point : out std_logic_vector(4-1 downto 0)
        );
    end component;
    

   signal distance : std_logic_vector(13 downto 0) := (others => '0');

																	--Outputs
   signal data0_o : std_logic_vector(3 downto 0);
   signal data1_o : std_logic_vector(3 downto 0);
   signal data2_o : std_logic_vector(3 downto 0);
   signal data3_o : std_logic_vector(3 downto 0);
	signal dec_point : std_logic_vector(3 downto 0) := "0010";

											-- Clock period definitions
   constant clk_i_period : time := 1 us;
 
begin
 
	-- Instantiate the Unit Under Test (UUT)
   uut: bin_to_bcd port map (
          distance => distance,
          data0_o => data0_o,
          data1_o => data1_o,
          data2_o => data2_o,
          data3_o => data3_o,
			 dec_point => dec_point
        );

   -- Clock process definitions
   clk_i_process :process
   begin
		clk_i <= '0';
		wait for clk_i_period/2;
		clk_i <= '1';
		wait for clk_i_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		distance <= "11011011010101";

      wait for clk_i_period*10;
		
		distance <= "01110011011101";
		
      wait;
   end process;

END;