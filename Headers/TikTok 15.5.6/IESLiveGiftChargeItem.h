//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveCollectionViewItemProtocol-Protocol.h"

@class IESLiveGiftPanelDataSharing, NSString, RACCommand;
@protocol HTSLiveDetailRouter, IESLiveEnvironment, IESLiveGiftPanelReaction, IESLiveUserService;

@interface IESLiveGiftChargeItem : NSObject <IESLiveCollectionViewItemProtocol>
{
    _Bool _enable;
    _Bool _userInteractionEnabled;
    Class _cellClass;
    id <IESLiveGiftPanelReaction> _reaction;
    RACCommand *_chargeActionCommand;
    RACCommand *_firstChargeActionCommand;
    IESLiveGiftPanelDataSharing *_giftPanelDataSharing;
    CDUnknownBlockType _updateFirstChargeBannerBlock;
    id <IESLiveEnvironment> _appTarget;
    id <IESLiveUserService> _userService;
    id <HTSLiveDetailRouter> _router;
    struct CGSize _cellSize;
}

@property(retain, nonatomic) id <HTSLiveDetailRouter> router; // @synthesize router=_router;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(nonatomic) _Bool userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(copy, nonatomic) CDUnknownBlockType updateFirstChargeBannerBlock; // @synthesize updateFirstChargeBannerBlock=_updateFirstChargeBannerBlock;
@property(readonly, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing; // @synthesize giftPanelDataSharing=_giftPanelDataSharing;
@property(readonly, nonatomic) RACCommand *firstChargeActionCommand; // @synthesize firstChargeActionCommand=_firstChargeActionCommand;
@property(readonly, nonatomic) RACCommand *chargeActionCommand; // @synthesize chargeActionCommand=_chargeActionCommand;
@property(nonatomic) __weak id <IESLiveGiftPanelReaction> reaction; // @synthesize reaction=_reaction;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(retain, nonatomic) Class cellClass; // @synthesize cellClass=_cellClass;
- (void).cxx_destruct;
- (void)p_firstRechargeAction;
- (void)p_rechargeAction;
- (void)updateFirstChargeBanner;
- (id)initWithGiftPanelDataSharing:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) RACCommand *didSelectItemCommand;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
