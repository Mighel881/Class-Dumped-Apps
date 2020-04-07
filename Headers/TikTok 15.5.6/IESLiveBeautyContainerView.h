//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HTSLiveFilterPickerView, IESLiveSlideBeautyPickerView, NSMutableArray, UIButton;
@protocol IESLiveRoomService, IESLiveToastFactory, IESLiveTracker;

@interface IESLiveBeautyContainerView : UIView
{
    _Bool _onShowToast;
    IESLiveSlideBeautyPickerView *_beautyView;
    HTSLiveFilterPickerView *_filterView;
    IESLiveSlideBeautyPickerView *_makeupView;
    id <IESLiveTracker> _tracker;
    id <IESLiveRoomService> _roomService;
    id <IESLiveToastFactory> _toastFactory;
    double _sidePadding;
    NSMutableArray *_buttonArray;
    NSMutableArray *_viewArray;
    UIButton *_filterButton;
    UIButton *_makeupButton;
    UIView *_indicator;
}

@property(nonatomic) _Bool onShowToast; // @synthesize onShowToast=_onShowToast;
@property(retain, nonatomic) UIView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) UIButton *makeupButton; // @synthesize makeupButton=_makeupButton;
@property(retain, nonatomic) UIButton *filterButton; // @synthesize filterButton=_filterButton;
@property(retain, nonatomic) NSMutableArray *viewArray; // @synthesize viewArray=_viewArray;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(nonatomic) double sidePadding; // @synthesize sidePadding=_sidePadding;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(retain, nonatomic) id <IESLiveRoomService> roomService; // @synthesize roomService=_roomService;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) IESLiveSlideBeautyPickerView *makeupView; // @synthesize makeupView=_makeupView;
@property(retain, nonatomic) HTSLiveFilterPickerView *filterView; // @synthesize filterView=_filterView;
@property(retain, nonatomic) IESLiveSlideBeautyPickerView *beautyView; // @synthesize beautyView=_beautyView;
- (void).cxx_destruct;
- (void)buttonClicked:(id)arg1;
- (void)clearRedDotForView:(id)arg1;
- (void)configUIWithSegmentType:(unsigned long long)arg1 index:(long long)arg2;
- (void)loadSegments:(id)arg1;
- (void)disableBeautySelection:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
