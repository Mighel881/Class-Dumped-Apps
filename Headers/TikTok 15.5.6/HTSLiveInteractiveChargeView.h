//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSLiveInteractiveNavigationBaseView.h"

@class HTSLiveInteractiveAudienceStore, NSArray, UIButton, UILabel;
@protocol HTSLiveInteractiveAudienceActions, HTSLiveInteractiveChargeViewDelegate, HTSLiveViewHierarchyProvider, IESLiveContainerRouter, IESLiveEnvironment, IESLiveInternalRouter, IESLiveToastFactory;

@interface HTSLiveInteractiveChargeView : HTSLiveInteractiveNavigationBaseView
{
    id <HTSLiveInteractiveChargeViewDelegate> _delegate;
    UIButton *_chargeButton;
    UILabel *_tipLabel;
    NSArray *_chargeButtons;
    long long _currentSelectIndex;
    HTSLiveInteractiveAudienceStore *_store;
    id <HTSLiveInteractiveAudienceActions> _dispatcher;
    id <HTSLiveViewHierarchyProvider> _hierarchyProvider;
    id <IESLiveEnvironment> _appTarget;
    id <IESLiveToastFactory> _toastFactory;
    id <IESLiveInternalRouter> _internalRouter;
    id <IESLiveContainerRouter> _containerRouter;
}

@property(retain, nonatomic) id <IESLiveContainerRouter> containerRouter; // @synthesize containerRouter=_containerRouter;
@property(retain, nonatomic) id <IESLiveInternalRouter> internalRouter; // @synthesize internalRouter=_internalRouter;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(nonatomic) __weak id <HTSLiveViewHierarchyProvider> hierarchyProvider; // @synthesize hierarchyProvider=_hierarchyProvider;
@property(retain, nonatomic) id <HTSLiveInteractiveAudienceActions> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(nonatomic) __weak HTSLiveInteractiveAudienceStore *store; // @synthesize store=_store;
@property(nonatomic) long long currentSelectIndex; // @synthesize currentSelectIndex=_currentSelectIndex;
@property(retain, nonatomic) NSArray *chargeButtons; // @synthesize chargeButtons=_chargeButtons;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIButton *chargeButton; // @synthesize chargeButton=_chargeButton;
@property(nonatomic) __weak id <HTSLiveInteractiveChargeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)confirm;
- (id)buttonWithAttributedTitle:(id)arg1;
- (void)setupUI;
- (void)setupNavBar;
- (id)initWithStore:(id)arg1;

@end
