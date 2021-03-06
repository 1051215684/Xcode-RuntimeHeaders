/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTableColumn.h"

@class DVTMapTable;

@interface DVTImageAndTextColumn : NSTableColumn
{
    DVTMapTable *_progressIndicators;
    id _outlineViewCollapseObservation;
    id _outlineViewExpandObservation;
    struct {
        unsigned int _tableViewIsOutlineView:1;
        unsigned int _reserved:31;
    } _imageAndTextColumnFlags;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)dataCellForRow:(long long)arg1;
- (id)_progressIndicatorWithKeyPath:(id)arg1 ofItem:(id)arg2 forNode:(id)arg3;
- (id)_configuredSpinningProgressIndicator;
- (void)updateBoundProgress;
- (void)updateBoundImage;
- (id)dvtExtraBindings;
- (void)awakeFromNib;
- (void)setTableView:(id)arg1;
- (void)_stopObservingExpandAndCollapseOfOutlineView;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)setupDataCell;

@end

