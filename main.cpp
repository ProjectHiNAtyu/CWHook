//><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><//
// [ IW8 ] Force offline mode Fence bypass - 1.57 Edition
//><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><//

//=================================================================//
// 
// [ Credits ]
// 
// Main coding                    : HiNAtyu Studio    ( https://github.com/ProjectHiNAtyu )
// Special support                : Sku-111           ( https://github.com/Sku-111 )
// Very helpful                   : h00dbyair         ( https://pastebin.com/uNWFy651 )
// Basic system and documentation : Project Donetsk   ( https://github.com/ProjectDonetsk/IW8-1.20 )
// arxan Bypass base project      : mallgrab / CWHook ( https://github.com/mallgrab/CWHook )
// arxan Integrity Checks Infos   : momo5502          ( https://momo5502.com/posts/2022-11-17-reverse-engineering-integrity-checks-in-black-ops-3/ )
// Some debugging reference       : iw8-mod           ( https://github.com/xifil/iw8-mod )
// 
//=================================================================//

//=================================================================//
// 
// [ Contact ]
// 
// Creator       : HiNAtyu Studio
// Update date   : 2024/07/06
// YouTube       : https://www.youtube.com/channel/UCmxJAnVPtkStQVKrvAVMZSw
// Twitter 1     : @KonataGIF ( https://x.com/KonataGIF )
// Twitter 2     : @H1NAtyu ( https://twitter.com/H1NAtyu )
// Discord       : hinatapoko ( https://discordapp.com/users/239453096026046464 )
// 
//=================================================================//

//=================================================================//
// 
// [ Promotion ]
// 
// I'd be very happy if you could follow, subscribe, like, or comment on my various SNS accounts.
// If you like my work, I'd be happy if you could sponsor or donate.
// This will help facilitate the development of new features and fixes.
// 
// Ko-fi : https://ko-fi.com/hinatyustudio
// BTC   : 32J66dfWi9dqqWHS2RYR9rFCUNBL88vgUR
// ETH   : 0xaE5D5b3e8E865B2bA676a24eF41d5f4CBD315978
// 
//=================================================================//

//=================================================================//
// 
// [ Project Info ]
// 
// Game title         : Call of Duty : Modern Warfare ( 2019 )
// Game code          : IW8 / CoD16 / MW19 / MW2019 / CoD2019 / CoD:MW
// Game released year : 2019
// Platform           : PC ( BattleNet )
// Build version      : 1.57
// Game mode          : CP / MP ( Co-op / Multiplayer )
// 
//=================================================================//

//=================================================================//
// 
// [ Caution! ]
// 
// * This project was created for research, development and educational purposes.
// * The project administrators are not responsible for any misuse of this project, use at your own risk.
// * There is no warranty or support for the use of this project
// * You must legally own the game in order to run this project, cracked/pirated versions of the game are not supported.
// * This project was created as part of technical verification and educational learning of C++ programming.
// * This project was not created for the purpose of increasing the number of cheaters (users who use cheats), hackers or trolls.
// * This project was created on the premise that it will only work in private spaces (private matches, offline builds, offline modes), not in environments with a large number of unspecified users such as public battles.
// * I, the developer, have only checked the operation of this project in the private space mentioned above, and I use it mainly for personal use, fun and play.
// * The functions performed by this project do not affect the current server (networks with general users).
// * We do not recommend using this project in public places other than the private spaces mentioned above, so please be sure to run it in a private space.
// * If you use this project in an environment other than the recommended environment or for other than the recommended purpose, I, the developer, will not be held responsible for any problems or risks that may occur, or serious measures such as account bans. Please use at your own risk.
// * I, the developer, take no responsibility for any serious actions, such as Call of Duty BAN (account ban), that may occur while using this project. All responsibility lies with the user himself.
// 
// * This project is designed to work with the game "Call of Duty Modern Warfare (IW8 / CoD16 / MW19 / MW2019 / CoD2019 / CoD:MW)".
// * This project is designed to work with the "PC BattleNet version 1.57 build" of the above game.
// * This project is not intended for use with game titles, environments, or platforms other than the above games.
// * If you use this project in an environment other than the recommended environment or for purposes other than the recommended purpose, I, the developer, will not be held responsible in any case, so please use at your own risk.
// 
//=================================================================//

