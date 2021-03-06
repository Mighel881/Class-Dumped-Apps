//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMESetupSummaryItemModel-Protocol.h"

@class NSAttributedString, NSString, NSURL;

@interface HMESetupSummaryItemModel : NSObject <HMESetupSummaryItemModel>
{
    _Bool _completed;
    int _itemType;
    NSString *_title;
    NSString *_detailText;
    NSURL *_imageURL;
    NSURL *_actionURL;
    NSString *_iconName;
}

@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(readonly, copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(readonly, copy, nonatomic) NSURL *actionURL; // @synthesize actionURL=_actionURL;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) int itemType; // @synthesize itemType=_itemType;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasAction;
@property(readonly, copy, nonatomic) NSAttributedString *attributedDetailText;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 iconName:(id)arg3;
- (id)initWithSummaryItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

