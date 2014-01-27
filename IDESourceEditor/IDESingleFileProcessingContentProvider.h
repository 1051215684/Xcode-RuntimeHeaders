/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTGeneratedContentProvider.h"

@interface IDESingleFileProcessingContentProvider : DVTGeneratedContentProvider
{
    id _completionBlock;
    id _generatedFilesObserver;
    id _pendingBuildNotificationToken;
}

+ (id)generatedContentURLForFileURL:(id)arg1;
+ (BOOL)_canProcessURL:(id)arg1;
+ (id)_blacklistedUTISet;
+ (id)sourceFilePathForGeneratedContentURL:(id)arg1;
+ (int)buildOperationCommand;
+ (id)urlScheme;
+ (void)setSingleFileProcessingSchemeCommand:(id)arg1;
+ (id)singleFileProcessingSchemeCommand;
+ (void)initialize;
- (void).cxx_destruct;
- (void)generateContentForURL:(id)arg1 waitingBlock:(id)arg2 completionBlock:(void)arg3;
- (void)_kickOffContentGenerationWithFilePath:(id)arg1 schemeCommand:(id)arg2;
- (void)_observeGeneratedFileNotificationsForFilePath:(id)arg1;

@end
