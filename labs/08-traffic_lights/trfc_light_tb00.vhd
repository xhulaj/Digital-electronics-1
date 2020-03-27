--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:10:30 03/27/2020
-- Design Name:   
-- Module Name:   /home/ise/Documents/06-display_driver/traffic_light_controller/trfc_light_tb00.vhd
-- Project Name:  traffic_light_controller
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: e_trfc
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
 
ENTITY trfc_light_tb00 IS
END trfc_light_tb00;
 
ARCHITECTURE behavior OF trfc_light_tb00 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT e_trfc
    PORT(
         clk : IN  std_logic;
         srst : IN  std_logic;
         trfc_lights : OUT  std_logic_vector(5 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal srst : std_logic := '0';

 	--Outputs
   signal trfc_lights : std_logic_vector(5 downto 0);

   -- Clock period definitions
   constant clk_period : time := 333 ms;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: e_trfc PORT MAP (
          clk => clk,
          srst => srst,
          trfc_lights => trfc_lights
        );

   -- Clock process definitions
   clk_process :process
   begin
	while true loop
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
	end loop;
 end process;
   
   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
