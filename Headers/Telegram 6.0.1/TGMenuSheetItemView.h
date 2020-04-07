//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <TelegramUI/UIViewControllerPreviewingDelegate-Protocol.h>

@class NSString, TGMenuSheetController;

@interface TGMenuSheetItemView : UIView <UIViewControllerPreviewingDelegate>
{
    double _screenHeight;
    long long _sizeClass;
    _Bool _requiresDivider;
    _Bool _requiresClearBackground;
    _Bool _handlesPan;
    _Bool _inhibitPan;
    _Bool _condensable;
    _Bool _distractable;
    _Bool _overflow;
    int _type;
    TGMenuSheetController *_menuController;
    CDUnknownBlockType _layoutUpdateBlock;
    CDUnknownBlockType _highlightUpdateBlock;
    CDUnknownBlockType _handleInternalPan;
}

@property(copy, nonatomic) CDUnknownBlockType handleInternalPan; // @synthesize handleInternalPan=_handleInternalPan;
@property(copy, nonatomic) CDUnknownBlockType highlightUpdateBlock; // @synthesize highlightUpdateBlock=_highlightUpdateBlock;
@property(copy, nonatomic) CDUnknownBlockType layoutUpdateBlock; // @synthesize layoutUpdateBlock=_layoutUpdateBlock;
@property(nonatomic) long long sizeClass; // @synthesize sizeClass=_sizeClass;
@property(nonatomic) double screenHeight; // @synthesize screenHeight=_screenHeight;
@property(nonatomic) _Bool overflow; // @synthesize overflow=_overflow;
@property(nonatomic) _Bool distractable; // @synthesize distractable=_distractable;
@property(nonatomic) _Bool condensable; // @synthesize condensable=_condensable;
@property(readonly, nonatomic) _Bool inhibitPan; // @synthesize inhibitPan=_inhibitPan;
@property(nonatomic) _Bool handlesPan; // @synthesize handlesPan=_handlesPan;
@property(nonatomic) _Bool requiresClearBackground; // @synthesize requiresClearBackground=_requiresClearBackground;
@property(nonatomic) _Bool requiresDivider; // @synthesize requiresDivider=_requiresDivider;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) __weak TGMenuSheetController *menuController; // @synthesize menuController=_menuController;
- (void).cxx_destruct;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
@property(readonly, nonatomic) UIView *previewSourceView;
- (void)menuView:(id)arg1 didDisappearAnimated:(_Bool)arg2;
- (void)menuView:(id)arg1 willDisappearAnimated:(_Bool)arg2;
- (void)menuView:(id)arg1 didAppearAnimated:(_Bool)arg2;
- (void)menuView:(id)arg1 willAppearAnimated:(_Bool)arg2;
- (void)didChangeAbsoluteFrame;
- (void)_didRotateToInterfaceOrientation:(long long)arg1;
- (void)_willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)_didLayoutSubviews;
- (void)_updateHeightAnimated:(_Bool)arg1;
- (void)requestMenuLayoutUpdate;
- (_Bool)passPanOffset:(double)arg1;
- (double)preferredHeightForWidth:(double)arg1 screenHeight:(double)arg2;
@property(readonly, nonatomic) double contentHeightCorrection;
- (void)setPallete:(id)arg1;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setDark;
- (id)initWithType:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
