library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
--------------------------------------------------------------------------

entity Stopwatch is

port(
    clk_i       : in std_logic;
    ce_100Hz_i  : in std_logic;
    srst_n_i    : in std_logic;  -- active low
    cnt_en_i    : in std_logic;  -- active low
  
  
    sec_h_o     : out unsigned (4-1 downto 0); 
    sec_l_o     : out unsigned (4-1 downto 0); 
    hth_h_o     : out unsigned (4-1 downto 0); 
    hth_l_o     : out unsigned (4-1 downto 0)
	 );
end entity stopwatch;

architecture Behavioral of stopwatch is
    
	signal s_sec_h_o  	: unsigned (4-1 downto 0) := (others => '0');
	signal s_sec_l_o  	: unsigned (4-1 downto 0) := (others => '0');
	signal s_hth_h_o  	: unsigned (4-1 downto 0) := (others => '0');
	signal s_hth_l_o  	: unsigned (4-1 downto 0) := (others => '0');
   signal s_en			: std_logic := '1';	

begin

p_start : process(cnt_en_i)

	begin
		if rising_edge(cnt_en_i) then
		 s_en <= not(s_en);
		end if;
end process p_start;

p_Cnt: process(clk_i)

begin    
	if rising_edge(clk_i) then    	    
		if srst_n_i = '0' or (s_hth_l_o = 9 
									and s_hth_h_o = 9 
									and s_sec_l_o = 9 
									and s_sec_h_o = 5 )
			then
						s_sec_h_o <= (others => '0');  
						s_sec_l_o <= (others => '0');
						s_hth_h_o <= (others => '0');
						s_hth_l_o <= (others => '0');
                
		elsif (s_en = '1' and ce_100Hz_i = '1') then
				s_hth_l_o <= s_hth_l_o + 1;
                    
			if s_hth_l_o = 9 
				then
					s_hth_l_o <= (others => '0');
		   	    	s_hth_h_o <= s_hth_h_o + 1;
                    
				if s_hth_h_o = 9 
					then
						s_hth_h_o <= (others => '0');
						s_sec_l_o <= s_sec_l_o + 1;
                            
       				if s_sec_l_o = 9 
            			then
							s_sec_l_o <= (others => '0');
							s_sec_h_o <= s_sec_h_o + 1;
                                    
					end if;
				end if;
			end if;
		end if;
	end if;

end process; 

    hth_l_o <= s_hth_l_o;
    hth_h_o <= s_hth_h_o;
    sec_l_o <= s_sec_l_o;
    sec_h_o <= s_sec_h_o;

end architecture Behavioral;