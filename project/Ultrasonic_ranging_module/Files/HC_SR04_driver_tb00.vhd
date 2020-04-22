--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:59:04 04/22/2020
-- Design Name:   
-- Module Name:   D:/Xilinx ISE projects/Ultrasonic_range_detector/HC_SR04_driver_tb00.vhd
-- Project Name:  Ultrasonic_range_detector
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: HC_SR04_driver
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
 
ENTITY HC_SR04_driver_tb00 IS
END HC_SR04_driver_tb00;
 
ARCHITECTURE behavior OF HC_SR04_driver_tb00 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT HC_SR04_driver
    PORT(
         srst_n_i : IN  std_logic;
         clk_i : IN  std_logic;
         echo_i : IN  std_logic;
         echo_time : OUT  std_logic_vector(14 downto 0);
         trigg_o : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal srst_n_i : std_logic := '0';
   signal clk_i : std_logic := '0';
   signal echo_i : std_logic := '0';

 	--Outputs
   signal echo_time : std_logic_vector(14 downto 0);
   signal trigg_o : std_logic;

   -- Clock period definitions
   constant clk_i_period : time := 1 us;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: HC_SR04_driver PORT MAP (
          srst_n_i => srst_n_i,
          clk_i => clk_i,
          echo_i => echo_i,
          echo_time => echo_time,
          trigg_o => trigg_o
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
      wait for 10 us;	

      srst_n_i <= '0';
		
		wait for clk_i_period*10;
		
		srst_n_i <= '1';
		
		wait for 20 us;
		
		echo_i <= '1';
		
		wait for 10080 us;
		
		echo_i <= '0';
		
		wait for 20 us;
		
		echo_i <= '1';
		
		wait for 5080 us;
		
		echo_i <= '0';
		
		wait for 20 us;
		
		wait for 20 us;
		
		echo_i <= '1';
		
		wait for 2460 us;
		
		echo_i <= '0';
		
		wait for 20 us;
		
      wait;
   end process;

END;
