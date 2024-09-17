#include <Windows.h>

#pragma region Proxy
struct dbghelp_dll {
	HMODULE dll;
	FARPROC oDbgHelpCreateUserDump;
	FARPROC oDbgHelpCreateUserDumpW;
	FARPROC oEnumDirTree;
	FARPROC oEnumDirTreeW;
	FARPROC oEnumerateLoadedModules;
	FARPROC oEnumerateLoadedModules64;
	FARPROC oEnumerateLoadedModulesEx;
	FARPROC oEnumerateLoadedModulesExW;
	FARPROC oEnumerateLoadedModulesW64;
	FARPROC oExtensionApiVersion;
	FARPROC oFindDebugInfoFile;
	FARPROC oFindDebugInfoFileEx;
	FARPROC oFindDebugInfoFileExW;
	FARPROC oFindExecutableImage;
	FARPROC oFindExecutableImageEx;
	FARPROC oFindExecutableImageExW;
	FARPROC oFindFileInPath;
	FARPROC oFindFileInSearchPath;
	FARPROC oGetSymLoadError;
	FARPROC oGetTimestampForLoadedLibrary;
	FARPROC oImageDirectoryEntryToData;
	FARPROC oImageDirectoryEntryToDataEx;
	FARPROC oImageNtHeader;
	FARPROC oImageRvaToSection;
	FARPROC oImageRvaToVa;
	FARPROC oImagehlpApiVersion;
	FARPROC oImagehlpApiVersionEx;
	FARPROC oMakeSureDirectoryPathExists;
	FARPROC oMiniDumpReadDumpStream;
	FARPROC oMiniDumpWriteDump;
	FARPROC oRangeMapAddPeImageSections;
	FARPROC oRangeMapCreate;
	FARPROC oRangeMapFree;
	FARPROC oRangeMapRead;
	FARPROC oRangeMapRemove;
	FARPROC oRangeMapWrite;
	FARPROC oRemoveInvalidModuleList;
	FARPROC oReportSymbolLoadSummary;
	FARPROC oSearchTreeForFile;
	FARPROC oSearchTreeForFileW;
	FARPROC oSetCheckUserInterruptShared;
	FARPROC oSetSymLoadError;
	FARPROC oStackWalk;
	FARPROC oStackWalk2;
	FARPROC oStackWalk64;
	FARPROC oStackWalkEx;
	FARPROC oSymAddSourceStream;
	FARPROC oSymAddSourceStreamA;
	FARPROC oSymAddSourceStreamW;
	FARPROC oSymAddSymbol;
	FARPROC oSymAddSymbolW;
	FARPROC oSymAddrIncludeInlineTrace;
	FARPROC oSymAllocDiaString;
	FARPROC oSymCleanup;
	FARPROC oSymCompareInlineTrace;
	FARPROC oSymDeleteSymbol;
	FARPROC oSymDeleteSymbolW;
	FARPROC oSymEnumLines;
	FARPROC oSymEnumLinesW;
	FARPROC oSymEnumProcesses;
	FARPROC oSymEnumSourceFileTokens;
	FARPROC oSymEnumSourceFiles;
	FARPROC oSymEnumSourceFilesW;
	FARPROC oSymEnumSourceLines;
	FARPROC oSymEnumSourceLinesW;
	FARPROC oSymEnumSym;
	FARPROC oSymEnumSymbols;
	FARPROC oSymEnumSymbolsEx;
	FARPROC oSymEnumSymbolsExW;
	FARPROC oSymEnumSymbolsForAddr;
	FARPROC oSymEnumSymbolsForAddrW;
	FARPROC oSymEnumSymbolsW;
	FARPROC oSymEnumTypes;
	FARPROC oSymEnumTypesByName;
	FARPROC oSymEnumTypesByNameW;
	FARPROC oSymEnumTypesW;
	FARPROC oSymEnumerateModules;
	FARPROC oSymEnumerateModules64;
	FARPROC oSymEnumerateModulesW64;
	FARPROC oSymEnumerateSymbols;
	FARPROC oSymEnumerateSymbols64;
	FARPROC oSymEnumerateSymbolsW;
	FARPROC oSymEnumerateSymbolsW64;
	FARPROC oSymFindDebugInfoFile;
	FARPROC oSymFindDebugInfoFileW;
	FARPROC oSymFindExecutableImage;
	FARPROC oSymFindExecutableImageW;
	FARPROC oSymFindFileInPath;
	FARPROC oSymFindFileInPathW;
	FARPROC oSymFreeDiaString;
	FARPROC oSymFromAddr;
	FARPROC oSymFromAddrW;
	FARPROC oSymFromIndex;
	FARPROC oSymFromIndexW;
	FARPROC oSymFromInlineContext;
	FARPROC oSymFromInlineContextW;
	FARPROC oSymFromName;
	FARPROC oSymFromNameW;
	FARPROC oSymFromToken;
	FARPROC oSymFromTokenW;
	FARPROC oSymFunctionTableAccess;
	FARPROC oSymFunctionTableAccess64;
	FARPROC oSymFunctionTableAccess64AccessRoutines;
	FARPROC oSymGetDiaSession;
	FARPROC oSymGetDiaSource;
	FARPROC oSymGetExtendedOption;
	FARPROC oSymGetFileLineOffsets64;
	FARPROC oSymGetHomeDirectory;
	FARPROC oSymGetHomeDirectoryW;
	FARPROC oSymGetLineFromAddr;
	FARPROC oSymGetLineFromAddr64;
	FARPROC oSymGetLineFromAddrEx;
	FARPROC oSymGetLineFromAddrW64;
	FARPROC oSymGetLineFromInlineContext;
	FARPROC oSymGetLineFromInlineContextW;
	FARPROC oSymGetLineFromName;
	FARPROC oSymGetLineFromName64;
	FARPROC oSymGetLineFromNameEx;
	FARPROC oSymGetLineFromNameW64;
	FARPROC oSymGetLineNext;
	FARPROC oSymGetLineNext64;
	FARPROC oSymGetLineNextEx;
	FARPROC oSymGetLineNextW64;
	FARPROC oSymGetLinePrev;
	FARPROC oSymGetLinePrev64;
	FARPROC oSymGetLinePrevEx;
	FARPROC oSymGetLinePrevW64;
	FARPROC oSymGetModuleBase;
	FARPROC oSymGetModuleBase64;
	FARPROC oSymGetModuleInfo;
	FARPROC oSymGetModuleInfo64;
	FARPROC oSymGetModuleInfoW;
	FARPROC oSymGetModuleInfoW64;
	FARPROC oSymGetOmapBlockBase;
	FARPROC oSymGetOmaps;
	FARPROC oSymGetOptions;
	FARPROC oSymGetScope;
	FARPROC oSymGetScopeW;
	FARPROC oSymGetSearchPath;
	FARPROC oSymGetSearchPathW;
	FARPROC oSymGetSourceFile;
	FARPROC oSymGetSourceFileChecksum;
	FARPROC oSymGetSourceFileChecksumW;
	FARPROC oSymGetSourceFileFromToken;
	FARPROC oSymGetSourceFileFromTokenByTokenName;
	FARPROC oSymGetSourceFileFromTokenByTokenNameW;
	FARPROC oSymGetSourceFileFromTokenW;
	FARPROC oSymGetSourceFileToken;
	FARPROC oSymGetSourceFileTokenByTokenName;
	FARPROC oSymGetSourceFileTokenByTokenNameW;
	FARPROC oSymGetSourceFileTokenW;
	FARPROC oSymGetSourceFileW;
	FARPROC oSymGetSourceVarFromToken;
	FARPROC oSymGetSourceVarFromTokenW;
	FARPROC oSymGetSymFromAddr;
	FARPROC oSymGetSymFromAddr64;
	FARPROC oSymGetSymFromName;
	FARPROC oSymGetSymFromName64;
	FARPROC oSymGetSymNext;
	FARPROC oSymGetSymNext64;
	FARPROC oSymGetSymPrev;
	FARPROC oSymGetSymPrev64;
	FARPROC oSymGetSymbolFile;
	FARPROC oSymGetSymbolFileW;
	FARPROC oSymGetTypeFromName;
	FARPROC oSymGetTypeFromNameW;
	FARPROC oSymGetTypeInfo;
	FARPROC oSymGetTypeInfoEx;
	FARPROC oSymGetUnwindInfo;
	FARPROC oSymInitialize;
	FARPROC oSymInitializeW;
	FARPROC oSymLoadModule;
	FARPROC oSymLoadModule64;
	FARPROC oSymLoadModuleEx;
	FARPROC oSymLoadModuleExW;
	FARPROC oSymMatchFileName;
	FARPROC oSymMatchFileNameW;
	FARPROC oSymMatchString;
	FARPROC oSymMatchStringA;
	FARPROC oSymMatchStringW;
	FARPROC oSymNext;
	FARPROC oSymNextW;
	FARPROC oSymPrev;
	FARPROC oSymPrevW;
	FARPROC oSymQueryInlineTrace;
	FARPROC oSymRefreshModuleList;
	FARPROC oSymRegisterCallback;
	FARPROC oSymRegisterCallback64;
	FARPROC oSymRegisterCallbackW64;
	FARPROC oSymRegisterFunctionEntryCallback;
	FARPROC oSymRegisterFunctionEntryCallback64;
	FARPROC oSymRegisterGetSourcePathPartCallback;
	FARPROC oSymRegisterSourceFileUrlListCallback;
	FARPROC oSymSearch;
	FARPROC oSymSearchW;
	FARPROC oSymSetContext;
	FARPROC oSymSetDiaSession;
	FARPROC oSymSetExtendedOption;
	FARPROC oSymSetHomeDirectory;
	FARPROC oSymSetHomeDirectoryW;
	FARPROC oSymSetOptions;
	FARPROC oSymSetParentWindow;
	FARPROC oSymSetScopeFromAddr;
	FARPROC oSymSetScopeFromIndex;
	FARPROC oSymSetScopeFromInlineContext;
	FARPROC oSymSetSearchPath;
	FARPROC oSymSetSearchPathW;
	FARPROC oSymSetServiceManager;
	FARPROC oSymSrvDeltaName;
	FARPROC oSymSrvDeltaNameW;
	FARPROC oSymSrvGetFileIndexInfo;
	FARPROC oSymSrvGetFileIndexInfoW;
	FARPROC oSymSrvGetFileIndexString;
	FARPROC oSymSrvGetFileIndexStringW;
	FARPROC oSymSrvGetFileIndexes;
	FARPROC oSymSrvGetFileIndexesW;
	FARPROC oSymSrvGetSupplement;
	FARPROC oSymSrvGetSupplementW;
	FARPROC oSymSrvIsStore;
	FARPROC oSymSrvIsStoreW;
	FARPROC oSymSrvStoreFile;
	FARPROC oSymSrvStoreFileW;
	FARPROC oSymSrvStoreSupplement;
	FARPROC oSymSrvStoreSupplementW;
	FARPROC oSymUnDName;
	FARPROC oSymUnDName64;
	FARPROC oSymUnloadModule;
	FARPROC oSymUnloadModule64;
	FARPROC oUnDecorateSymbolName;
	FARPROC oUnDecorateSymbolNameW;
	FARPROC oWinDbgExtensionDllInit;
	FARPROC o_EFN_DumpImage;
	FARPROC oblock;
	FARPROC ochksym;
	FARPROC odbghelp;
	FARPROC odh;
	FARPROC ofptr;
	FARPROC ohomedir;
	FARPROC oinlinedbg;
	FARPROC oitoldyouso;
	FARPROC olmi;
	FARPROC olminfo;
	FARPROC oomap;
	FARPROC ooptdbgdump;
	FARPROC ooptdbgdumpaddr;
	FARPROC osrcfiles;
	FARPROC ostack_force_ebp;
	FARPROC ostackdbg;
	FARPROC osym;
	FARPROC osymsrv;
	FARPROC ovc7fpo;
} dbghelp;

