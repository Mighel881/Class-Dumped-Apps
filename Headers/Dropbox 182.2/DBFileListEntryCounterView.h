//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DBContentView-Protocol.h"
#import "DBFileListEntryCounterDelegate-Protocol.h"

@class DBFileListEntryCounter, NSString, UILabel;
@protocol DBContentViewObject;

@interface DBFileListEntryCounterView : UIView <DBContentView, DBFileListEntryCounterDelegate>
{
    DBFileListEntryCounter *_counter;
    UILabel *_counterLabel;
}

+ (id)counterViewWithCounter:(id)arg1;
- (void).cxx_destruct;
- (void)db_setLabelWithCounts:(id)arg1;
- (void)fileEntryCollectionEntryCounter:(id)arg1 providedNewCounts:(id)arg2;
- (id)initWithCounter:(id)arg1;
- (struct CGSize)preferredLayoutSizeFittingSize:(struct CGSize)arg1;
@property(readonly, nonatomic) id <DBContentViewObject> contentViewObject;
- (void)contentViewObjectDidUpdate;
- (void)unbindFromContentViewObject;
- (void)bindToContentViewObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(readonly, nonatomic) struct CGSize intrinsicContentSize;
@property(readonly, nonatomic) _Bool isPretendingToNotBeAnAccessibilityElement;
@property(nonatomic, getter=isSelected) _Bool selected;
@property(readonly) Class superclass;

@end
