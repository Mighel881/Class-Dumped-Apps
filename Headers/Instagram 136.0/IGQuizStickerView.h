//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/IGConstrainedSizeStickerViewType-Protocol.h>
#import <InstagramAppCoreFramework/IGQuizStickerOptionCellDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStickerViewType-Protocol.h>
#import <InstagramAppCoreFramework/IGTappableStickerViewType-Protocol.h>
#import <InstagramAppCoreFramework/IGUnpinnableStickerViewType-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDataSource-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UITextViewDelegate-Protocol.h>

@class CAShapeLayer, IGGradientView, IGTextView, IGTooltipView, NSArray, NSDictionary, NSNumber, NSString, UICollectionView, UITapGestureRecognizer;
@protocol IGQuizStickerViewDelegate;

@interface IGQuizStickerView : UIView <UITextViewDelegate, IGQuizStickerOptionCellDelegate, UICollectionViewDataSource, UICollectionViewDelegate, IGStickerViewType, IGTappableStickerViewType, IGConstrainedSizeStickerViewType, IGUnpinnableStickerViewType>
{
    UIView *_containerCardView;
    IGTextView *_questionTextView;
    IGGradientView *_questionContainer;
    UICollectionView *_optionsCollectionView;
    CAShapeLayer *_borderLayer;
    NSArray *_options;
    unsigned long long _correctOption;
    NSString *_pk;
    _Bool _viewerCanAnswer;
    NSNumber *_viewerAnswer;
    _Bool _creationMode;
    _Bool _hasEditedQuestion;
    IGTooltipView *_creationTooltip;
    _Bool _hasShownCreationTooltip;
    _Bool _isTransitioningAnimationForCorrectVote;
    NSArray *_sharedResults;
    _Bool _animatingFinalizeCreation;
    UITapGestureRecognizer *_tapProtector;
    _Bool _editingQuestion;
    _Bool _isSharedResult;
    _Bool _interactiveElementsEnabled;
    _Bool _shouldRenderAddCell;
    id <IGQuizStickerViewDelegate> _delegate;
    NSArray *_colorSchemeColors;
    unsigned long long _colorScheme;
}

@property(nonatomic) _Bool shouldRenderAddCell; // @synthesize shouldRenderAddCell=_shouldRenderAddCell;
@property(nonatomic) _Bool interactiveElementsEnabled; // @synthesize interactiveElementsEnabled=_interactiveElementsEnabled;
@property(readonly, nonatomic) _Bool isSharedResult; // @synthesize isSharedResult=_isSharedResult;
@property(nonatomic, getter=isEditingQuestion) _Bool editingQuestion; // @synthesize editingQuestion=_editingQuestion;
@property(nonatomic) unsigned long long colorScheme; // @synthesize colorScheme=_colorScheme;
@property(retain, nonatomic) NSArray *colorSchemeColors; // @synthesize colorSchemeColors=_colorSchemeColors;
@property(nonatomic) __weak id <IGQuizStickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)outlinePath;
- (double)maximumScale;
- (double)minimumScale;
- (_Bool)constrainStickerWithBoundingBox;
- (_Bool)disableStickerPinning;
- (id)tapModelObject;
- (id)stickerView;
- (id)loggingId;
- (double)_percentageVoteAtIndex:(unsigned long long)arg1;
- (void)_applyState:(unsigned long long)arg1 toCell:(id)arg2 atIndexPath:(id)arg3 animated:(_Bool)arg4;
- (unsigned long long)_stateForCellAtIndex:(id)arg1;
- (_Bool)_optionsComplete;
- (void)_reloadCellStates;
- (void)_hideTooltip;
- (void)_showTooltipIfNecessary;
- (id)_textViewWithQuestion:(id)arg1;
- (void)_refreshAddCell;
- (void)quizStickerOptionCell:(id)arg1 didUpdateText:(id)arg2;
- (void)quizStickerOptionCellDidTapNext:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)castVoteWithIndex:(id)arg1;
- (id)voteIndexAtPointInWindowCoordinates:(struct CGPoint)arg1;
@property(readonly, nonatomic) NSDictionary *sharedResultLoggingMetadata;
- (id)consumptionModel;
@property(readonly, nonatomic) _Bool isComplete;
- (void)finalizeCreationAnimated:(_Bool)arg1;
@property(retain, nonatomic) NSString *questionText;
- (void)paste:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_defaultInitWithQuestion:(id)arg1;
- (id)initConsumptionViewWithConsumptionModel:(id)arg1;
- (id)initCreationView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

