/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCWorkQueueCommandSubprocessInvocation.h>

@class NSData;

@interface XCWorkQueueCommandCacheFetchInvocation : XCWorkQueueCommandSubprocessInvocation
{
    NSData *_originalOutputData;
    int _originalExitCode;
}

- (void)cancel;
- (void)reapExitedSubprocess;
- (BOOL)launchSubprocessWithArguments:(const char **)arg1 environment:(const char **)arg2 workingDirectory:(const char *)arg3;
- (BOOL)harvestPredictivelyProcessedOutputFiles;
- (BOOL)isRunning;
- (void)dealloc;
- (id)initWithSlotNumber:(unsigned long long)arg1 workQueueOperation:(id)arg2 workQueueCommand:(id)arg3 arguments:(id)arg4 environmentAssignments:(id)arg5 workingDirectoryPath:(id)arg6 outputData:(id)arg7 exitCode:(int)arg8;

@end
