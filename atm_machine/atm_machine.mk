##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=atm_machine
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/Development/Documents/BCL-Banking-System
ProjectPath            :=C:/Users/Development/Documents/BCL-Banking-System/atm_machine
IntermediateDirectory  :=../build-$(ConfigurationName)/atm_machine
OutDir                 :=../build-$(ConfigurationName)/atm_machine
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Development
Date                   :=12/09/2019
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=../build-$(ConfigurationName)/atm_machine/admin_menu.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/atm_machine/main_menu.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/atm_machine/logo.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/atm_machine/gotoxy.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/atm_machine/utils.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/atm_machine/config.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/atm_machine/file_handling.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/atm_machine/main.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/atm_machine/atm_menu.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/atm_machine/admin.cpp$(ObjectSuffix) \
	../build-$(ConfigurationName)/atm_machine/Bycrpyt.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/atm_machine/Input.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/atm_machine/alert.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/atm_machine/card_validation.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/atm_machine/CARD.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/atm_machine/validation.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/atm_machine/crud.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/atm_machine/banking.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/atm_machine/auth.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/atm_machine/register_bank.cpp$(ObjectSuffix) \
	../build-$(ConfigurationName)/atm_machine/error.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/atm_machine/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\atm_machine" mkdir "..\build-$(ConfigurationName)\atm_machine"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\atm_machine" mkdir "..\build-$(ConfigurationName)\atm_machine"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/atm_machine/.d:
	@if not exist "..\build-$(ConfigurationName)\atm_machine" mkdir "..\build-$(ConfigurationName)\atm_machine"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/atm_machine/admin_menu.cpp$(ObjectSuffix): admin_menu.cpp ../build-$(ConfigurationName)/atm_machine/admin_menu.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Development/Documents/BCL-Banking-System/atm_machine/admin_menu.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/admin_menu.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/atm_machine/admin_menu.cpp$(DependSuffix): admin_menu.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/atm_machine/admin_menu.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/atm_machine/admin_menu.cpp$(DependSuffix) -MM admin_menu.cpp

../build-$(ConfigurationName)/atm_machine/admin_menu.cpp$(PreprocessSuffix): admin_menu.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/atm_machine/admin_menu.cpp$(PreprocessSuffix) admin_menu.cpp

../build-$(ConfigurationName)/atm_machine/main_menu.cpp$(ObjectSuffix): main_menu.cpp ../build-$(ConfigurationName)/atm_machine/main_menu.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Development/Documents/BCL-Banking-System/atm_machine/main_menu.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main_menu.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/atm_machine/main_menu.cpp$(DependSuffix): main_menu.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/atm_machine/main_menu.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/atm_machine/main_menu.cpp$(DependSuffix) -MM main_menu.cpp

../build-$(ConfigurationName)/atm_machine/main_menu.cpp$(PreprocessSuffix): main_menu.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/atm_machine/main_menu.cpp$(PreprocessSuffix) main_menu.cpp

../build-$(ConfigurationName)/atm_machine/logo.cpp$(ObjectSuffix): logo.cpp ../build-$(ConfigurationName)/atm_machine/logo.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Development/Documents/BCL-Banking-System/atm_machine/logo.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/logo.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/atm_machine/logo.cpp$(DependSuffix): logo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/atm_machine/logo.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/atm_machine/logo.cpp$(DependSuffix) -MM logo.cpp

../build-$(ConfigurationName)/atm_machine/logo.cpp$(PreprocessSuffix): logo.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/atm_machine/logo.cpp$(PreprocessSuffix) logo.cpp

../build-$(ConfigurationName)/atm_machine/gotoxy.cpp$(ObjectSuffix): gotoxy.cpp ../build-$(ConfigurationName)/atm_machine/gotoxy.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Development/Documents/BCL-Banking-System/atm_machine/gotoxy.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/gotoxy.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/atm_machine/gotoxy.cpp$(DependSuffix): gotoxy.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/atm_machine/gotoxy.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/atm_machine/gotoxy.cpp$(DependSuffix) -MM gotoxy.cpp

../build-$(ConfigurationName)/atm_machine/gotoxy.cpp$(PreprocessSuffix): gotoxy.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/atm_machine/gotoxy.cpp$(PreprocessSuffix) gotoxy.cpp

../build-$(ConfigurationName)/atm_machine/utils.cpp$(ObjectSuffix): utils.cpp ../build-$(ConfigurationName)/atm_machine/utils.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Development/Documents/BCL-Banking-System/atm_machine/utils.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/utils.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/atm_machine/utils.cpp$(DependSuffix): utils.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/atm_machine/utils.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/atm_machine/utils.cpp$(DependSuffix) -MM utils.cpp

../build-$(ConfigurationName)/atm_machine/utils.cpp$(PreprocessSuffix): utils.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/atm_machine/utils.cpp$(PreprocessSuffix) utils.cpp

