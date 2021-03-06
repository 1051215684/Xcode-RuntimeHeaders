/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTableCellView.h"

@class NSButton, NSTrackingArea;

@interface IBAutolayoutIssueTableCellView : NSTableCellView
{
    NSTrackingArea *_trackingArea;
    NSButton *_actionButton;
    id _clickHandler;
    id _memberInDocument;
    id <IBAutolayoutIssueTableCellViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IBAutolayoutIssueTableCellViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id memberInDocument; // @synthesize memberInDocument=_memberInDocument;
@property(copy, nonatomic) id clickHandler; // @synthesize clickHandler=_clickHandler;
@property(retain, nonatomic) NSButton *actionButton; // @synthesize actionButton=_actionButton;
- (void).cxx_destruct;
- (void)didClickActionButton:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)_updateActionButtonVisibility;

@end

