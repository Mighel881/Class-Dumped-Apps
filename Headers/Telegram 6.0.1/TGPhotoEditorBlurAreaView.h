//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <TelegramUI/TGPhotoEditorToolView-Protocol.h>
#import <TelegramUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, TGPhotoEditorLinearBlurView, TGPhotoEditorRadialBlurView;

@interface TGPhotoEditorBlurAreaView : UIView <UIGestureRecognizerDelegate, TGPhotoEditorToolView>
{
    int _type;
    TGPhotoEditorRadialBlurView *_radialBlurView;
    TGPhotoEditorLinearBlurView *_linearBlurView;
    _Bool isLandscape;
    CDUnknownBlockType _valueChanged;
    id _value;
    CDUnknownBlockType _interactionEnded;
    double toolbarLandscapeSize;
    struct CGSize _actualAreaSize;
}

@property(nonatomic) double toolbarLandscapeSize; // @synthesize toolbarLandscapeSize;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape;
@property(copy, nonatomic) CDUnknownBlockType interactionEnded; // @synthesize interactionEnded=_interactionEnded;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(copy, nonatomic) CDUnknownBlockType valueChanged; // @synthesize valueChanged=_valueChanged;
@property(nonatomic) struct CGSize actualAreaSize; // @synthesize actualAreaSize=_actualAreaSize;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isTracking;
- (_Bool)buttonPressed:(_Bool)arg1;
- (id)initWithEditorItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) CDUnknownBlockType interactionBegan;
@property(readonly) Class superclass;

@end