//=================================================================//
// 
// [ Issue ]
// 
// This project does not yet include arxan Bypass.
// I need to port CWHook created by mallgrab to MW19...
// Please understand that this project is only meant to bypass FenceOnline and give you access to the Local Multiplayer frontend.
// For more information about arxan Bypass, please refer to the following:
// 
// mallgrab : CWHook                                              ( https://github.com/mallgrab/CWHook )
// momo5502 : Reverse Engineering Integrity Checks in Black Ops 3 ( https://momo5502.com/posts/2022-11-17-reverse-engineering-integrity-checks-in-black-ops-3/ )
// 
//=================================================================//





// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// en : Header include
// ja : ヘッダー組み込み
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //



#include <asmjit/core/operand.h>
#include <asmjit/x86/x86operand.h>
#define PHNT_VERSION PHNT_WIN10_22H2
#include <phnt_windows.h>
#include <phnt.h>
#include <ntexapi.h>
#include <ntpsapi.h>
#include <minidumpapiset.h>

#include <TlHelp32.h>
#include <mmeapi.h>

#include <filesystem>
#include <string.h>
#include <stdio.h>
#include <intrin.h>
#include <filesystem>

#include "libs/minhook/include/MinHook.h"
#include "restorentdll.h"
#include "utils.h"
#include "systemhooks.h"
#include "exceptions.h"
#include "arxan.h"
#include "instrumentationCallbacks.h"
#include "paths.h"
#include "syscalls.h"



#include <DbgHelp.h>
#include <iostream>
#include <fstream>
#include <map>
#include <shlobj.h>
#include "zlib.h"
#pragma comment(lib, "DbgHelp.lib")



