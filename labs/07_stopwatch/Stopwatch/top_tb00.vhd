--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   13:42:23 04/29/2020
-- Design Name:   
-- Module Name:   D:/School_repositories/Digital-electronics-1/labs/07_stopwatch/Stopwatch/top_tb00.vhd
-- Project Name:  Stopwatch
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: driver_7seg
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
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
USE ieee.numeric_std.ALL;
 
ENTITY top_tb00 IS
END top_tb00;
 
ARCHITECTURE behavior OF top_tb00 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT driver_7seg
    PORT(
         clk_i : IN  std_logic;
         cnt_en_i : IN  std_logic;
         srst_n_i : IN  std_logic;
         seg_o : OUT  unsigned(6 downto 0);
         dig_o : OUT  unsigned(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk_i : std_logic := '0';
   signal cnt_en_i : std_logic := '0';
   signal srst_n_i : std_logic := '0';

 	--Outputs
   signal seg_o : unsigned(6 downto 0);
   signal dig_o : unsigned(3 downto 0);

   -- Clock period definitions
   constant clk_i_period : time := 100 us;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)s
   uut: driver_7seg PORT MAP (
          clk_i => clk_i,
          cnt_en_i => cnt_en_i,
          srst_n_i => srst_n_i,
          seg_o => seg_o,
          dig_o => dig_o
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

      wait for clk_i_period*10;

		cnt_en_i <= '1';
		
		wait for clk_i_period;
		
		cnt_en_i <= '0';
		
		
      wait;
   end process;

END;
