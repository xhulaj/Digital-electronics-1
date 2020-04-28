----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:45:59 04/19/2020 
-- Design Name: 
-- Module Name:    binary_2bcd - Behavioral 
-- Project Name: 	 Ultrasonic_range_detector
-- Target Devices: CoolRunner-II CPLD starter board-- Tool versions: 
-- Description:    Binary to Binary coded Decimal convertor
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
use ieee.std_logic_unsigned.all;



entity bin_to_bcd is
	 Generic (
				N : integer := 14;
				N_BCD : integer:= 18
				);
    Port ( 
			   distance : in  std_logic_vector (N-1 downto 0);
				data0_o, data1_o, data2_o, data3_o : out  std_logic_vector (4-1 downto 0);
				dec_point : out std_logic_vector(4-1 downto 0) := "1110"
				);
end bin_to_bcd;

architecture Behavioral of bin_to_bcd is

		signal num_bcd: std_logic_vector (N_BCD-1 downto 0):= (others => '0');
begin
p_bcd: process(distance)
        variable z: std_logic_vector(N+N_BCD-1 downto 0);
    begin
        -- Initialization of data to z
        z := (others => '0');
        -- First three left shifts
        z(N+2 downto 3) := distance;
        -- Loop for the remaining shifts
        for i in 0 to N-4 loop
            
            if z(N+3 downto N) > "0100" then
                z(N+3 downto N) := z(N+3 downto N) + 3;-- jednotky (4 bity)
            end if;
            
            if z(N+7 downto N+4) > "0100" then
                z(N+7 downto N+4) := z(N+7 downto N+4) + 3; -- desitky(4 bity)
            end if;
            
            if z(N+11 downto N+8) > "0100" then
                z(N+11 downto N+8) := z(N+11 downto N+8) +3; -- stovky (4 bits)
            end if;
            
            if z(N+14 downto N+12) > "0100" then
                z(N+14 downto N+12) := z(N+14 downto N+12) + 3; -- tisice (4 bits)
            end if;
            
            z(N+N_BCD-1 downto 1) := z(N+N_BCD-2 downto 0); -- posun do leva
        end loop;
        
        num_bcd <= z(N+N_BCD-1 downto N);      
		  
    end process p_bcd;
	 
		data0_o <= num_bcd( 15 downto 12); 
		data1_o <= num_bcd( 11 downto 8);		
		data2_o <= num_bcd( 7 downto 4);
		data3_o <= num_bcd( 3 downto 0);


end Behavioral;
