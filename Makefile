.PHONY: clean All

All:
	@echo "----------Building project:[ atm_machine - Debug ]----------"
	@cd "atm_machine" && "$(MAKE)" -f  "atm_machine.mk"
clean:
	@echo "----------Cleaning project:[ atm_machine - Debug ]----------"
	@cd "atm_machine" && "$(MAKE)" -f  "atm_machine.mk" clean
