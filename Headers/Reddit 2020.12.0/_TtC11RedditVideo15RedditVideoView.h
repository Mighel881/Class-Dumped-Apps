//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, _TtC11RedditVideo15PlayerLayerView, _TtC11RedditVideo16PlayerController;

@interface _TtC11RedditVideo15RedditVideoView : UIView
{
    // Error parsing type: , name: playerLayerView
    // Error parsing type: , name: videoAnalyticsLogger
    // Error parsing type: , name: delegate
    // Error parsing type: , name: placeholderView
    // Error parsing type: , name: snapshotView
    // Error parsing type: , name: playerController
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)reparentWithOtherVideoView:(id)arg1;
- (void)didExitPlayableVisibility;
- (void)didEnterPlayableVisibility;
- (void)pause;
- (void)play;
- (void)preload;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, copy) NSString *videoGravity;
@property(nonatomic) _Bool shouldAutorepeat;
@property(nonatomic) _Bool shouldAutoplay;
@property(nonatomic) _Bool isMuted;
@property(nonatomic, retain) _TtC11RedditVideo16PlayerController *playerController; // @synthesize playerController;
@property(nonatomic, readonly) _TtC11RedditVideo15PlayerLayerView *playerLayerView; // @synthesize playerLayerView;

@end