//++++++++++++++++++++++++++++++
// en : main process
// ja : メイン処理
//++++++++++++++++++++++++++++++
int main()
{
	uint64_t baseAddr = reinterpret_cast<uint64_t>(GetModuleHandle(nullptr));

	HANDLE hFile = CreateFile("C://Windows//System32//ntdll.dll", GENERIC_READ,
		FILE_SHARE_READ, NULL, OPEN_EXISTING,
		FILE_ATTRIBUTE_NORMAL, NULL);
	LARGE_INTEGER size;
	GetFileSizeEx(hFile, &size);
	ntdllSize = 4096 * ceil(size.QuadPart / 4096.0f);

	exceptionHandle = AddVectoredExceptionHandler(true, exceptionHandler);

	auto* const peb = reinterpret_cast<PPEB>(__readgsqword(0x60));
	peb->BeingDebugged = false;
	*reinterpret_cast<PDWORD>(LPSTR(peb) + 0xBC) &= ~0x70;

	AllocConsole();
	freopen("CONIN$", "r", stdin);
	freopen("CONOUT$", "w", stdout);
	freopen("CONOUT$", "w", stderr);
	
	printf( "|| ==================================================================================================== ||\n" );
	printf( "||                                                                                                      ||\n" );
	printf( "|| [ MW2019/IW8 ] Project Donetsk Returned - V1.57                                                      ||\n" );
	printf( "||                                                                                                      ||\n" );
	printf( "|| < Credit >                                                                                           ||\n" );
	printf( "||   - Project created    : HiNAtyu                                                                     ||\n" );
	printf( "||   - Special support    : Sku-111                                                                     ||\n" );
	printf( "||   - Very helpful       : h00dbyair                                                                   ||\n" );
	printf( "||   - Basic infos        : Project Donetsk                                                             ||\n" );
	printf( "||   - arxan Bypass infos : mallgrab                                                                    ||\n" );
	printf( "||   - arxan Bypass infos : momo5502                                                                    ||\n" );
	printf( "||   - Some debug code    : iw8-mod                                                                     ||\n" );
	printf( "||                                                                                                      ||\n" );
	printf( "||  ----- ----- ----- -----  ----- ----- ----- -----  ----- ----- ----- -----  ----- ----- ----- -----  ||\n" );
	printf( "||                                                                                                      ||\n" );
	printf( "|| < About >                                                                                            ||\n" );
	printf( "|| This proj was made bcs I wanted see Godzilla lol                                                     ||\n" );
	printf( "|| I'm not a client developer.                                                                          ||\n" );
	printf( "|| So, I didn’t code it skillfully.                                                                    ||\n" );
	printf( "|| I don’t plan to maintain or update it much.                                                         ||\n" );
	printf( "|| I included basic modding functions.                                                                  ||\n" );
	printf( "|| Enjoy it freely!                                                                                     ||\n" );
	printf( "||                                                                                                      ||\n" );
	printf( "||  ----- ----- ----- -----  ----- ----- ----- -----  ----- ----- ----- -----  ----- ----- ----- -----  ||\n" );
	printf( "||                                                                                                      ||\n" );
	printf( "|| < Promotion >                                                                                        ||\n" );
	printf( "|| Please follow, like, or comment on my SNS.                                                           ||\n" );
	printf( "|| If you like my work,                                                                                 ||\n" );
	printf( "|| consider donating to support new features & fixes.                                                   ||\n" );
	printf( "||                                                                                                      ||\n" );
	printf( "||   - YouTube : HiNAtyu Studio                                                                         ||\n" );
	printf( "||   - Twitter : @KonataGIF                                                                             ||\n" );
	printf( "||   - Discord : hinatapoko                                                                             ||\n" );
	printf( "||   - Ko-fi   : https://ko-fi.com/hinatyustudio                                                        ||\n" );
	printf( "||   - BTC     : 32J66dfWi9dqqWHS2RYR9rFCUNBL88vgUR                                                     ||\n" );
	printf( "||   - ETH     : 0xaE5D5b3e8E865B2bA676a24eF41d5f4CBD315978                                             ||\n" );
	printf( "||                                                                                                      ||\n" );
	printf( "|| ==================================================================================================== ||\n" );
	printf( "\n" );

	printf("address %llx\n", baseAddr);
	//inputHandle = CreateThread(nullptr, 0, ConsoleInput, module, 0, &inputThreadId);
	//printf("inputThreadId: %llx\n", inputThreadId);

	SetSyscallsFromNtdll();
	RestoreNtdllDbgFunctions();
	MH_Initialize();
	InitializeSystemHooks();

	logFile = fopen("log.txt", "w+");

	// disable audio being turned on
	DWORD dwVolume;
	if (waveOutGetVolume(NULL, &dwVolume) == MMSYSERR_NOERROR)
		waveOutSetVolume(NULL, 0);

	HMODULE moduleNtdll = GetModuleHandle("ntdll.dll");

	/*

	const char* funcStr1 = "DbgBreakPoint";
	const char* funcStr2 = "DbgUserBreakPoint";
	const char* funcStr3 = "DbgUiConnectToDbg";
	
	void* funcAddr1 = GetProcAddress(moduleNtdll, funcStr1);
	void* funcAddr2 = GetProcAddress(moduleNtdll, funcStr2);
	void* funcAddr3 = GetProcAddress(moduleNtdll, funcStr3);
	//void* funcAddr4 = GetProcAddress(moduleNtdll, "RtlRaiseException");

	placeHardwareBP((char*)funcAddr1, 0, Condition::Execute);
	placeHardwareBP((char*)funcAddr2, 1, Condition::Execute);
	placeHardwareBP((char*)funcAddr3, 2, Condition::Execute);
	//placeHardwareBP((char*)funcAddr4, 3, Condition::Execute);

	printf("SetNtdllDebugBreakpoints: Setting HWBP %d on %s at 0x%p (ntdll+0x%X)\n", 0, funcStr1, funcAddr1, (unsigned int)((char*)funcAddr1 - (char*)moduleNtdll));
	printf("SetNtdllDebugBreakpoints: Setting HWBP %d on %s at 0x%p (ntdll+0x%X)\n", 1, funcStr2, funcAddr2, (unsigned int)((char*)funcAddr2 - (char*)moduleNtdll));
	printf("SetNtdllDebugBreakpoints: Setting HWBP %d on %s at 0x%p (ntdll+0x%X)\n", 2, funcStr3, funcAddr3, (unsigned int)((char*)funcAddr3 - (char*)moduleNtdll));
	//printf("SetNtdllDebugBreakpoints: Setting HWBP %d on %s at 0x%p (ntdll+0x%X)\n", 3, "RtlRaiseException"	, funcAddr4, (unsigned int)((char*)funcAddr4 - (char*)ntdllModule));


	*/










	/*
	HMODULE ntdllModule = GetModuleHandleA("ntdll.dll");
	HMODULE kernel32Module = GetModuleHandleA("kernel32.dll");

	const char* funcStr4 = "DbgUiDebugActiveProcess";
	const char* funcStr5 = "DbgUiGetThreadDebugObject";
	const char* funcStr6 = "DbgUiIssueRemoteBreakin";
	const char* funcStr7 = "DbgUiRemoteBreakin";

	void* funcAddr4 = GetProcAddress(ntdllModule, funcStr4);
	void* funcAddr5 = GetProcAddress(ntdllModule, funcStr5);
	void* funcAddr6 = GetProcAddress(ntdllModule, funcStr6);
	void* funcAddr7 = GetProcAddress(ntdllModule, funcStr7);


	placeHardwareBP((char*)funcAddr4, 0, Condition::Execute);
	placeHardwareBP((char*)funcAddr5, 1, Condition::Execute);
	placeHardwareBP((char*)funcAddr6, 2, Condition::Execute);
	placeHardwareBP((char*)funcAddr7, 3, Condition::Execute);

	printf("SetArxanCrashDetectionBreakpoints: Setting HWBP %d on %s at 0x%p (dll+0x%X)\n"	, 0, funcStr4, funcAddr4, (unsigned int)((char*)funcAddr4 - (char*)ntdllModule));
	printf("SetArxanCrashDetectionBreakpoints: Setting HWBP %d on %s at 0x%p (dll+0x%X)\n"	, 1, funcStr5, funcAddr5, (unsigned int)((char*)funcAddr5 - (char*)ntdllModule));
	printf("SetArxanCrashDetectionBreakpoints: Setting HWBP %d on %s at 0x%p (dll+0x%X)\n"	, 2, funcStr6, funcAddr6, (unsigned int)((char*)funcAddr6 - (char*)ntdllModule));
	printf("SetArxanCrashDetectionBreakpoints: Setting HWBP %d on %s at 0x%p (dll+0x%X)\n"	, 3, funcStr7, funcAddr7, (unsigned int)((char*)funcAddr7 - (char*)ntdllModule));
	*/
	/*
	
	*/


	/*
	void* exitProcess = GetProcAddress(kernel32Module, "ExitProcess");
	void* terminateProcess = GetProcAddress(kernel32Module, "TerminateProcess");
	void* ntTerminateProcess = GetProcAddress(ntdllModule, "NtTerminateProcess");
	void* ntRaiseHardError = GetProcAddress(ntdllModule, "NtRaiseHardError");
	void* ntClose = GetProcAddress(ntdllModule, "NtClose");
	void* ntSetInformationProcess = GetProcAddress(ntdllModule, "NtSetInformationProcess");
	void* rtlReportException = GetProcAddress(ntdllModule, "RtlReportException");


	if (exitProcess) printf("  ExitProcess: 0x%p (kernel32+0x%X)\n", exitProcess, (unsigned int)((char*)exitProcess - (char*)kernel32Module));
	if (terminateProcess) printf("  TerminateProcess: 0x%p (kernel32+0x%X)\n", terminateProcess, (unsigned int)((char*)terminateProcess - (char*)kernel32Module));
	if (ntTerminateProcess) printf("  NtTerminateProcess: 0x%p (ntdll+0x%X)\n", ntTerminateProcess, (unsigned int)((char*)ntTerminateProcess - (char*)ntdllModule));
	if (ntRaiseHardError) printf("  NtRaiseHardError: 0x%p (ntdll+0x%X)\n", ntRaiseHardError, (unsigned int)((char*)ntRaiseHardError - (char*)ntdllModule));
	if (ntClose) printf("  NtClose: 0x%p (ntdll+0x%X)\n", ntClose, (unsigned int)((char*)ntClose - (char*)ntdllModule));
	if (ntSetInformationProcess) printf("  NtSetInformationProcess: 0x%p (ntdll+0x%X)\n", ntSetInformationProcess, (unsigned int)((char*)ntSetInformationProcess - (char*)ntdllModule));
	if (rtlReportException) printf("  RtlReportException: 0x%p (ntdll+0x%X)\n", rtlReportException, (unsigned int)((char*)rtlReportException - (char*)ntdllModule));
	*/


	/*
	printf("SetArxanCrashDetectionBreakpoints: Setting up crash detection HWBPs\n");

	HMODULE ntdllModule = GetModuleHandleA("ntdll.dll");
	HMODULE kernel32Module = GetModuleHandleA("kernel32.dll");

	if (!ntdllModule || !kernel32Module) {
		printf("ERROR: Failed to get module handles for crash detection\n");
		//return;
	}
	else
	{
		// 終了系関数のアドレスを取得
		void* exitProcess = GetProcAddress(kernel32Module, "ExitProcess");
		void* terminateProcess = GetProcAddress(kernel32Module, "TerminateProcess");
		void* ntTerminateProcess = GetProcAddress(ntdllModule, "NtTerminateProcess");
		void* ntRaiseHardError = GetProcAddress(ntdllModule, "NtRaiseHardError");
		void* ntClose = GetProcAddress(ntdllModule, "NtClose");
		void* ntSetInformationProcess = GetProcAddress(ntdllModule, "NtSetInformationProcess");
		void* rtlReportException = GetProcAddress(ntdllModule, "RtlReportException");

		printf("MW19: Crash detection target functions:\n");
		if (exitProcess) printf("  ExitProcess: 0x%p (kernel32+0x%X)\n", exitProcess, (unsigned int)((char*)exitProcess - (char*)kernel32Module));
		if (terminateProcess) printf("  TerminateProcess: 0x%p (kernel32+0x%X)\n", terminateProcess, (unsigned int)((char*)terminateProcess - (char*)kernel32Module));
		if (ntTerminateProcess) printf("  NtTerminateProcess: 0x%p (ntdll+0x%X)\n", ntTerminateProcess, (unsigned int)((char*)ntTerminateProcess - (char*)ntdllModule));
		if (ntRaiseHardError) printf("  NtRaiseHardError: 0x%p (ntdll+0x%X)\n", ntRaiseHardError, (unsigned int)((char*)ntRaiseHardError - (char*)ntdllModule));
		if (ntClose) printf("  NtClose: 0x%p (ntdll+0x%X)\n", ntClose, (unsigned int)((char*)ntClose - (char*)ntdllModule));
		if (ntSetInformationProcess) printf("  NtSetInformationProcess: 0x%p (ntdll+0x%X)\n", ntSetInformationProcess, (unsigned int)((char*)ntSetInformationProcess - (char*)ntdllModule));
		if (rtlReportException) printf("  RtlReportException: 0x%p (ntdll+0x%X)\n", rtlReportException, (unsigned int)((char*)rtlReportException - (char*)ntdllModule));

		// 現在のHWBP状態を確認
		CONTEXT ctx = { 0 };
		ctx.ContextFlags = CONTEXT_DEBUG_REGISTERS;
		GetThreadContext(GetCurrentThread(), &ctx);

		printf("Current HWBP state before crash detection setup:\n");
		printf("  Dr0: 0x%llX, Dr1: 0x%llX, Dr2: 0x%llX, Dr3: 0x%llX\n", ctx.Dr0, ctx.Dr1, ctx.Dr2, ctx.Dr3);
		printf("  Dr7: 0x%llX\n", ctx.Dr7);

		// クラッシュ検出用HWBP設置（優先順位順）
		std::vector<std::pair<void*, const char*>> crashFunctions = {
			{exitProcess, "ExitProcess"},
			{terminateProcess, "TerminateProcess"},
			{ntTerminateProcess, "NtTerminateProcess"},
			{ntRaiseHardError, "NtRaiseHardError"}
		};

		// 利用可能なHWBPスロットを動的に検索
		int availableSlots[4] = { -1, -1, -1, -1 };
		int slotCount = 0;

		if (ctx.Dr0 == 0) availableSlots[slotCount++] = 0;
		if (ctx.Dr1 == 0) availableSlots[slotCount++] = 1;
		if (ctx.Dr2 == 0) availableSlots[slotCount++] = 2;
		//if (ctx.Dr3 == 0) availableSlots[slotCount++] = 3;

		printf("Available HWBP slots: %d\n", slotCount);
		for (int i = 0; i < slotCount; i++) {
			printf("  Slot %d is available\n", availableSlots[i]);
		}

		int slotIndex = 0;
		for (const auto& func : crashFunctions) {
			if (func.first && slotIndex < slotCount) {
				int slot = availableSlots[slotIndex];

				// placeHardwareBP関数を使用してHWBPを設置
				placeHardwareBP(func.first, slot, Condition::Execute);
				printf("SetArxanCrashDetectionBreakpoints: HWBP %d set on %s at 0x%p\n",
					slot, func.second, func.first);
				slotIndex++;
			}
		}

		// 設定後のHWBP状態を確認
		ctx.ContextFlags = CONTEXT_DEBUG_REGISTERS;
		GetThreadContext(GetCurrentThread(), &ctx);
		printf("HWBP state after crash detection setup:\n");
		printf("  Dr0: 0x%llX, Dr1: 0x%llX, Dr2: 0x%llX, Dr3: 0x%llX\n", ctx.Dr0, ctx.Dr1, ctx.Dr2, ctx.Dr3);
		printf("  Dr7: 0x%llX\n", ctx.Dr7);

		printf("SetArxanCrashDetectionBreakpoints: Crash detection setup completed\n");
	}
	*/




	placeHardwareBP((char*)GetProcAddress(moduleNtdll, "NtAllocateVirtualMemory")+0x12, 3, Condition::Execute);

	//HMODULE moduleNtdll = GetModuleHandle("user32.dll");
	//placeHardwareBP((char*)GetProcAddress(moduleNtdll, "GetSystemMetrics")+0x12, 3, Condition::Execute);

	// arxan applies checksum checks & healing to INT2D
	NtdllAsmStub();

	// crashes the game after a while, only good if you want to know what syscalls get called from win32u & friends
	//initInstrumentation();

	//Initialization();

	return 0;
}

