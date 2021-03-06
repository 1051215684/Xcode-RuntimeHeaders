/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTCancellable-Protocol.h"

@class DVTStackBacktrace;

@interface DVTNotificationToken : NSObject <DVTCancellable>
{
    id _observer;
    id _observedObject;
    id _cancellationBlock;
    DVTStackBacktrace *_creationBacktrace;
    void *_keepSelfAliveUntilCancellationRef;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
@property(readonly, getter=isCancelled) BOOL cancelled;
- (id)initWithObserver:(id)arg1 observedObject:(id)arg2 cancellationBlock:(id)arg3;
- (void)setCancellationBlock:(id)arg1;

@end

