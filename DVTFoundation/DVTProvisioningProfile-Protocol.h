/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSDate, NSDictionary, NSSet, NSString;

@protocol DVTProvisioningProfile <NSObject>
@property(readonly) NSString *dataProtectionLevel;
@property(readonly) _Bool isGameCenterEnabled;
@property(readonly) _Bool isMapsEnabled;
@property(readonly) _Bool isInterAppAudioEnabled;
@property(readonly) _Bool isDataProtectionEnabled;
@property(readonly) _Bool isPassbookEnabled;
@property(readonly) _Bool isICloudEnabled;
@property(readonly) _Bool usesExplicitAppIdentifier;
@property(readonly) NSString *teamName;
@property(readonly) NSString *teamID;
@property(readonly) NSData *dataRepresentation;
@property(readonly) NSSet *supportedUDIDs;
@property(readonly) NSString *platform;
@property(readonly) NSString *preferredFilenameExtension;
@property(readonly) _Bool isMacProfile;
@property(readonly) _Bool hasGetTaskAllowEntitlement;
@property(readonly) _Bool isTeamProfile;
@property(readonly) _Bool isUniversal;
@property(readonly) NSString *expirationDateToolTip;
@property(readonly) _Bool expiredOrWillExpireSoon;
@property(readonly) _Bool willExpireSoon;
@property(readonly) _Bool expired;
@property(readonly) NSArray *identityCertificates;
@property(readonly) NSArray *certificates;
@property(readonly) NSString *localPath;
@property(readonly) NSDate *expirationDate;
@property(readonly) NSDate *creationDate;
@property(readonly) NSArray *teamIdentifierPrefixes;
@property(readonly) NSArray *appIdentifierPrefixes;
@property(readonly) NSString *appIdentifierEntitlementWithoutPrefix;
@property(readonly) NSString *appIdentifierEntitlement;
@property(readonly) NSDictionary *features;
@property(readonly) NSDictionary *entitlements;
@property(readonly) int version;
@property(readonly) NSString *name;
@property(readonly) NSString *UUID;
- (id)longDescription;
- (_Bool)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (long long)dateCompareDecending:(id)arg1;
- (long long)dateCompare:(id)arg1;
- (long long)localizedCompare:(id)arg1;
- (long long)compare:(id)arg1;
- (_Bool)canBeInstalledOnDevice:(id)arg1;
- (_Bool)containsCertificate:(struct OpaqueSecCertificateRef *)arg1;
- (_Bool)hasCertificateMatchingIdentity:(id)arg1 includeExpired:(_Bool)arg2;
- (_Bool)allowsFeatures:(id)arg1 missingFeatureKeys:(id *)arg2;
- (_Bool)allowsEntitlements:(id)arg1 offendingKey:(id *)arg2;
- (_Bool)allowsEntitlements:(id)arg1;
@end
