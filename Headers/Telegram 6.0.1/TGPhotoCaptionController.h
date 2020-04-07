//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/TGPhotoEditorTabController.h>

@class NSString, PGPhotoEditor, TGPhotoCaptionInputMixin, TGPhotoEditorPreviewView, TGSuggestionContext, UIView;
@protocol LegacyComponentsContext;

@interface TGPhotoCaptionController : TGPhotoEditorTabController
{
    UIView *_wrapperView;
    TGPhotoCaptionInputMixin *_captionMixin;
    NSString *_initialCaption;
    _Bool _transitionedIn;
    double _keyboardHeight;
    _Bool _appeared;
    id <LegacyComponentsContext> _context;
    CDUnknownBlockType _captionSet;
    TGSuggestionContext *_suggestionContext;
    PGPhotoEditor *_photoEditor;
    TGPhotoEditorPreviewView *_previewView;
}

@property(nonatomic) __weak TGPhotoEditorPreviewView *previewView; // @synthesize previewView=_previewView;
@property(nonatomic) __weak PGPhotoEditor *photoEditor; // @synthesize photoEditor=_photoEditor;
@property(retain, nonatomic) TGSuggestionContext *suggestionContext; // @synthesize suggestionContext=_suggestionContext;
@property(copy, nonatomic) CDUnknownBlockType captionSet; // @synthesize captionSet=_captionSet;
- (void).cxx_destruct;
- (void)updateLayout:(long long)arg1;
- (void)viewWillLayoutSubviews;
- (id)currentResultRepresentation;
- (id)snapshotView;
- (id)transitionOutReferenceView;
- (struct CGRect)transitionOutReferenceFrame;
- (void)_finishedTransitionInWithView:(id)arg1;
- (void)_animatePreviewViewTransitionOutToFrame:(struct CGRect)arg1 saving:(_Bool)arg2 parentView:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)isDismissAllowed;
- (_Bool)shouldAutorotate;
- (void)animateTransitionInWithDuration:(double)arg1 curve:(long long)arg2;
- (struct CGRect)_targetFrameForTransitionInFromFrame:(struct CGRect)arg1;
- (void)prepareTransitionInWithReferenceView:(id)arg1 referenceFrame:(struct CGRect)arg2 parentView:(id)arg3 noTransitionView:(_Bool)arg4;
- (void)transitionOutSwitching:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithContext:(id)arg1 photoEditor:(id)arg2 previewView:(id)arg3 caption:(id)arg4;

@end
