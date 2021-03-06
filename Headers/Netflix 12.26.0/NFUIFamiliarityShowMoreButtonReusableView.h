//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUIFamiliarityReusableView.h"

#import "NFUICellFactoryItemProtocol-Protocol.h"
#import "NFUIFamiliarityShowMoreButtonViewDelegateProtocol-Protocol.h"
#import "NFUIFamiliarityViewCellProtocol-Protocol.h"

@class NFUIFamiliarityShowMoreButtonView, NSString;
@protocol NFUIReusableViewModelProtocol;

@interface NFUIFamiliarityShowMoreButtonReusableView : NFUIFamiliarityReusableView <NFUIFamiliarityViewCellProtocol, NFUICellFactoryItemProtocol, NFUIFamiliarityShowMoreButtonViewDelegateProtocol>
{
    id <NFUIReusableViewModelProtocol> viewModel;
    NFUIFamiliarityShowMoreButtonView *_wrappedView;
}

+ (id)viewModelForEntityId:(id)arg1;
+ (void)load;
+ (id)reuseIdentifier;
+ (_Bool)shouldReturnClassForType:(id)arg1 withModel:(id)arg2;
@property(retain, nonatomic) NFUIFamiliarityShowMoreButtonView *wrappedView; // @synthesize wrappedView=_wrappedView;
- (void).cxx_destruct;
- (void)cellDidEndDisplaying:(id)arg1;
- (void)cellWillDisplay:(id)arg1;
- (void)showMoreTapped;
- (void)setAlpha:(double)arg1;
- (void)setViewModel:(id)arg1;
- (id)viewModel;
- (struct CGSize)calculatedSize:(struct CGSize)arg1 withModel:(id)arg2 withCollectionView:(id)arg3;
- (void)doLayout:(struct CGSize)arg1 withCollectionView:(id)arg2;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

