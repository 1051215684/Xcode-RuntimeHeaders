/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"
#import "DVTXMLUnarchiving-Protocol.h"

@class DVTCustomDataSpecifier, DVTStackBacktrace, IDEContainer<DVTCustomDataStoring>, NSArray, NSMutableArray, NSString;

@interface IDEBreakpointBucket : NSObject <DVTXMLUnarchiving, DVTInvalidation>
{
    int _type;
    IDEContainer<DVTCustomDataStoring> *_archivingContainer;
    DVTCustomDataSpecifier *_archivingDataSpecifier;
    NSString *_archivingContainerItemBaseStandardizedPathString;
    NSString *_displayName;
    NSMutableArray *_breakpoints;
    BOOL _currentlyDecoding;
}

+ (id)keyPathsForValuesAffectingDisplayName;
+ (id)keyPathsForValuesAffectingShared;
+ (id)userGlobalBucket:(id *)arg1;
+ (void)initialize;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) IDEContainer<DVTCustomDataStoring> *archivingContainer; // @synthesize archivingContainer=_archivingContainer;
@property(readonly) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)_legacyLogicOnUnarchivingArraysOfBreakpoints:(id)arg1;
- (void)addExceptionBreakpoints:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addSymbolicBreakpoints:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addFileBreakpoints:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addBreakpoints:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (id)_breakpointArchivingProxiesArray;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (id)_displayNameForWorkspace;
- (id)archivingContainerItemBaseStandardizedPathString;
- (void)_persistBreakpoints;
- (void)notifyPersistencyStateChanged;
- (BOOL)removeBreakpoint:(id)arg1;
- (void)addBreakpoint:(id)arg1;
@property(readonly, getter=isShared) BOOL shared;
- (BOOL)containsBreakpoint:(id)arg1;
- (id)initWithType:(int)arg1 archivingContainer:(id)arg2 error:(id *)arg3;
- (BOOL)_isErrorNoSuchFileError:(id)arg1;
- (BOOL)_decodeFromContainer:(id *)arg1;
- (void)_encodeToContainer;
- (BOOL)_shouldEncodeDecode;
- (id)_archivingDataSpecifierWithName:(id)arg1;
@property(readonly) DVTCustomDataSpecifier *archivingDataSpecifier;
- (id)_archivingDataStore;
- (id)init;

// Remaining properties
@property(readonly) NSArray *breakpoints; // @dynamic breakpoints;
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) NSMutableArray *mutableBreakpoints; // @dynamic mutableBreakpoints;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

