/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEFoundation/IDEExecutionTracker.h>

#import "IDERunOperationWorkerTracker-Protocol.h"

@class IDERunOperationWorker;

@interface IDEExecutionRunnableTracker : IDEExecutionTracker <IDERunOperationWorkerTracker>
{
    IDERunOperationWorker *_worker;
    BOOL _finishedRunning;
}

- (void).cxx_destruct;
- (void)runningDidFinish:(id)arg1 withError:(id)arg2;
- (void)cancel;
- (BOOL)isFinished;
- (id)initWithWorker:(id)arg1;

@end

