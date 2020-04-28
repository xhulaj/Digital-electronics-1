--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:33:56 04/28/2020
-- Design Name:   
-- Module Name:   D:/Xilinx ISE projects/Ultrasonic_range_detector/top_tb00.vhd
-- Project Name:  Ultrasonic_range_detector
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: top
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
--USE ieee.numeric_std.ALL;
 
ENTITY top_tb00 IS
END top_tb00;
 
ARCHITECTURE behavior OF top_tb00 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT top
    PORT(
         s_clk_i : IN  std_logic;
         s_srst_n_i : IN  std_logic;
         echo : IN  std_logic;
         s_trigg : OUT  std_logic;
         s_seg_o : OUT  std_logic_vector(6 downto 0);
         s_dig_o : OUT  std_logic_vector(3 downto 0);
         s_dp_o : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal s_clk_i : std_logic := '0';
   signal s_srst_n_i : std_logic := '0';
   signal echo : std_logic := '0';

 	--Outputs
   signal s_trigg : std_logic;
   signal s_seg_o : std_logic_vector(6 downto 0);
   signal s_dig_o : std_logic_vector(3 downto 0);
   signal s_dp_o : std_logic;
  
   constant s_clk_i_period : time := 1 us;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: top PORT MAP (
          s_clk_i => s_clk_i,
          s_srst_n_i => s_srst_n_i,
          echo => echo,
          s_trigg => s_trigg,
          s_seg_o => s_seg_o,
          s_dig_o => s_dig_o,
          s_dp_o => s_dp_o
        );

   -- Clock process definitions
   s_clk_i_process : process
   begin
		s_clk_i <= '0';
		wait for s_clk_i_period/2;
		s_clk_i <= '1';
		wait for s_clk_i_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 10 us;	
		
		s_srst_n_i <= '1';
		
		wait for 40 us;
		
		echo <= '1';
		
		wait for 10080 us;
		
		echo <= '0';
		
		wait for 20 us;
		
		echo <= '1';
		
		wait for 250 us;
		
		echo <= '0';
		
		wait for 20 us;
		
		echo <= '1';
		
		wait for 2460 us;
		
		echo <= '0';
		
		wait for 20 us;

      -- insert stimulus here 

      wait;
   end process;

END;
