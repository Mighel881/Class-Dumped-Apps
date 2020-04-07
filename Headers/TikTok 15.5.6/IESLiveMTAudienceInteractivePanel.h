//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSLiveAudienceInteractivePanel.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString;
@protocol IESLiveEnvironment;

@interface IESLiveMTAudienceInteractivePanel : HTSLiveAudienceInteractivePanel <UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <IESLiveEnvironment> _appTarget;
}

@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
- (void).cxx_destruct;
- (void)changeToWaitingConnectStyle;
- (void)updateConnectionButton:(_Bool)arg1;
- (void)changeToDisConnectStyle;
- (void)changeToApplyConnectStyle;
- (id)waitingListFlowLayout;
- (id)profileCellForCollection:(id)arg1 indexPath:(id)arg2;
- (void)setupViews;
- (id)titleFormat;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
