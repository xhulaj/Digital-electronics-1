library ieee;
use ieee.std_logic_1164.all;
--use ieee.std_logic_unsigned.all;
use ieee.numeric_std.all;

ENTITY e_trfc IS
	PORT ( 
				clk      : IN STD_LOGIC;
				srst     : IN STD_LOGIC := '1';
--				sht_dwn  : IN STD_LOGIC;
				trfc_lights : OUT STD_LOGIC_VECTOR( 5 DOWNTO 0 )
			);
END ENTITY e_trfc;
---------------------------------------------------
ARCHITECTURE RTL OF e_trfc IS
    
	 
	 TYPE type_state IS (ns_go, ns_stp, all_stp_0, ew_rdy, ew_go, ew_stp, all_stp_1, ns_rdy, ooo_lit, ooo_dim);
    SIGNAL    state  :  type_state := all_stp_0;
	 SIGNAL    count  :  unsigned(3 downto 0) := (others => '0');
    CONSTANT  SEC5   :  unsigned(3 downto 0) := "1111";
    CONSTANT  SEC1   :  unsigned(3 downto 0) := "0011";

	 BEGIN
	 activemode: PROCESS(clk)
		BEGIN
			IF rising_edge(clk) THEN
					if srst = '0' THEN
						state <= all_stp_0;
						count <= "0000";
			ELSE
			CASE state IS
					WHEN all_stp_0 =>
						IF count >= SEC1 THEN
							state <= ew_rdy;
							count <= "0000";
						ELSE
							count <= count + 1;
						END IF;
					WHEN ew_rdy =>
						IF count >= SEC1 THEN
							state <= ew_go;
							count <= "0000";
						ELSE
							count <= count + 1;
						END IF;
					WHEN ew_go =>
						IF count >= SEC5 THEN
							state <= ew_stp;
							count <= "0000";
						ELSE
							count <= count + 1;
						END IF;
					WHEN ew_stp =>
						IF count >= SEC1 THEN
							state <= all_stp_1;
							count <= "0000";
						ELSE
							count <= count + 1;
						END IF;
					WHEN all_stp_1 =>
						IF count >= SEC1 THEN
							state <= ns_rdy;
							count <= "0000";
						ELSE 
							count <= count + 1;
						END IF; 
					WHEN ns_rdy =>
						IF count >= SEC1 THEN
							state <= ns_go;
							count <= "0000";
						ELSE 
							count <= count + 1;
						END IF; 
					WHEN ns_go =>
						IF count >= SEC5 THEN
							state <= ns_stp;
							count <= "0000";
						ELSE
							count <= count + 1;
						END IF;
					WHEN ns_stp =>
						IF count >= SEC1 THEN
							state <= all_stp_0;
							count <= "0000";
						ELSE
							count <= count + 1;
						END IF;
					WHEN OTHERS =>
							state <= all_stp_0;
							count <= "0000";
				END CASE;
--			ELSE 
--				sht_dwn <= "1";
			END IF;
		END IF;
	END PROCESS activemode;
		
--	 passivemode: PROCESS  (clk, sht_dwn)
--		BEGIN
--			IF (sht_dwn = "1") AND rising_edge(clk) AND state != ( ooo_lit OR ooo_dim ) THEN
--				state <= ooo_dim;
--				count <= "0";
--			ELSIF ((sht_dwn = "1") AND rising_edge(clk)) THEN
--				CASE state IS
--					WHEN ooo_dim =>
--						IF count >= SEC1 THEN
--							state <= ooo_lit;
--							count <= "0";
--						ELSE
--							count <= count + "1";
--						END IF;
--					WHEN ooo_lit =>
--						IF count >= SEC1 THEN
--							state <= ooo_dim;
--							count <= "0";
--						ELSE
--							count <= count + "1";
--					END IF;
--				END CASE;
--			END IF;
--		END PROCESS;
------------------------------------------------------------------------------------
		traffic_lights: PROCESS(state)
			BEGIN
				CASE state IS
					WHEN all_stp_0 => trfc_lights <= "100100";
					WHEN ew_rdy => trfc_lights <= "100110";
					WHEN ew_go => trfc_lights <= "100001";
					WHEN ew_stp => trfc_lights <= "100010";
					WHEN all_stp_1 => trfc_lights <= "100100";
					WHEN ns_rdy => trfc_lights <= "110100";
					WHEN ns_go => trfc_lights <= "001100";
					WHEN ns_stp => trfc_lights <= "010100";
					WHEN OTHERS => trfc_lights <= "111111";
				END CASE;
			END PROCESS traffic_lights;
	END ARCHITECTURE RTL;