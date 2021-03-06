//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSMutableArray, NSURL, YTIMobileBroadcastSetupEventButtonRenderer, YTLCBroadcastScheduleCollectionCellButton, YTLCThumbnailView;

@interface YTLCBroadcastScheduleCollectionViewCell : UICollectionViewCell
{
    NSMutableArray *_accessibilityElements;
    _Bool _doneLoading;
    YTLCBroadcastScheduleCollectionCellButton *_button;
    YTLCThumbnailView *_thumbnailView;
    NSURL *_thumbnailURL;
    YTIMobileBroadcastSetupEventButtonRenderer *_renderer;
    YTLCBroadcastScheduleCollectionCellButton *_deleteButton;
}

@property(nonatomic, getter=isDoneLoading) _Bool doneLoading; // @synthesize doneLoading=_doneLoading;
@property(retain, nonatomic) YTLCBroadcastScheduleCollectionCellButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) YTIMobileBroadcastSetupEventButtonRenderer *renderer; // @synthesize renderer=_renderer;
@property(retain, nonatomic) NSURL *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
@property(retain, nonatomic) YTLCThumbnailView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) YTLCBroadcastScheduleCollectionCellButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

