//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFAnnotationView.h>

#import <PSPDFKitUI/PSPDFSoundAnnotationPlayback-Protocol.h>
#import <PSPDFKitUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, PSPDFConfiguration, PSPDFPageView, PSPDFSoundAnnotation, PSPDFSoundAnnotationButtonView, PSPDFSoundAnnotationPlaybackCoordinator, PSPDFSoundAnnotationPlaybackInlineController;

@interface PSPDFSoundAnnotationView : PSPDFAnnotationView <UIGestureRecognizerDelegate, PSPDFSoundAnnotationPlayback>
{
    _Bool _selected;
    _Bool _shouldHighlightButton;
    _Bool _useInlinePlayer;
    PSPDFPageView *_pageView;
    double _zoomScale;
    PSPDFConfiguration *_configuration;
    PSPDFSoundAnnotationPlaybackCoordinator *_soundAnnotationPlaybackCoordinator;
    PSPDFSoundAnnotationPlaybackInlineController *_playbackInlineController;
    PSPDFSoundAnnotationButtonView *_buttonView;
}

@property(nonatomic) _Bool useInlinePlayer; // @synthesize useInlinePlayer=_useInlinePlayer;
@property(retain, nonatomic) PSPDFSoundAnnotationButtonView *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) PSPDFSoundAnnotationPlaybackInlineController *playbackInlineController; // @synthesize playbackInlineController=_playbackInlineController;
@property(nonatomic) __weak PSPDFSoundAnnotationPlaybackCoordinator *soundAnnotationPlaybackCoordinator; // @synthesize soundAnnotationPlaybackCoordinator=_soundAnnotationPlaybackCoordinator;
@property(nonatomic) _Bool shouldHighlightButton; // @synthesize shouldHighlightButton=_shouldHighlightButton;
- (void)setConfiguration:(id)arg1;
- (id)configuration;
- (double)zoomScale;
- (void)setSelected:(_Bool)arg1;
- (_Bool)isSelected;
- (void)setPageView:(id)arg1;
- (id)pageView;
- (void).cxx_destruct;
- (void)didHidePageView:(id)arg1;
- (void)annotationDidChangeState:(id)arg1;
- (void)annotationSelectionDidChange:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateFrame;
- (void)setFrame:(struct CGRect)arg1;
- (void)setZoomScale:(double)arg1;
- (void)didShowInlineControllerNotification:(id)arg1;
- (void)hideSoundAnnotationPlayerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showSoundAnnotationPlayerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setSoundAnnotationPlayerShown:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) __weak PSPDFSoundAnnotation *soundAnnotation;
- (void)setAnnotation:(id)arg1;
@property(readonly, nonatomic, getter=isSoundAnnotationPlayerShown) _Bool soundAnnotationPlayerShown;
- (void)didMoveToSuperview;
- (void)removeFromSuperview;
- (void)setClipsToBounds:(_Bool)arg1;
- (void)handleTap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)setNeedsDisplay;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