extern "C" {
	FARPROC PA = 0;
	int runASM();

	void fDbgHelpCreateUserDump() { PA = dbghelp.oDbgHelpCreateUserDump; runASM(); }
	void fDbgHelpCreateUserDumpW() { PA = dbghelp.oDbgHelpCreateUserDumpW; runASM(); }
	void fEnumDirTree() { PA = dbghelp.oEnumDirTree; runASM(); }
	void fEnumDirTreeW() { PA = dbghelp.oEnumDirTreeW; runASM(); }
	void fEnumerateLoadedModules() { PA = dbghelp.oEnumerateLoadedModules; runASM(); }
	void fEnumerateLoadedModules64() { PA = dbghelp.oEnumerateLoadedModules64; runASM(); }
	void fEnumerateLoadedModulesEx() { PA = dbghelp.oEnumerateLoadedModulesEx; runASM(); }
	void fEnumerateLoadedModulesExW() { PA = dbghelp.oEnumerateLoadedModulesExW; runASM(); }
	void fEnumerateLoadedModulesW64() { PA = dbghelp.oEnumerateLoadedModulesW64; runASM(); }
	void fExtensionApiVersion() { PA = dbghelp.oExtensionApiVersion; runASM(); }
	void fFindDebugInfoFile() { PA = dbghelp.oFindDebugInfoFile; runASM(); }
	void fFindDebugInfoFileEx() { PA = dbghelp.oFindDebugInfoFileEx; runASM(); }
	void fFindDebugInfoFileExW() { PA = dbghelp.oFindDebugInfoFileExW; runASM(); }
	void fFindExecutableImage() { PA = dbghelp.oFindExecutableImage; runASM(); }
	void fFindExecutableImageEx() { PA = dbghelp.oFindExecutableImageEx; runASM(); }
	void fFindExecutableImageExW() { PA = dbghelp.oFindExecutableImageExW; runASM(); }
	void fFindFileInPath() { PA = dbghelp.oFindFileInPath; runASM(); }
	void fFindFileInSearchPath() { PA = dbghelp.oFindFileInSearchPath; runASM(); }
	void fGetSymLoadError() { PA = dbghelp.oGetSymLoadError; runASM(); }
	void fGetTimestampForLoadedLibrary() { PA = dbghelp.oGetTimestampForLoadedLibrary; runASM(); }
	void fImageDirectoryEntryToData() { PA = dbghelp.oImageDirectoryEntryToData; runASM(); }
	void fImageDirectoryEntryToDataEx() { PA = dbghelp.oImageDirectoryEntryToDataEx; runASM(); }
	void fImageNtHeader() { PA = dbghelp.oImageNtHeader; runASM(); }
	void fImageRvaToSection() { PA = dbghelp.oImageRvaToSection; runASM(); }
	void fImageRvaToVa() { PA = dbghelp.oImageRvaToVa; runASM(); }
	void fImagehlpApiVersion() { PA = dbghelp.oImagehlpApiVersion; runASM(); }
	void fImagehlpApiVersionEx() { PA = dbghelp.oImagehlpApiVersionEx; runASM(); }
	void fMakeSureDirectoryPathExists() { PA = dbghelp.oMakeSureDirectoryPathExists; runASM(); }
	void fMiniDumpReadDumpStream() { PA = dbghelp.oMiniDumpReadDumpStream; runASM(); }
	void fMiniDumpWriteDump() { PA = dbghelp.oMiniDumpWriteDump; runASM(); }
	void fRangeMapAddPeImageSections() { PA = dbghelp.oRangeMapAddPeImageSections; runASM(); }
	void fRangeMapCreate() { PA = dbghelp.oRangeMapCreate; runASM(); }
	void fRangeMapFree() { PA = dbghelp.oRangeMapFree; runASM(); }
	void fRangeMapRead() { PA = dbghelp.oRangeMapRead; runASM(); }
	void fRangeMapRemove() { PA = dbghelp.oRangeMapRemove; runASM(); }
	void fRangeMapWrite() { PA = dbghelp.oRangeMapWrite; runASM(); }
	void fRemoveInvalidModuleList() { PA = dbghelp.oRemoveInvalidModuleList; runASM(); }
	void fReportSymbolLoadSummary() { PA = dbghelp.oReportSymbolLoadSummary; runASM(); }
	void fSearchTreeForFile() { PA = dbghelp.oSearchTreeForFile; runASM(); }
	void fSearchTreeForFileW() { PA = dbghelp.oSearchTreeForFileW; runASM(); }
	void fSetCheckUserInterruptShared() { PA = dbghelp.oSetCheckUserInterruptShared; runASM(); }
	void fSetSymLoadError() { PA = dbghelp.oSetSymLoadError; runASM(); }
	void fStackWalk() { PA = dbghelp.oStackWalk; runASM(); }
	void fStackWalk2() { PA = dbghelp.oStackWalk2; runASM(); }
	void fStackWalk64() { PA = dbghelp.oStackWalk64; runASM(); }
	void fStackWalkEx() { PA = dbghelp.oStackWalkEx; runASM(); }
	void fSymAddSourceStream() { PA = dbghelp.oSymAddSourceStream; runASM(); }
	void fSymAddSourceStreamA() { PA = dbghelp.oSymAddSourceStreamA; runASM(); }
	void fSymAddSourceStreamW() { PA = dbghelp.oSymAddSourceStreamW; runASM(); }
	void fSymAddSymbol() { PA = dbghelp.oSymAddSymbol; runASM(); }
	void fSymAddSymbolW() { PA = dbghelp.oSymAddSymbolW; runASM(); }
	void fSymAddrIncludeInlineTrace() { PA = dbghelp.oSymAddrIncludeInlineTrace; runASM(); }
	void fSymAllocDiaString() { PA = dbghelp.oSymAllocDiaString; runASM(); }
	void fSymCleanup() { PA = dbghelp.oSymCleanup; runASM(); }
	void fSymCompareInlineTrace() { PA = dbghelp.oSymCompareInlineTrace; runASM(); }
	void fSymDeleteSymbol() { PA = dbghelp.oSymDeleteSymbol; runASM(); }
	void fSymDeleteSymbolW() { PA = dbghelp.oSymDeleteSymbolW; runASM(); }
	void fSymEnumLines() { PA = dbghelp.oSymEnumLines; runASM(); }
	void fSymEnumLinesW() { PA = dbghelp.oSymEnumLinesW; runASM(); }
	void fSymEnumProcesses() { PA = dbghelp.oSymEnumProcesses; runASM(); }
	void fSymEnumSourceFileTokens() { PA = dbghelp.oSymEnumSourceFileTokens; runASM(); }
	void fSymEnumSourceFiles() { PA = dbghelp.oSymEnumSourceFiles; runASM(); }
	void fSymEnumSourceFilesW() { PA = dbghelp.oSymEnumSourceFilesW; runASM(); }
	void fSymEnumSourceLines() { PA = dbghelp.oSymEnumSourceLines; runASM(); }
	void fSymEnumSourceLinesW() { PA = dbghelp.oSymEnumSourceLinesW; runASM(); }
	void fSymEnumSym() { PA = dbghelp.oSymEnumSym; runASM(); }
	void fSymEnumSymbols() { PA = dbghelp.oSymEnumSymbols; runASM(); }
	void fSymEnumSymbolsEx() { PA = dbghelp.oSymEnumSymbolsEx; runASM(); }
	void fSymEnumSymbolsExW() { PA = dbghelp.oSymEnumSymbolsExW; runASM(); }
	void fSymEnumSymbolsForAddr() { PA = dbghelp.oSymEnumSymbolsForAddr; runASM(); }
	void fSymEnumSymbolsForAddrW() { PA = dbghelp.oSymEnumSymbolsForAddrW; runASM(); }
	void fSymEnumSymbolsW() { PA = dbghelp.oSymEnumSymbolsW; runASM(); }
	void fSymEnumTypes() { PA = dbghelp.oSymEnumTypes; runASM(); }
	void fSymEnumTypesByName() { PA = dbghelp.oSymEnumTypesByName; runASM(); }
	void fSymEnumTypesByNameW() { PA = dbghelp.oSymEnumTypesByNameW; runASM(); }
	void fSymEnumTypesW() { PA = dbghelp.oSymEnumTypesW; runASM(); }
	void fSymEnumerateModules() { PA = dbghelp.oSymEnumerateModules; runASM(); }
	void fSymEnumerateModules64() { PA = dbghelp.oSymEnumerateModules64; runASM(); }
	void fSymEnumerateModulesW64() { PA = dbghelp.oSymEnumerateModulesW64; runASM(); }
	void fSymEnumerateSymbols() { PA = dbghelp.oSymEnumerateSymbols; runASM(); }
	void fSymEnumerateSymbols64() { PA = dbghelp.oSymEnumerateSymbols64; runASM(); }
	void fSymEnumerateSymbolsW() { PA = dbghelp.oSymEnumerateSymbolsW; runASM(); }
	void fSymEnumerateSymbolsW64() { PA = dbghelp.oSymEnumerateSymbolsW64; runASM(); }
	void fSymFindDebugInfoFile() { PA = dbghelp.oSymFindDebugInfoFile; runASM(); }
	void fSymFindDebugInfoFileW() { PA = dbghelp.oSymFindDebugInfoFileW; runASM(); }
	void fSymFindExecutableImage() { PA = dbghelp.oSymFindExecutableImage; runASM(); }
	void fSymFindExecutableImageW() { PA = dbghelp.oSymFindExecutableImageW; runASM(); }
	void fSymFindFileInPath() { PA = dbghelp.oSymFindFileInPath; runASM(); }
	void fSymFindFileInPathW() { PA = dbghelp.oSymFindFileInPathW; runASM(); }
	void fSymFreeDiaString() { PA = dbghelp.oSymFreeDiaString; runASM(); }
	void fSymFromAddr() { PA = dbghelp.oSymFromAddr; runASM(); }
	void fSymFromAddrW() { PA = dbghelp.oSymFromAddrW; runASM(); }
	void fSymFromIndex() { PA = dbghelp.oSymFromIndex; runASM(); }
	void fSymFromIndexW() { PA = dbghelp.oSymFromIndexW; runASM(); }
	void fSymFromInlineContext() { PA = dbghelp.oSymFromInlineContext; runASM(); }
	void fSymFromInlineContextW() { PA = dbghelp.oSymFromInlineContextW; runASM(); }
	void fSymFromName() { PA = dbghelp.oSymFromName; runASM(); }
	void fSymFromNameW() { PA = dbghelp.oSymFromNameW; runASM(); }
	void fSymFromToken() { PA = dbghelp.oSymFromToken; runASM(); }
	void fSymFromTokenW() { PA = dbghelp.oSymFromTokenW; runASM(); }
	void fSymFunctionTableAccess() { PA = dbghelp.oSymFunctionTableAccess; runASM(); }
	void fSymFunctionTableAccess64() { PA = dbghelp.oSymFunctionTableAccess64; runASM(); }
	void fSymFunctionTableAccess64AccessRoutines() { PA = dbghelp.oSymFunctionTableAccess64AccessRoutines; runASM(); }
	void fSymGetDiaSession() { PA = dbghelp.oSymGetDiaSession; runASM(); }
	void fSymGetDiaSource() { PA = dbghelp.oSymGetDiaSource; runASM(); }
	void fSymGetExtendedOption() { PA = dbghelp.oSymGetExtendedOption; runASM(); }
	void fSymGetFileLineOffsets64() { PA = dbghelp.oSymGetFileLineOffsets64; runASM(); }
	void fSymGetHomeDirectory() { PA = dbghelp.oSymGetHomeDirectory; runASM(); }
	void fSymGetHomeDirectoryW() { PA = dbghelp.oSymGetHomeDirectoryW; runASM(); }
	void fSymGetLineFromAddr() { PA = dbghelp.oSymGetLineFromAddr; runASM(); }
	void fSymGetLineFromAddr64() { PA = dbghelp.oSymGetLineFromAddr64; runASM(); }
	void fSymGetLineFromAddrEx() { PA = dbghelp.oSymGetLineFromAddrEx; runASM(); }
	void fSymGetLineFromAddrW64() { PA = dbghelp.oSymGetLineFromAddrW64; runASM(); }
	void fSymGetLineFromInlineContext() { PA = dbghelp.oSymGetLineFromInlineContext; runASM(); }
	void fSymGetLineFromInlineContextW() { PA = dbghelp.oSymGetLineFromInlineContextW; runASM(); }
	void fSymGetLineFromName() { PA = dbghelp.oSymGetLineFromName; runASM(); }
	void fSymGetLineFromName64() { PA = dbghelp.oSymGetLineFromName64; runASM(); }
	void fSymGetLineFromNameEx() { PA = dbghelp.oSymGetLineFromNameEx; runASM(); }
	void fSymGetLineFromNameW64() { PA = dbghelp.oSymGetLineFromNameW64; runASM(); }
	void fSymGetLineNext() { PA = dbghelp.oSymGetLineNext; runASM(); }
	void fSymGetLineNext64() { PA = dbghelp.oSymGetLineNext64; runASM(); }
	void fSymGetLineNextEx() { PA = dbghelp.oSymGetLineNextEx; runASM(); }
	void fSymGetLineNextW64() { PA = dbghelp.oSymGetLineNextW64; runASM(); }
	void fSymGetLinePrev() { PA = dbghelp.oSymGetLinePrev; runASM(); }
	void fSymGetLinePrev64() { PA = dbghelp.oSymGetLinePrev64; runASM(); }
	void fSymGetLinePrevEx() { PA = dbghelp.oSymGetLinePrevEx; runASM(); }
	void fSymGetLinePrevW64() { PA = dbghelp.oSymGetLinePrevW64; runASM(); }
	void fSymGetModuleBase() { PA = dbghelp.oSymGetModuleBase; runASM(); }
	void fSymGetModuleBase64() { PA = dbghelp.oSymGetModuleBase64; runASM(); }
	void fSymGetModuleInfo() { PA = dbghelp.oSymGetModuleInfo; runASM(); }
	void fSymGetModuleInfo64() { PA = dbghelp.oSymGetModuleInfo64; runASM(); }
	void fSymGetModuleInfoW() { PA = dbghelp.oSymGetModuleInfoW; runASM(); }
	void fSymGetModuleInfoW64() { PA = dbghelp.oSymGetModuleInfoW64; runASM(); }
	void fSymGetOmapBlockBase() { PA = dbghelp.oSymGetOmapBlockBase; runASM(); }
	void fSymGetOmaps() { PA = dbghelp.oSymGetOmaps; runASM(); }
	void fSymGetOptions() { PA = dbghelp.oSymGetOptions; runASM(); }
	void fSymGetScope() { PA = dbghelp.oSymGetScope; runASM(); }
	void fSymGetScopeW() { PA = dbghelp.oSymGetScopeW; runASM(); }
	void fSymGetSearchPath() { PA = dbghelp.oSymGetSearchPath; runASM(); }
	void fSymGetSearchPathW() { PA = dbghelp.oSymGetSearchPathW; runASM(); }
	void fSymGetSourceFile() { PA = dbghelp.oSymGetSourceFile; runASM(); }
	void fSymGetSourceFileChecksum() { PA = dbghelp.oSymGetSourceFileChecksum; runASM(); }
	void fSymGetSourceFileChecksumW() { PA = dbghelp.oSymGetSourceFileChecksumW; runASM(); }
	void fSymGetSourceFileFromToken() { PA = dbghelp.oSymGetSourceFileFromToken; runASM(); }
	void fSymGetSourceFileFromTokenByTokenName() { PA = dbghelp.oSymGetSourceFileFromTokenByTokenName; runASM(); }
	void fSymGetSourceFileFromTokenByTokenNameW() { PA = dbghelp.oSymGetSourceFileFromTokenByTokenNameW; runASM(); }
	void fSymGetSourceFileFromTokenW() { PA = dbghelp.oSymGetSourceFileFromTokenW; runASM(); }
	void fSymGetSourceFileToken() { PA = dbghelp.oSymGetSourceFileToken; runASM(); }
	void fSymGetSourceFileTokenByTokenName() { PA = dbghelp.oSymGetSourceFileTokenByTokenName; runASM(); }
	void fSymGetSourceFileTokenByTokenNameW() { PA = dbghelp.oSymGetSourceFileTokenByTokenNameW; runASM(); }
	void fSymGetSourceFileTokenW() { PA = dbghelp.oSymGetSourceFileTokenW; runASM(); }
	void fSymGetSourceFileW() { PA = dbghelp.oSymGetSourceFileW; runASM(); }
	void fSymGetSourceVarFromToken() { PA = dbghelp.oSymGetSourceVarFromToken; runASM(); }
	void fSymGetSourceVarFromTokenW() { PA = dbghelp.oSymGetSourceVarFromTokenW; runASM(); }
	void fSymGetSymFromAddr() { PA = dbghelp.oSymGetSymFromAddr; runASM(); }
	void fSymGetSymFromAddr64() { PA = dbghelp.oSymGetSymFromAddr64; runASM(); }
	void fSymGetSymFromName() { PA = dbghelp.oSymGetSymFromName; runASM(); }
	void fSymGetSymFromName64() { PA = dbghelp.oSymGetSymFromName64; runASM(); }
	void fSymGetSymNext() { PA = dbghelp.oSymGetSymNext; runASM(); }
	void fSymGetSymNext64() { PA = dbghelp.oSymGetSymNext64; runASM(); }
	void fSymGetSymPrev() { PA = dbghelp.oSymGetSymPrev; runASM(); }
	void fSymGetSymPrev64() { PA = dbghelp.oSymGetSymPrev64; runASM(); }
	void fSymGetSymbolFile() { PA = dbghelp.oSymGetSymbolFile; runASM(); }
	void fSymGetSymbolFileW() { PA = dbghelp.oSymGetSymbolFileW; runASM(); }
	void fSymGetTypeFromName() { PA = dbghelp.oSymGetTypeFromName; runASM(); }
	void fSymGetTypeFromNameW() { PA = dbghelp.oSymGetTypeFromNameW; runASM(); }
	void fSymGetTypeInfo() { PA = dbghelp.oSymGetTypeInfo; runASM(); }
	void fSymGetTypeInfoEx() { PA = dbghelp.oSymGetTypeInfoEx; runASM(); }
	void fSymGetUnwindInfo() { PA = dbghelp.oSymGetUnwindInfo; runASM(); }
	void fSymInitialize() { PA = dbghelp.oSymInitialize; runASM(); }
	void fSymInitializeW() { PA = dbghelp.oSymInitializeW; runASM(); }
	void fSymLoadModule() { PA = dbghelp.oSymLoadModule; runASM(); }
	void fSymLoadModule64() { PA = dbghelp.oSymLoadModule64; runASM(); }
	void fSymLoadModuleEx() { PA = dbghelp.oSymLoadModuleEx; runASM(); }
	void fSymLoadModuleExW() { PA = dbghelp.oSymLoadModuleExW; runASM(); }
	void fSymMatchFileName() { PA = dbghelp.oSymMatchFileName; runASM(); }
	void fSymMatchFileNameW() { PA = dbghelp.oSymMatchFileNameW; runASM(); }
	void fSymMatchString() { PA = dbghelp.oSymMatchString; runASM(); }
	void fSymMatchStringA() { PA = dbghelp.oSymMatchStringA; runASM(); }
	void fSymMatchStringW() { PA = dbghelp.oSymMatchStringW; runASM(); }
	void fSymNext() { PA = dbghelp.oSymNext; runASM(); }
	void fSymNextW() { PA = dbghelp.oSymNextW; runASM(); }
	void fSymPrev() { PA = dbghelp.oSymPrev; runASM(); }
	void fSymPrevW() { PA = dbghelp.oSymPrevW; runASM(); }
	void fSymQueryInlineTrace() { PA = dbghelp.oSymQueryInlineTrace; runASM(); }
	void fSymRefreshModuleList() { PA = dbghelp.oSymRefreshModuleList; runASM(); }
	void fSymRegisterCallback() { PA = dbghelp.oSymRegisterCallback; runASM(); }
	void fSymRegisterCallback64() { PA = dbghelp.oSymRegisterCallback64; runASM(); }
	void fSymRegisterCallbackW64() { PA = dbghelp.oSymRegisterCallbackW64; runASM(); }
	void fSymRegisterFunctionEntryCallback() { PA = dbghelp.oSymRegisterFunctionEntryCallback; runASM(); }
	void fSymRegisterFunctionEntryCallback64() { PA = dbghelp.oSymRegisterFunctionEntryCallback64; runASM(); }
	void fSymRegisterGetSourcePathPartCallback() { PA = dbghelp.oSymRegisterGetSourcePathPartCallback; runASM(); }
	void fSymRegisterSourceFileUrlListCallback() { PA = dbghelp.oSymRegisterSourceFileUrlListCallback; runASM(); }
	void fSymSearch() { PA = dbghelp.oSymSearch; runASM(); }
	void fSymSearchW() { PA = dbghelp.oSymSearchW; runASM(); }
	void fSymSetContext() { PA = dbghelp.oSymSetContext; runASM(); }
	void fSymSetDiaSession() { PA = dbghelp.oSymSetDiaSession; runASM(); }
	void fSymSetExtendedOption() { PA = dbghelp.oSymSetExtendedOption; runASM(); }
	void fSymSetHomeDirectory() { PA = dbghelp.oSymSetHomeDirectory; runASM(); }
	void fSymSetHomeDirectoryW() { PA = dbghelp.oSymSetHomeDirectoryW; runASM(); }
	void fSymSetOptions() { PA = dbghelp.oSymSetOptions; runASM(); }
	void fSymSetParentWindow() { PA = dbghelp.oSymSetParentWindow; runASM(); }
	void fSymSetScopeFromAddr() { PA = dbghelp.oSymSetScopeFromAddr; runASM(); }
	void fSymSetScopeFromIndex() { PA = dbghelp.oSymSetScopeFromIndex; runASM(); }
	void fSymSetScopeFromInlineContext() { PA = dbghelp.oSymSetScopeFromInlineContext; runASM(); }
	void fSymSetSearchPath() { PA = dbghelp.oSymSetSearchPath; runASM(); }
	void fSymSetSearchPathW() { PA = dbghelp.oSymSetSearchPathW; runASM(); }
	void fSymSetServiceManager() { PA = dbghelp.oSymSetServiceManager; runASM(); }
	void fSymSrvDeltaName() { PA = dbghelp.oSymSrvDeltaName; runASM(); }
	void fSymSrvDeltaNameW() { PA = dbghelp.oSymSrvDeltaNameW; runASM(); }
	void fSymSrvGetFileIndexInfo() { PA = dbghelp.oSymSrvGetFileIndexInfo; runASM(); }
	void fSymSrvGetFileIndexInfoW() { PA = dbghelp.oSymSrvGetFileIndexInfoW; runASM(); }
	void fSymSrvGetFileIndexString() { PA = dbghelp.oSymSrvGetFileIndexString; runASM(); }
	void fSymSrvGetFileIndexStringW() { PA = dbghelp.oSymSrvGetFileIndexStringW; runASM(); }
	void fSymSrvGetFileIndexes() { PA = dbghelp.oSymSrvGetFileIndexes; runASM(); }
	void fSymSrvGetFileIndexesW() { PA = dbghelp.oSymSrvGetFileIndexesW; runASM(); }
	void fSymSrvGetSupplement() { PA = dbghelp.oSymSrvGetSupplement; runASM(); }
	void fSymSrvGetSupplementW() { PA = dbghelp.oSymSrvGetSupplementW; runASM(); }
	void fSymSrvIsStore() { PA = dbghelp.oSymSrvIsStore; runASM(); }
	void fSymSrvIsStoreW() { PA = dbghelp.oSymSrvIsStoreW; runASM(); }
	void fSymSrvStoreFile() { PA = dbghelp.oSymSrvStoreFile; runASM(); }
	void fSymSrvStoreFileW() { PA = dbghelp.oSymSrvStoreFileW; runASM(); }
	void fSymSrvStoreSupplement() { PA = dbghelp.oSymSrvStoreSupplement; runASM(); }
	void fSymSrvStoreSupplementW() { PA = dbghelp.oSymSrvStoreSupplementW; runASM(); }
	void fSymUnDName() { PA = dbghelp.oSymUnDName; runASM(); }
	void fSymUnDName64() { PA = dbghelp.oSymUnDName64; runASM(); }
	void fSymUnloadModule() { PA = dbghelp.oSymUnloadModule; runASM(); }
	void fSymUnloadModule64() { PA = dbghelp.oSymUnloadModule64; runASM(); }
	void fUnDecorateSymbolName() { PA = dbghelp.oUnDecorateSymbolName; runASM(); }
	void fUnDecorateSymbolNameW() { PA = dbghelp.oUnDecorateSymbolNameW; runASM(); }
	void fWinDbgExtensionDllInit() { PA = dbghelp.oWinDbgExtensionDllInit; runASM(); }
	void f_EFN_DumpImage() { PA = dbghelp.o_EFN_DumpImage; runASM(); }
	void fblock() { PA = dbghelp.oblock; runASM(); }
	void fchksym() { PA = dbghelp.ochksym; runASM(); }
	void fdbghelp() { PA = dbghelp.odbghelp; runASM(); }
	void fdh() { PA = dbghelp.odh; runASM(); }
	void ffptr() { PA = dbghelp.ofptr; runASM(); }
	void fhomedir() { PA = dbghelp.ohomedir; runASM(); }
	void finlinedbg() { PA = dbghelp.oinlinedbg; runASM(); }
	void fitoldyouso() { PA = dbghelp.oitoldyouso; runASM(); }
	void flmi() { PA = dbghelp.olmi; runASM(); }
	void flminfo() { PA = dbghelp.olminfo; runASM(); }
	void fomap() { PA = dbghelp.oomap; runASM(); }
	void foptdbgdump() { PA = dbghelp.ooptdbgdump; runASM(); }
	void foptdbgdumpaddr() { PA = dbghelp.ooptdbgdumpaddr; runASM(); }
	void fsrcfiles() { PA = dbghelp.osrcfiles; runASM(); }
	void fstack_force_ebp() { PA = dbghelp.ostack_force_ebp; runASM(); }
	void fstackdbg() { PA = dbghelp.ostackdbg; runASM(); }
	void fsym() { PA = dbghelp.osym; runASM(); }
	void fsymsrv() { PA = dbghelp.osymsrv; runASM(); }
	void fvc7fpo() { PA = dbghelp.ovc7fpo; runASM(); }
}

