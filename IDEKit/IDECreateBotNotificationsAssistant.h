/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEAssistant.h>

#import "NSTokenFieldDelegate-Protocol.h"

@class NSButton, NSTokenField;

@interface IDECreateBotNotificationsAssistant : IDEAssistant <NSTokenFieldDelegate>
{
    BOOL _viewIsInstalled;
    NSTokenField *_additionalEmailOnSuccessTokenField;
    NSTokenField *_additionalEmailOnFailureTokenField;
    NSButton *_onSuccessCommittersCheckbox;
    NSButton *_onFailureCommittersCheckbox;
}

+ (id)keyPathsForValuesAffectingCanGoForward;
+ (id)keyPathsForValuesAffectingCreateBotAssistantContext;
@property(retain, nonatomic) NSButton *onFailureCommittersCheckbox; // @synthesize onFailureCommittersCheckbox=_onFailureCommittersCheckbox;
@property(retain, nonatomic) NSButton *onSuccessCommittersCheckbox; // @synthesize onSuccessCommittersCheckbox=_onSuccessCommittersCheckbox;
@property(retain, nonatomic) NSTokenField *additionalEmailOnFailureTokenField; // @synthesize additionalEmailOnFailureTokenField=_additionalEmailOnFailureTokenField;
@property(retain, nonatomic) NSTokenField *additionalEmailOnSuccessTokenField; // @synthesize additionalEmailOnSuccessTokenField=_additionalEmailOnSuccessTokenField;
@property(nonatomic) BOOL viewIsInstalled; // @synthesize viewIsInstalled=_viewIsInstalled;
- (void).cxx_destruct;
- (BOOL)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 menuForRepresentedObject:(id)arg2;
- (void)_showEmailContactCard:(id)arg1;
- (BOOL)tokenField:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3;
- (id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2;
- (id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 completionsForSubstring:(id)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long *)arg4;
- (id)_personForEmailString:(id)arg1;
- (id)_personForEmailAddress:(id)arg1;
- (id)_emailAddressFromString:(id)arg1;
- (id)_quoteDisplayNameIfNeeded:(id)arg1;
- (id)_displayNameFromProperties:(id)arg1;
- (BOOL)alwaysShowFinish;
- (BOOL)canGoForward;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (id)finishButtonTitle;
- (id)nextAssistantIdentifier;
- (id)createBotAssistantContext;
- (void)onFailureCheckboxDidChange:(id)arg1;
- (void)onSuccessCheckboxDidChange:(id)arg1;

@end
