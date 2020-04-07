//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEPOIDetailCellViewController.h"

@class AWEPOIDetailReserveItemView, AWEPOIDetailResponse, AWEPOIDetailStore;

@interface AWEPOIDetailReserveCellViewController : AWEPOIDetailCellViewController
{
    AWEPOIDetailResponse *_poiDetail;
    AWEPOIDetailReserveItemView *_bookItemView;
    AWEPOIDetailReserveItemView *_queueItemView;
    AWEPOIDetailStore *_store;
}

+ (double)modernFeedCellPreferedHeightForModel:(id)arg1 width:(double)arg2;
@property(retain, nonatomic) AWEPOIDetailStore *store; // @synthesize store=_store;
@property(retain, nonatomic) AWEPOIDetailReserveItemView *queueItemView; // @synthesize queueItemView=_queueItemView;
@property(retain, nonatomic) AWEPOIDetailReserveItemView *bookItemView; // @synthesize bookItemView=_bookItemView;
@property(retain, nonatomic) AWEPOIDetailResponse *poiDetail; // @synthesize poiDetail=_poiDetail;
- (void).cxx_destruct;
- (void)handleTap:(id)arg1;
- (void)didDisplaying;
- (void)viewDidLoad;
- (void)updateWithModel:(id)arg1;
- (id)initWithContext:(id)arg1;

@end
