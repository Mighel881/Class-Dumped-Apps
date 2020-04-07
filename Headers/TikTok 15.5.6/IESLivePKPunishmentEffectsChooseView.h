//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSLivePopUpView.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSObject, NSString, UIButton;
@protocol IESLiveToastFactory, IESLiveUserService, OS_dispatch_source;

@interface IESLivePKPunishmentEffectsChooseView : HTSLivePopUpView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _effectApplyed;
    CDUnknownBlockType _applyBlock;
    unsigned long long _selectedIndex;
    id <IESLiveUserService> _userService;
    NSArray *_effects;
    NSObject<OS_dispatch_source> *_timer;
    UIButton *_applyBtn;
    id <IESLiveToastFactory> _toastFactory;
}

@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(nonatomic) _Bool effectApplyed; // @synthesize effectApplyed=_effectApplyed;
@property(retain, nonatomic) UIButton *applyBtn; // @synthesize applyBtn=_applyBtn;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) NSArray *effects; // @synthesize effects=_effects;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(copy, nonatomic) CDUnknownBlockType applyBlock; // @synthesize applyBlock=_applyBlock;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)applyBtnClicked;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1 effects:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
