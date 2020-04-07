//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class HTSLiveGiftItem, IESLiveGiftPanelDataSharing, IESLiveRoomGiftItemCellComboView, IESLiveRoomGiftItemCellSelectedView, RACDisposable, UIImageView, UILabel, UIView;
@protocol HTSLiveGiftActions, IESLiveEnvironment, IESLiveMonitor, IESLiveSettings, IESLiveToastFactory, IESLiveTracker, IESLiveWebImageService;

@interface IESLiveRoomGiftItemCell : UICollectionViewCell
{
    _Bool _selectedViewShowing;
    IESLiveGiftPanelDataSharing *_giftPanelDataSharing;
    CDUnknownBlockType _onSend;
    CDUnknownBlockType _onEnd;
    id <HTSLiveGiftActions> _dispatcher;
    id <IESLiveEnvironment> _appTarget;
    id <IESLiveSettings> _liveSettings;
    id <IESLiveMonitor> _monitor;
    id <IESLiveTracker> _tracker;
    id <IESLiveWebImageService> _imageService;
    id <IESLiveToastFactory> _toastFactory;
    HTSLiveGiftItem *_giftItem;
    unsigned long long _countdownDuration;
    RACDisposable *_bindToken;
    UIView *_giftItemContentView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIImageView *_subTitleLeftIConView;
    UIImageView *_subTitleRightIConView;
    UIView *_subtitleConainter;
    UILabel *_balanceLabel;
    UIImageView *_giftImageView;
    UIImageView *_activityFlagIcon;
    UILabel *_hintLabel;
    UIView *_hintBackground;
    UIImageView *_badgeImageView;
    IESLiveRoomGiftItemCellSelectedView *_giftSelectedView;
    IESLiveRoomGiftItemCellComboView *_comboView;
}

@property(nonatomic) _Bool selectedViewShowing; // @synthesize selectedViewShowing=_selectedViewShowing;
@property(retain, nonatomic) IESLiveRoomGiftItemCellComboView *comboView; // @synthesize comboView=_comboView;
@property(retain, nonatomic) IESLiveRoomGiftItemCellSelectedView *giftSelectedView; // @synthesize giftSelectedView=_giftSelectedView;
@property(retain, nonatomic) UIImageView *badgeImageView; // @synthesize badgeImageView=_badgeImageView;
@property(retain, nonatomic) UIView *hintBackground; // @synthesize hintBackground=_hintBackground;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UIImageView *activityFlagIcon; // @synthesize activityFlagIcon=_activityFlagIcon;
@property(retain, nonatomic) UIImageView *giftImageView; // @synthesize giftImageView=_giftImageView;
@property(retain, nonatomic) UILabel *balanceLabel; // @synthesize balanceLabel=_balanceLabel;
@property(retain, nonatomic) UIView *subtitleConainter; // @synthesize subtitleConainter=_subtitleConainter;
@property(retain, nonatomic) UIImageView *subTitleRightIConView; // @synthesize subTitleRightIConView=_subTitleRightIConView;
@property(retain, nonatomic) UIImageView *subTitleLeftIConView; // @synthesize subTitleLeftIConView=_subTitleLeftIConView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *giftItemContentView; // @synthesize giftItemContentView=_giftItemContentView;
@property(retain, nonatomic) RACDisposable *bindToken; // @synthesize bindToken=_bindToken;
@property(nonatomic) unsigned long long countdownDuration; // @synthesize countdownDuration=_countdownDuration;
@property(retain, nonatomic) HTSLiveGiftItem *giftItem; // @synthesize giftItem=_giftItem;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(retain, nonatomic) id <IESLiveWebImageService> imageService; // @synthesize imageService=_imageService;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <IESLiveMonitor> monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) id <IESLiveSettings> liveSettings; // @synthesize liveSettings=_liveSettings;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) id <HTSLiveGiftActions> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(copy, nonatomic) CDUnknownBlockType onEnd; // @synthesize onEnd=_onEnd;
@property(copy, nonatomic) CDUnknownBlockType onSend; // @synthesize onSend=_onSend;
@property(retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing; // @synthesize giftPanelDataSharing=_giftPanelDataSharing;
- (void).cxx_destruct;
- (void)stopComboAnimation;
- (void)startComboAnimation;
- (void)loadViews;
- (void)hideSelectedView;
- (void)showSelectedView:(_Bool)arg1;
- (void)prepareForReuse;
- (void)updateSubTitleIcon:(id)arg1;
- (void)updateWithItem:(id)arg1;
- (void)unbindIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