void setupFunctions() {
	dbghelp.oDbgHelpCreateUserDump = GetProcAddress(dbghelp.dll, "DbgHelpCreateUserDump");
	dbghelp.oDbgHelpCreateUserDumpW = GetProcAddress(dbghelp.dll, "DbgHelpCreateUserDumpW");
	dbghelp.oEnumDirTree = GetProcAddress(dbghelp.dll, "EnumDirTree");
	dbghelp.oEnumDirTreeW = GetProcAddress(dbghelp.dll, "EnumDirTreeW");
	dbghelp.oEnumerateLoadedModules = GetProcAddress(dbghelp.dll, "EnumerateLoadedModules");
	dbghelp.oEnumerateLoadedModules64 = GetProcAddress(dbghelp.dll, "EnumerateLoadedModules64");
	dbghelp.oEnumerateLoadedModulesEx = GetProcAddress(dbghelp.dll, "EnumerateLoadedModulesEx");
	dbghelp.oEnumerateLoadedModulesExW = GetProcAddress(dbghelp.dll, "EnumerateLoadedModulesExW");
	dbghelp.oEnumerateLoadedModulesW64 = GetProcAddress(dbghelp.dll, "EnumerateLoadedModulesW64");
	dbghelp.oExtensionApiVersion = GetProcAddress(dbghelp.dll, "ExtensionApiVersion");
	dbghelp.oFindDebugInfoFile = GetProcAddress(dbghelp.dll, "FindDebugInfoFile");
	dbghelp.oFindDebugInfoFileEx = GetProcAddress(dbghelp.dll, "FindDebugInfoFileEx");
	dbghelp.oFindDebugInfoFileExW = GetProcAddress(dbghelp.dll, "FindDebugInfoFileExW");
	dbghelp.oFindExecutableImage = GetProcAddress(dbghelp.dll, "FindExecutableImage");
	dbghelp.oFindExecutableImageEx = GetProcAddress(dbghelp.dll, "FindExecutableImageEx");
	dbghelp.oFindExecutableImageExW = GetProcAddress(dbghelp.dll, "FindExecutableImageExW");
	dbghelp.oFindFileInPath = GetProcAddress(dbghelp.dll, "FindFileInPath");
	dbghelp.oFindFileInSearchPath = GetProcAddress(dbghelp.dll, "FindFileInSearchPath");
	dbghelp.oGetSymLoadError = GetProcAddress(dbghelp.dll, "GetSymLoadError");
	dbghelp.oGetTimestampForLoadedLibrary = GetProcAddress(dbghelp.dll, "GetTimestampForLoadedLibrary");
	dbghelp.oImageDirectoryEntryToData = GetProcAddress(dbghelp.dll, "ImageDirectoryEntryToData");
	dbghelp.oImageDirectoryEntryToDataEx = GetProcAddress(dbghelp.dll, "ImageDirectoryEntryToDataEx");
	dbghelp.oImageNtHeader = GetProcAddress(dbghelp.dll, "ImageNtHeader");
	dbghelp.oImageRvaToSection = GetProcAddress(dbghelp.dll, "ImageRvaToSection");
	dbghelp.oImageRvaToVa = GetProcAddress(dbghelp.dll, "ImageRvaToVa");
	dbghelp.oImagehlpApiVersion = GetProcAddress(dbghelp.dll, "ImagehlpApiVersion");
	dbghelp.oImagehlpApiVersionEx = GetProcAddress(dbghelp.dll, "ImagehlpApiVersionEx");
	dbghelp.oMakeSureDirectoryPathExists = GetProcAddress(dbghelp.dll, "MakeSureDirectoryPathExists");
	dbghelp.oMiniDumpReadDumpStream = GetProcAddress(dbghelp.dll, "MiniDumpReadDumpStream");
	dbghelp.oMiniDumpWriteDump = GetProcAddress(dbghelp.dll, "MiniDumpWriteDump");
	dbghelp.oRangeMapAddPeImageSections = GetProcAddress(dbghelp.dll, "RangeMapAddPeImageSections");
	dbghelp.oRangeMapCreate = GetProcAddress(dbghelp.dll, "RangeMapCreate");
	dbghelp.oRangeMapFree = GetProcAddress(dbghelp.dll, "RangeMapFree");
	dbghelp.oRangeMapRead = GetProcAddress(dbghelp.dll, "RangeMapRead");
	dbghelp.oRangeMapRemove = GetProcAddress(dbghelp.dll, "RangeMapRemove");
	dbghelp.oRangeMapWrite = GetProcAddress(dbghelp.dll, "RangeMapWrite");
	dbghelp.oRemoveInvalidModuleList = GetProcAddress(dbghelp.dll, "RemoveInvalidModuleList");
	dbghelp.oReportSymbolLoadSummary = GetProcAddress(dbghelp.dll, "ReportSymbolLoadSummary");
	dbghelp.oSearchTreeForFile = GetProcAddress(dbghelp.dll, "SearchTreeForFile");
	dbghelp.oSearchTreeForFileW = GetProcAddress(dbghelp.dll, "SearchTreeForFileW");
	dbghelp.oSetCheckUserInterruptShared = GetProcAddress(dbghelp.dll, "SetCheckUserInterruptShared");
	dbghelp.oSetSymLoadError = GetProcAddress(dbghelp.dll, "SetSymLoadError");
	dbghelp.oStackWalk = GetProcAddress(dbghelp.dll, "StackWalk");
	dbghelp.oStackWalk2 = GetProcAddress(dbghelp.dll, "StackWalk2");
	dbghelp.oStackWalk64 = GetProcAddress(dbghelp.dll, "StackWalk64");
	dbghelp.oStackWalkEx = GetProcAddress(dbghelp.dll, "StackWalkEx");
	dbghelp.oSymAddSourceStream = GetProcAddress(dbghelp.dll, "SymAddSourceStream");
	dbghelp.oSymAddSourceStreamA = GetProcAddress(dbghelp.dll, "SymAddSourceStreamA");
	dbghelp.oSymAddSourceStreamW = GetProcAddress(dbghelp.dll, "SymAddSourceStreamW");
	dbghelp.oSymAddSymbol = GetProcAddress(dbghelp.dll, "SymAddSymbol");
	dbghelp.oSymAddSymbolW = GetProcAddress(dbghelp.dll, "SymAddSymbolW");
	dbghelp.oSymAddrIncludeInlineTrace = GetProcAddress(dbghelp.dll, "SymAddrIncludeInlineTrace");
	dbghelp.oSymAllocDiaString = GetProcAddress(dbghelp.dll, "SymAllocDiaString");
	dbghelp.oSymCleanup = GetProcAddress(dbghelp.dll, "SymCleanup");
	dbghelp.oSymCompareInlineTrace = GetProcAddress(dbghelp.dll, "SymCompareInlineTrace");
	dbghelp.oSymDeleteSymbol = GetProcAddress(dbghelp.dll, "SymDeleteSymbol");
	dbghelp.oSymDeleteSymbolW = GetProcAddress(dbghelp.dll, "SymDeleteSymbolW");
	dbghelp.oSymEnumLines = GetProcAddress(dbghelp.dll, "SymEnumLines");
	dbghelp.oSymEnumLinesW = GetProcAddress(dbghelp.dll, "SymEnumLinesW");
	dbghelp.oSymEnumProcesses = GetProcAddress(dbghelp.dll, "SymEnumProcesses");
	dbghelp.oSymEnumSourceFileTokens = GetProcAddress(dbghelp.dll, "SymEnumSourceFileTokens");
	dbghelp.oSymEnumSourceFiles = GetProcAddress(dbghelp.dll, "SymEnumSourceFiles");
	dbghelp.oSymEnumSourceFilesW = GetProcAddress(dbghelp.dll, "SymEnumSourceFilesW");
	dbghelp.oSymEnumSourceLines = GetProcAddress(dbghelp.dll, "SymEnumSourceLines");
	dbghelp.oSymEnumSourceLinesW = GetProcAddress(dbghelp.dll, "SymEnumSourceLinesW");
	dbghelp.oSymEnumSym = GetProcAddress(dbghelp.dll, "SymEnumSym");
	dbghelp.oSymEnumSymbols = GetProcAddress(dbghelp.dll, "SymEnumSymbols");
	dbghelp.oSymEnumSymbolsEx = GetProcAddress(dbghelp.dll, "SymEnumSymbolsEx");
	dbghelp.oSymEnumSymbolsExW = GetProcAddress(dbghelp.dll, "SymEnumSymbolsExW");
	dbghelp.oSymEnumSymbolsForAddr = GetProcAddress(dbghelp.dll, "SymEnumSymbolsForAddr");
	dbghelp.oSymEnumSymbolsForAddrW = GetProcAddress(dbghelp.dll, "SymEnumSymbolsForAddrW");
	dbghelp.oSymEnumSymbolsW = GetProcAddress(dbghelp.dll, "SymEnumSymbolsW");
	dbghelp.oSymEnumTypes = GetProcAddress(dbghelp.dll, "SymEnumTypes");
	dbghelp.oSymEnumTypesByName = GetProcAddress(dbghelp.dll, "SymEnumTypesByName");
	dbghelp.oSymEnumTypesByNameW = GetProcAddress(dbghelp.dll, "SymEnumTypesByNameW");
	dbghelp.oSymEnumTypesW = GetProcAddress(dbghelp.dll, "SymEnumTypesW");
	dbghelp.oSymEnumerateModules = GetProcAddress(dbghelp.dll, "SymEnumerateModules");
	dbghelp.oSymEnumerateModules64 = GetProcAddress(dbghelp.dll, "SymEnumerateModules64");
	dbghelp.oSymEnumerateModulesW64 = GetProcAddress(dbghelp.dll, "SymEnumerateModulesW64");
	dbghelp.oSymEnumerateSymbols = GetProcAddress(dbghelp.dll, "SymEnumerateSymbols");
	dbghelp.oSymEnumerateSymbols64 = GetProcAddress(dbghelp.dll, "SymEnumerateSymbols64");
	dbghelp.oSymEnumerateSymbolsW = GetProcAddress(dbghelp.dll, "SymEnumerateSymbolsW");
	dbghelp.oSymEnumerateSymbolsW64 = GetProcAddress(dbghelp.dll, "SymEnumerateSymbolsW64");
	dbghelp.oSymFindDebugInfoFile = GetProcAddress(dbghelp.dll, "SymFindDebugInfoFile");
	dbghelp.oSymFindDebugInfoFileW = GetProcAddress(dbghelp.dll, "SymFindDebugInfoFileW");
	dbghelp.oSymFindExecutableImage = GetProcAddress(dbghelp.dll, "SymFindExecutableImage");
	dbghelp.oSymFindExecutableImageW = GetProcAddress(dbghelp.dll, "SymFindExecutableImageW");
	dbghelp.oSymFindFileInPath = GetProcAddress(dbghelp.dll, "SymFindFileInPath");
	dbghelp.oSymFindFileInPathW = GetProcAddress(dbghelp.dll, "SymFindFileInPathW");
	dbghelp.oSymFreeDiaString = GetProcAddress(dbghelp.dll, "SymFreeDiaString");
	dbghelp.oSymFromAddr = GetProcAddress(dbghelp.dll, "SymFromAddr");
	dbghelp.oSymFromAddrW = GetProcAddress(dbghelp.dll, "SymFromAddrW");
	dbghelp.oSymFromIndex = GetProcAddress(dbghelp.dll, "SymFromIndex");
	dbghelp.oSymFromIndexW = GetProcAddress(dbghelp.dll, "SymFromIndexW");
	dbghelp.oSymFromInlineContext = GetProcAddress(dbghelp.dll, "SymFromInlineContext");
	dbghelp.oSymFromInlineContextW = GetProcAddress(dbghelp.dll, "SymFromInlineContextW");
	dbghelp.oSymFromName = GetProcAddress(dbghelp.dll, "SymFromName");
	dbghelp.oSymFromNameW = GetProcAddress(dbghelp.dll, "SymFromNameW");
	dbghelp.oSymFromToken = GetProcAddress(dbghelp.dll, "SymFromToken");
	dbghelp.oSymFromTokenW = GetProcAddress(dbghelp.dll, "SymFromTokenW");
	dbghelp.oSymFunctionTableAccess = GetProcAddress(dbghelp.dll, "SymFunctionTableAccess");
	dbghelp.oSymFunctionTableAccess64 = GetProcAddress(dbghelp.dll, "SymFunctionTableAccess64");
	dbghelp.oSymFunctionTableAccess64AccessRoutines = GetProcAddress(dbghelp.dll, "SymFunctionTableAccess64AccessRoutines");
	dbghelp.oSymGetDiaSession = GetProcAddress(dbghelp.dll, "SymGetDiaSession");
	dbghelp.oSymGetDiaSource = GetProcAddress(dbghelp.dll, "SymGetDiaSource");
	dbghelp.oSymGetExtendedOption = GetProcAddress(dbghelp.dll, "SymGetExtendedOption");
	dbghelp.oSymGetFileLineOffsets64 = GetProcAddress(dbghelp.dll, "SymGetFileLineOffsets64");
	dbghelp.oSymGetHomeDirectory = GetProcAddress(dbghelp.dll, "SymGetHomeDirectory");
	dbghelp.oSymGetHomeDirectoryW = GetProcAddress(dbghelp.dll, "SymGetHomeDirectoryW");
	dbghelp.oSymGetLineFromAddr = GetProcAddress(dbghelp.dll, "SymGetLineFromAddr");
	dbghelp.oSymGetLineFromAddr64 = GetProcAddress(dbghelp.dll, "SymGetLineFromAddr64");
	dbghelp.oSymGetLineFromAddrEx = GetProcAddress(dbghelp.dll, "SymGetLineFromAddrEx");
	dbghelp.oSymGetLineFromAddrW64 = GetProcAddress(dbghelp.dll, "SymGetLineFromAddrW64");
	dbghelp.oSymGetLineFromInlineContext = GetProcAddress(dbghelp.dll, "SymGetLineFromInlineContext");
	dbghelp.oSymGetLineFromInlineContextW = GetProcAddress(dbghelp.dll, "SymGetLineFromInlineContextW");
	dbghelp.oSymGetLineFromName = GetProcAddress(dbghelp.dll, "SymGetLineFromName");
	dbghelp.oSymGetLineFromName64 = GetProcAddress(dbghelp.dll, "SymGetLineFromName64");
	dbghelp.oSymGetLineFromNameEx = GetProcAddress(dbghelp.dll, "SymGetLineFromNameEx");
	dbghelp.oSymGetLineFromNameW64 = GetProcAddress(dbghelp.dll, "SymGetLineFromNameW64");
	dbghelp.oSymGetLineNext = GetProcAddress(dbghelp.dll, "SymGetLineNext");
	dbghelp.oSymGetLineNext64 = GetProcAddress(dbghelp.dll, "SymGetLineNext64");
	dbghelp.oSymGetLineNextEx = GetProcAddress(dbghelp.dll, "SymGetLineNextEx");
	dbghelp.oSymGetLineNextW64 = GetProcAddress(dbghelp.dll, "SymGetLineNextW64");
	dbghelp.oSymGetLinePrev = GetProcAddress(dbghelp.dll, "SymGetLinePrev");
	dbghelp.oSymGetLinePrev64 = GetProcAddress(dbghelp.dll, "SymGetLinePrev64");
	dbghelp.oSymGetLinePrevEx = GetProcAddress(dbghelp.dll, "SymGetLinePrevEx");
	dbghelp.oSymGetLinePrevW64 = GetProcAddress(dbghelp.dll, "SymGetLinePrevW64");
	dbghelp.oSymGetModuleBase = GetProcAddress(dbghelp.dll, "SymGetModuleBase");
	dbghelp.oSymGetModuleBase64 = GetProcAddress(dbghelp.dll, "SymGetModuleBase64");
	dbghelp.oSymGetModuleInfo = GetProcAddress(dbghelp.dll, "SymGetModuleInfo");
	dbghelp.oSymGetModuleInfo64 = GetProcAddress(dbghelp.dll, "SymGetModuleInfo64");
	dbghelp.oSymGetModuleInfoW = GetProcAddress(dbghelp.dll, "SymGetModuleInfoW");
	dbghelp.oSymGetModuleInfoW64 = GetProcAddress(dbghelp.dll, "SymGetModuleInfoW64");
	dbghelp.oSymGetOmapBlockBase = GetProcAddress(dbghelp.dll, "SymGetOmapBlockBase");
	dbghelp.oSymGetOmaps = GetProcAddress(dbghelp.dll, "SymGetOmaps");
	dbghelp.oSymGetOptions = GetProcAddress(dbghelp.dll, "SymGetOptions");
	dbghelp.oSymGetScope = GetProcAddress(dbghelp.dll, "SymGetScope");
	dbghelp.oSymGetScopeW = GetProcAddress(dbghelp.dll, "SymGetScopeW");
	dbghelp.oSymGetSearchPath = GetProcAddress(dbghelp.dll, "SymGetSearchPath");
	dbghelp.oSymGetSearchPathW = GetProcAddress(dbghelp.dll, "SymGetSearchPathW");
	dbghelp.oSymGetSourceFile = GetProcAddress(dbghelp.dll, "SymGetSourceFile");
	dbghelp.oSymGetSourceFileChecksum = GetProcAddress(dbghelp.dll, "SymGetSourceFileChecksum");
	dbghelp.oSymGetSourceFileChecksumW = GetProcAddress(dbghelp.dll, "SymGetSourceFileChecksumW");
	dbghelp.oSymGetSourceFileFromToken = GetProcAddress(dbghelp.dll, "SymGetSourceFileFromToken");
	dbghelp.oSymGetSourceFileFromTokenByTokenName = GetProcAddress(dbghelp.dll, "SymGetSourceFileFromTokenByTokenName");
	dbghelp.oSymGetSourceFileFromTokenByTokenNameW = GetProcAddress(dbghelp.dll, "SymGetSourceFileFromTokenByTokenNameW");
	dbghelp.oSymGetSourceFileFromTokenW = GetProcAddress(dbghelp.dll, "SymGetSourceFileFromTokenW");
	dbghelp.oSymGetSourceFileToken = GetProcAddress(dbghelp.dll, "SymGetSourceFileToken");
	dbghelp.oSymGetSourceFileTokenByTokenName = GetProcAddress(dbghelp.dll, "SymGetSourceFileTokenByTokenName");
	dbghelp.oSymGetSourceFileTokenByTokenNameW = GetProcAddress(dbghelp.dll, "SymGetSourceFileTokenByTokenNameW");
	dbghelp.oSymGetSourceFileTokenW = GetProcAddress(dbghelp.dll, "SymGetSourceFileTokenW");
	dbghelp.oSymGetSourceFileW = GetProcAddress(dbghelp.dll, "SymGetSourceFileW");
	dbghelp.oSymGetSourceVarFromToken = GetProcAddress(dbghelp.dll, "SymGetSourceVarFromToken");
	dbghelp.oSymGetSourceVarFromTokenW = GetProcAddress(dbghelp.dll, "SymGetSourceVarFromTokenW");
	dbghelp.oSymGetSymFromAddr = GetProcAddress(dbghelp.dll, "SymGetSymFromAddr");
	dbghelp.oSymGetSymFromAddr64 = GetProcAddress(dbghelp.dll, "SymGetSymFromAddr64");
	dbghelp.oSymGetSymFromName = GetProcAddress(dbghelp.dll, "SymGetSymFromName");
	dbghelp.oSymGetSymFromName64 = GetProcAddress(dbghelp.dll, "SymGetSymFromName64");
	dbghelp.oSymGetSymNext = GetProcAddress(dbghelp.dll, "SymGetSymNext");
	dbghelp.oSymGetSymNext64 = GetProcAddress(dbghelp.dll, "SymGetSymNext64");
	dbghelp.oSymGetSymPrev = GetProcAddress(dbghelp.dll, "SymGetSymPrev");
	dbghelp.oSymGetSymPrev64 = GetProcAddress(dbghelp.dll, "SymGetSymPrev64");
	dbghelp.oSymGetSymbolFile = GetProcAddress(dbghelp.dll, "SymGetSymbolFile");
	dbghelp.oSymGetSymbolFileW = GetProcAddress(dbghelp.dll, "SymGetSymbolFileW");
	dbghelp.oSymGetTypeFromName = GetProcAddress(dbghelp.dll, "SymGetTypeFromName");
	dbghelp.oSymGetTypeFromNameW = GetProcAddress(dbghelp.dll, "SymGetTypeFromNameW");
	dbghelp.oSymGetTypeInfo = GetProcAddress(dbghelp.dll, "SymGetTypeInfo");
	dbghelp.oSymGetTypeInfoEx = GetProcAddress(dbghelp.dll, "SymGetTypeInfoEx");
	dbghelp.oSymGetUnwindInfo = GetProcAddress(dbghelp.dll, "SymGetUnwindInfo");
	dbghelp.oSymInitialize = GetProcAddress(dbghelp.dll, "SymInitialize");
	dbghelp.oSymInitializeW = GetProcAddress(dbghelp.dll, "SymInitializeW");
	dbghelp.oSymLoadModule = GetProcAddress(dbghelp.dll, "SymLoadModule");
	dbghelp.oSymLoadModule64 = GetProcAddress(dbghelp.dll, "SymLoadModule64");
	dbghelp.oSymLoadModuleEx = GetProcAddress(dbghelp.dll, "SymLoadModuleEx");
	dbghelp.oSymLoadModuleExW = GetProcAddress(dbghelp.dll, "SymLoadModuleExW");
	dbghelp.oSymMatchFileName = GetProcAddress(dbghelp.dll, "SymMatchFileName");
	dbghelp.oSymMatchFileNameW = GetProcAddress(dbghelp.dll, "SymMatchFileNameW");
	dbghelp.oSymMatchString = GetProcAddress(dbghelp.dll, "SymMatchString");
	dbghelp.oSymMatchStringA = GetProcAddress(dbghelp.dll, "SymMatchStringA");
	dbghelp.oSymMatchStringW = GetProcAddress(dbghelp.dll, "SymMatchStringW");
	dbghelp.oSymNext = GetProcAddress(dbghelp.dll, "SymNext");
	dbghelp.oSymNextW = GetProcAddress(dbghelp.dll, "SymNextW");
	dbghelp.oSymPrev = GetProcAddress(dbghelp.dll, "SymPrev");
	dbghelp.oSymPrevW = GetProcAddress(dbghelp.dll, "SymPrevW");
	dbghelp.oSymQueryInlineTrace = GetProcAddress(dbghelp.dll, "SymQueryInlineTrace");
	dbghelp.oSymRefreshModuleList = GetProcAddress(dbghelp.dll, "SymRefreshModuleList");
	dbghelp.oSymRegisterCallback = GetProcAddress(dbghelp.dll, "SymRegisterCallback");
	dbghelp.oSymRegisterCallback64 = GetProcAddress(dbghelp.dll, "SymRegisterCallback64");
	dbghelp.oSymRegisterCallbackW64 = GetProcAddress(dbghelp.dll, "SymRegisterCallbackW64");
	dbghelp.oSymRegisterFunctionEntryCallback = GetProcAddress(dbghelp.dll, "SymRegisterFunctionEntryCallback");
	dbghelp.oSymRegisterFunctionEntryCallback64 = GetProcAddress(dbghelp.dll, "SymRegisterFunctionEntryCallback64");
	dbghelp.oSymRegisterGetSourcePathPartCallback = GetProcAddress(dbghelp.dll, "SymRegisterGetSourcePathPartCallback");
	dbghelp.oSymRegisterSourceFileUrlListCallback = GetProcAddress(dbghelp.dll, "SymRegisterSourceFileUrlListCallback");
	dbghelp.oSymSearch = GetProcAddress(dbghelp.dll, "SymSearch");
	dbghelp.oSymSearchW = GetProcAddress(dbghelp.dll, "SymSearchW");
	dbghelp.oSymSetContext = GetProcAddress(dbghelp.dll, "SymSetContext");
	dbghelp.oSymSetDiaSession = GetProcAddress(dbghelp.dll, "SymSetDiaSession");
	dbghelp.oSymSetExtendedOption = GetProcAddress(dbghelp.dll, "SymSetExtendedOption");
	dbghelp.oSymSetHomeDirectory = GetProcAddress(dbghelp.dll, "SymSetHomeDirectory");
	dbghelp.oSymSetHomeDirectoryW = GetProcAddress(dbghelp.dll, "SymSetHomeDirectoryW");
	dbghelp.oSymSetOptions = GetProcAddress(dbghelp.dll, "SymSetOptions");
	dbghelp.oSymSetParentWindow = GetProcAddress(dbghelp.dll, "SymSetParentWindow");
	dbghelp.oSymSetScopeFromAddr = GetProcAddress(dbghelp.dll, "SymSetScopeFromAddr");
	dbghelp.oSymSetScopeFromIndex = GetProcAddress(dbghelp.dll, "SymSetScopeFromIndex");
	dbghelp.oSymSetScopeFromInlineContext = GetProcAddress(dbghelp.dll, "SymSetScopeFromInlineContext");
	dbghelp.oSymSetSearchPath = GetProcAddress(dbghelp.dll, "SymSetSearchPath");
	dbghelp.oSymSetSearchPathW = GetProcAddress(dbghelp.dll, "SymSetSearchPathW");
	dbghelp.oSymSetServiceManager = GetProcAddress(dbghelp.dll, "SymSetServiceManager");
	dbghelp.oSymSrvDeltaName = GetProcAddress(dbghelp.dll, "SymSrvDeltaName");
	dbghelp.oSymSrvDeltaNameW = GetProcAddress(dbghelp.dll, "SymSrvDeltaNameW");
	dbghelp.oSymSrvGetFileIndexInfo = GetProcAddress(dbghelp.dll, "SymSrvGetFileIndexInfo");
	dbghelp.oSymSrvGetFileIndexInfoW = GetProcAddress(dbghelp.dll, "SymSrvGetFileIndexInfoW");
	dbghelp.oSymSrvGetFileIndexString = GetProcAddress(dbghelp.dll, "SymSrvGetFileIndexString");
	dbghelp.oSymSrvGetFileIndexStringW = GetProcAddress(dbghelp.dll, "SymSrvGetFileIndexStringW");
	dbghelp.oSymSrvGetFileIndexes = GetProcAddress(dbghelp.dll, "SymSrvGetFileIndexes");
	dbghelp.oSymSrvGetFileIndexesW = GetProcAddress(dbghelp.dll, "SymSrvGetFileIndexesW");
	dbghelp.oSymSrvGetSupplement = GetProcAddress(dbghelp.dll, "SymSrvGetSupplement");
	dbghelp.oSymSrvGetSupplementW = GetProcAddress(dbghelp.dll, "SymSrvGetSupplementW");
	dbghelp.oSymSrvIsStore = GetProcAddress(dbghelp.dll, "SymSrvIsStore");
	dbghelp.oSymSrvIsStoreW = GetProcAddress(dbghelp.dll, "SymSrvIsStoreW");
	dbghelp.oSymSrvStoreFile = GetProcAddress(dbghelp.dll, "SymSrvStoreFile");
	dbghelp.oSymSrvStoreFileW = GetProcAddress(dbghelp.dll, "SymSrvStoreFileW");
	dbghelp.oSymSrvStoreSupplement = GetProcAddress(dbghelp.dll, "SymSrvStoreSupplement");
	dbghelp.oSymSrvStoreSupplementW = GetProcAddress(dbghelp.dll, "SymSrvStoreSupplementW");
	dbghelp.oSymUnDName = GetProcAddress(dbghelp.dll, "SymUnDName");
	dbghelp.oSymUnDName64 = GetProcAddress(dbghelp.dll, "SymUnDName64");
	dbghelp.oSymUnloadModule = GetProcAddress(dbghelp.dll, "SymUnloadModule");
	dbghelp.oSymUnloadModule64 = GetProcAddress(dbghelp.dll, "SymUnloadModule64");
	dbghelp.oUnDecorateSymbolName = GetProcAddress(dbghelp.dll, "UnDecorateSymbolName");
	dbghelp.oUnDecorateSymbolNameW = GetProcAddress(dbghelp.dll, "UnDecorateSymbolNameW");
	dbghelp.oWinDbgExtensionDllInit = GetProcAddress(dbghelp.dll, "WinDbgExtensionDllInit");
	dbghelp.o_EFN_DumpImage = GetProcAddress(dbghelp.dll, "_EFN_DumpImage");
	dbghelp.oblock = GetProcAddress(dbghelp.dll, "block");
	dbghelp.ochksym = GetProcAddress(dbghelp.dll, "chksym");
	dbghelp.odbghelp = GetProcAddress(dbghelp.dll, "dbghelp");
	dbghelp.odh = GetProcAddress(dbghelp.dll, "dh");
	dbghelp.ofptr = GetProcAddress(dbghelp.dll, "fptr");
	dbghelp.ohomedir = GetProcAddress(dbghelp.dll, "homedir");
	dbghelp.oinlinedbg = GetProcAddress(dbghelp.dll, "inlinedbg");
	dbghelp.oitoldyouso = GetProcAddress(dbghelp.dll, "itoldyouso");
	dbghelp.olmi = GetProcAddress(dbghelp.dll, "lmi");
	dbghelp.olminfo = GetProcAddress(dbghelp.dll, "lminfo");
	dbghelp.oomap = GetProcAddress(dbghelp.dll, "omap");
	dbghelp.ooptdbgdump = GetProcAddress(dbghelp.dll, "optdbgdump");
	dbghelp.ooptdbgdumpaddr = GetProcAddress(dbghelp.dll, "optdbgdumpaddr");
	dbghelp.osrcfiles = GetProcAddress(dbghelp.dll, "srcfiles");
	dbghelp.ostack_force_ebp = GetProcAddress(dbghelp.dll, "stack_force_ebp");
	dbghelp.ostackdbg = GetProcAddress(dbghelp.dll, "stackdbg");
	dbghelp.osym = GetProcAddress(dbghelp.dll, "sym");
	dbghelp.osymsrv = GetProcAddress(dbghelp.dll, "symsrv");
	dbghelp.ovc7fpo = GetProcAddress(dbghelp.dll, "vc7fpo");
}
#pragma endregion

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
	switch (ul_reason_for_call) {
	case DLL_PROCESS_ATTACH:
		char path[MAX_PATH];
		GetWindowsDirectory(path, sizeof(path));

		// Example: "\\System32\\version.dll"
		strcat_s(path, "\\add manual path\\dbghelp.dll");
		dbghelp.dll = LoadLibrary(path);
		setupFunctions();

		// Add here your code, I recommend you to create a thread
		break;
	case DLL_PROCESS_DETACH:
		FreeLibrary(dbghelp.dll);
		break;
	}
	return 1;
}
