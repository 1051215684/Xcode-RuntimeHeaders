/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEAssistant.h"

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class IDENavigatorDataCell, NSArray, NSPopUpButtonCell, NSTableView;

@interface Xcode3ProjectLocalizationLocaleAssistant : IDEAssistant <NSTableViewDelegate, NSTableViewDataSource>
{
    NSTableView *_tableView;
    NSPopUpButtonCell *_popupButtonCell;
    IDENavigatorDataCell *_nameAndImageCell;
    NSArray *_availableFileTypes;
    NSArray *_availableLocales;
}

+ (id)keyPathsForValuesAffectingCanFinish;
@property(readonly) NSArray *availableLocales; // @synthesize availableLocales=_availableLocales;
@property(readonly) NSArray *availableFileTypes; // @synthesize availableFileTypes=_availableFileTypes;
@property(retain) IDENavigatorDataCell *nameAndImageCell; // @synthesize nameAndImageCell=_nameAndImageCell;
@property(retain) NSPopUpButtonCell *popupButtonCell; // @synthesize popupButtonCell=_popupButtonCell;
@property(retain) NSTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)finishWithCompletionBlock:(id)arg1;
- (BOOL)alwaysShowFinish;
- (BOOL)canGoForward;
- (BOOL)canGoBack;
- (BOOL)canFinish;
- (id)assistantTitle;
- (id)tableView:(id)arg1 dataCellForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)context;
- (void)primitiveInvalidate;
- (void)loadView;

@end