/*


	{"DbgBreakPoint",						(void*)0x1BFA100E, {0xFF, 0x25, 0x00, 0x00, 0x00, 0x00, 0xA0, 0xE0, 0x15, 0xB1, 0xFA, 0x7F, 0x00, 0x00}},
	{"DbgUserBreakPoint",					(void*)0x1E529177, {0xFF, 0x25, 0x00, 0x00, 0x00, 0x00, 0xA0, 0xE0, 0x15, 0xB1, 0xFA, 0x7F, 0x00, 0x00}},
	{"DbgUiConnectToDbg",					(void*)0x07694928, {0xFF, 0x25, 0x00, 0x00, 0x00, 0x00, 0xA0, 0xE0, 0x15, 0xB1, 0xFA, 0x7F, 0x00, 0x00}},
	{"DbgUiContinue",						(void*)0x1EA8F9BA, {0xFF, 0x25, 0x00, 0x00, 0x00, 0x00, 0xA0, 0xE0, 0x15, 0xB1, 0xFA, 0x7F, 0x00, 0x00}},
	{"DbgUiConvertStateChangeStructure",	(void*)0x1DBD8612, {0xFF, 0x25, 0x00, 0x00, 0x00, 0x00, 0xA0, 0xE0, 0x15, 0xB1, 0xFA, 0x7F, 0x00, 0x00}},
	{"DbgUiDebugActiveProcess",				(void*)0x1DFB2F44, {0xFF, 0x25, 0x00, 0x00, 0x00, 0x00, 0xA0, 0xE0, 0x15, 0xB1, 0xFA, 0x7F, 0x00, 0x00}},
	{"DbgUiGetThreadDebugObject",			(void*)0x1BD3FBF2, {0xFF, 0x25, 0x00, 0x00, 0x00, 0x00, 0xA0, 0xE0, 0x15, 0xB1, 0xFA, 0x7F, 0x00, 0x00}},
	{"DbgUiIssueRemoteBreakin",				(void*)0x1DB74F0B, {0xFF, 0x25, 0x00, 0x00, 0x00, 0x00, 0xA0, 0xE0, 0x15, 0xB1, 0xFA, 0x7F, 0x00, 0x00}},
	{"DbgUiRemoteBreakin",					(void*)0x1CB7AFD3, {0xFF, 0x25, 0x00, 0x00, 0x00, 0x00, 0xA0, 0xE0, 0x15, 0xB1, 0xFA, 0x7F, 0x00, 0x00}},
	{"DbgUiSetThreadDebugObject",			(void*)0x1BD63117, {0xFF, 0x25, 0x00, 0x00, 0x00, 0x00, 0xA0, 0xE0, 0x15, 0xB1, 0xFA, 0x7F, 0x00, 0x00}},
	{"DbgUiStopDebugging",					(void*)0x1BDB3908, {0xFF, 0x25, 0x00, 0x00, 0x00, 0x00, 0xA0, 0xE0, 0x15, 0xB1, 0xFA, 0x7F, 0x00, 0x00}},
	{"DbgUiWaitStateChange",				(void*)0x1BF02D1B, {0xFF, 0x25, 0x00, 0x00, 0x00, 0x00, 0xA0, 0xE0, 0x15, 0xB1, 0xFA, 0x7F, 0x00, 0x00}},
	{"DbgPrintReturnControlC",				(void*)0x05E9DFE8, {0xFF, 0x25, 0x00, 0x00, 0x00, 0x00, 0xA0, 0xE0, 0x15, 0xB1, 0xFA, 0x7F, 0x00, 0x00}},
	{"DbgPrompt",							(void*)0x1D24ABA6, {0xFF, 0x25, 0x00, 0x00, 0x00, 0x00, 0xA0, 0xE0, 0x15, 0xB1, 0xFA, 0x7F, 0x00, 0x00}},

*/