../build-$(ConfigurationName)/atm_machine/config.cpp$(ObjectSuffix): config.cpp ../build-$(ConfigurationName)/atm_machine/config.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Development/Documents/BCL-Banking-System/atm_machine/config.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/config.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/atm_machine/config.cpp$(DependSuffix): config.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/atm_machine/config.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/atm_machine/config.cpp$(DependSuffix) -MM config.cpp

../build-$(ConfigurationName)/atm_machine/config.cpp$(PreprocessSuffix): config.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/atm_machine/config.cpp$(PreprocessSuffix) config.cpp

../build-$(ConfigurationName)/atm_machine/file_handling.cpp$(ObjectSuffix): file_handling.cpp ../build-$(ConfigurationName)/atm_machine/file_handling.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Development/Documents/BCL-Banking-System/atm_machine/file_handling.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/file_handling.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/atm_machine/file_handling.cpp$(DependSuffix): file_handling.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/atm_machine/file_handling.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/atm_machine/file_handling.cpp$(DependSuffix) -MM file_handling.cpp

../build-$(ConfigurationName)/atm_machine/file_handling.cpp$(PreprocessSuffix): file_handling.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/atm_machine/file_handling.cpp$(PreprocessSuffix) file_handling.cpp

../build-$(ConfigurationName)/atm_machine/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/atm_machine/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Development/Documents/BCL-Banking-System/atm_machine/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/atm_machine/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/atm_machine/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/atm_machine/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/atm_machine/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/atm_machine/main.cpp$(PreprocessSuffix) main.cpp

../build-$(ConfigurationName)/atm_machine/atm_menu.cpp$(ObjectSuffix): atm_menu.cpp ../build-$(ConfigurationName)/atm_machine/atm_menu.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Development/Documents/BCL-Banking-System/atm_machine/atm_menu.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/atm_menu.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/atm_machine/atm_menu.cpp$(DependSuffix): atm_menu.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/atm_machine/atm_menu.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/atm_machine/atm_menu.cpp$(DependSuffix) -MM atm_menu.cpp

../build-$(ConfigurationName)/atm_machine/atm_menu.cpp$(PreprocessSuffix): atm_menu.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/atm_machine/atm_menu.cpp$(PreprocessSuffix) atm_menu.cpp

../build-$(ConfigurationName)/atm_machine/admin.cpp$(ObjectSuffix): admin.cpp ../build-$(ConfigurationName)/atm_machine/admin.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Development/Documents/BCL-Banking-System/atm_machine/admin.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/admin.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/atm_machine/admin.cpp$(DependSuffix): admin.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/atm_machine/admin.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/atm_machine/admin.cpp$(DependSuffix) -MM admin.cpp

../build-$(ConfigurationName)/atm_machine/admin.cpp$(PreprocessSuffix): admin.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/atm_machine/admin.cpp$(PreprocessSuffix) admin.cpp

../build-$(ConfigurationName)/atm_machine/Bycrpyt.cpp$(ObjectSuffix): Bycrpyt.cpp ../build-$(ConfigurationName)/atm_machine/Bycrpyt.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Development/Documents/BCL-Banking-System/atm_machine/Bycrpyt.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Bycrpyt.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/atm_machine/Bycrpyt.cpp$(DependSuffix): Bycrpyt.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/atm_machine/Bycrpyt.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/atm_machine/Bycrpyt.cpp$(DependSuffix) -MM Bycrpyt.cpp

../build-$(ConfigurationName)/atm_machine/Bycrpyt.cpp$(PreprocessSuffix): Bycrpyt.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/atm_machine/Bycrpyt.cpp$(PreprocessSuffix) Bycrpyt.cpp

../build-$(ConfigurationName)/atm_machine/Input.cpp$(ObjectSuffix): Input.cpp ../build-$(ConfigurationName)/atm_machine/Input.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Development/Documents/BCL-Banking-System/atm_machine/Input.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Input.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/atm_machine/Input.cpp$(DependSuffix): Input.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/atm_machine/Input.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/atm_machine/Input.cpp$(DependSuffix) -MM Input.cpp

../build-$(ConfigurationName)/atm_machine/Input.cpp$(PreprocessSuffix): Input.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/atm_machine/Input.cpp$(PreprocessSuffix) Input.cpp

../build-$(ConfigurationName)/atm_machine/alert.cpp$(ObjectSuffix): alert.cpp ../build-$(ConfigurationName)/atm_machine/alert.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Development/Documents/BCL-Banking-System/atm_machine/alert.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/alert.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/atm_machine/alert.cpp$(DependSuffix): alert.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/atm_machine/alert.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/atm_machine/alert.cpp$(DependSuffix) -MM alert.cpp

../build-$(ConfigurationName)/atm_machine/alert.cpp$(PreprocessSuffix): alert.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/atm_machine/alert.cpp$(PreprocessSuffix) alert.cpp

../build-$(ConfigurationName)/atm_machine/card_validation.cpp$(ObjectSuffix): card_validation.cpp ../build-$(ConfigurationName)/atm_machine/card_validation.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Development/Documents/BCL-Banking-System/atm_machine/card_validation.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/card_validation.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/atm_machine/card_validation.cpp$(DependSuffix): card_validation.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/atm_machine/card_validation.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/atm_machine/card_validation.cpp$(DependSuffix) -MM card_validation.cpp

../build-$(ConfigurationName)/atm_machine/card_validation.cpp$(PreprocessSuffix): card_validation.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/atm_machine/card_validation.cpp$(PreprocessSuffix) card_validation.cpp

../build-$(ConfigurationName)/atm_machine/CARD.cpp$(ObjectSuffix): CARD.cpp ../build-$(ConfigurationName)/atm_machine/CARD.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Development/Documents/BCL-Banking-System/atm_machine/CARD.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/CARD.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/atm_machine/CARD.cpp$(DependSuffix): CARD.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/atm_machine/CARD.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/atm_machine/CARD.cpp$(DependSuffix) -MM CARD.cpp

../build-$(ConfigurationName)/atm_machine/CARD.cpp$(PreprocessSuffix): CARD.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/atm_machine/CARD.cpp$(PreprocessSuffix) CARD.cpp

../build-$(ConfigurationName)/atm_machine/validation.cpp$(ObjectSuffix): validation.cpp ../build-$(ConfigurationName)/atm_machine/validation.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Development/Documents/BCL-Banking-System/atm_machine/validation.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/validation.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/atm_machine/validation.cpp$(DependSuffix): validation.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/atm_machine/validation.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/atm_machine/validation.cpp$(DependSuffix) -MM validation.cpp

../build-$(ConfigurationName)/atm_machine/validation.cpp$(PreprocessSuffix): validation.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/atm_machine/validation.cpp$(PreprocessSuffix) validation.cpp

../build-$(ConfigurationName)/atm_machine/crud.cpp$(ObjectSuffix): crud.cpp ../build-$(ConfigurationName)/atm_machine/crud.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Development/Documents/BCL-Banking-System/atm_machine/crud.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/crud.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/atm_machine/crud.cpp$(DependSuffix): crud.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/atm_machine/crud.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/atm_machine/crud.cpp$(DependSuffix) -MM crud.cpp

../build-$(ConfigurationName)/atm_machine/crud.cpp$(PreprocessSuffix): crud.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/atm_machine/crud.cpp$(PreprocessSuffix) crud.cpp

../build-$(ConfigurationName)/atm_machine/banking.cpp$(ObjectSuffix): banking.cpp ../build-$(ConfigurationName)/atm_machine/banking.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Development/Documents/BCL-Banking-System/atm_machine/banking.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/banking.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/atm_machine/banking.cpp$(DependSuffix): banking.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/atm_machine/banking.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/atm_machine/banking.cpp$(DependSuffix) -MM banking.cpp

../build-$(ConfigurationName)/atm_machine/banking.cpp$(PreprocessSuffix): banking.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/atm_machine/banking.cpp$(PreprocessSuffix) banking.cpp

../build-$(ConfigurationName)/atm_machine/auth.cpp$(ObjectSuffix): auth.cpp ../build-$(ConfigurationName)/atm_machine/auth.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Development/Documents/BCL-Banking-System/atm_machine/auth.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/auth.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/atm_machine/auth.cpp$(DependSuffix): auth.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/atm_machine/auth.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/atm_machine/auth.cpp$(DependSuffix) -MM auth.cpp

../build-$(ConfigurationName)/atm_machine/auth.cpp$(PreprocessSuffix): auth.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/atm_machine/auth.cpp$(PreprocessSuffix) auth.cpp

../build-$(ConfigurationName)/atm_machine/register_bank.cpp$(ObjectSuffix): register_bank.cpp ../build-$(ConfigurationName)/atm_machine/register_bank.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Development/Documents/BCL-Banking-System/atm_machine/register_bank.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/register_bank.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/atm_machine/register_bank.cpp$(DependSuffix): register_bank.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/atm_machine/register_bank.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/atm_machine/register_bank.cpp$(DependSuffix) -MM register_bank.cpp

../build-$(ConfigurationName)/atm_machine/register_bank.cpp$(PreprocessSuffix): register_bank.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/atm_machine/register_bank.cpp$(PreprocessSuffix) register_bank.cpp

../build-$(ConfigurationName)/atm_machine/error.cpp$(ObjectSuffix): error.cpp ../build-$(ConfigurationName)/atm_machine/error.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Development/Documents/BCL-Banking-System/atm_machine/error.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/error.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/atm_machine/error.cpp$(DependSuffix): error.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/atm_machine/error.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/atm_machine/error.cpp$(DependSuffix) -MM error.cpp

../build-$(ConfigurationName)/atm_machine/error.cpp$(PreprocessSuffix): error.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/atm_machine/error.cpp$(PreprocessSuffix) error.cpp


-include ../build-$(ConfigurationName)/atm_machine//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


